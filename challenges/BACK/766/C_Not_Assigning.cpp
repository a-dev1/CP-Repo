#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAX 100005
#define inf LLONG_MAX
#define MIN INT_MIN
#define mod 1000000007
#define PIE 3.141592653589793238
#define RANDOM srand(time(nullptr))

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int powmod(int a, int b) {
  int res = 1;
  if (a >= mod) a %= mod;
  for (; b; b >>= 1) {
    if (b & 1) res = res * a;
    if (res >= mod) res %= mod;
    a = a * a;
    if (a >= mod) a %= mod;
  }
  return res;
}
int mul_ab_mod_c(int a, int b, int c) {
  int x = 0, y = a % c;
  while (b > 0) {
    if (b & 1) x = (x + y) % c;
    y = (y << 1) % c;
    b >>= 1;
  }
  return x;
}

vector<int> ans;
void dfs(int node, bool flag, map<int, vector<int>>& mp) {
  if (ans[node] == 0 and flag == false) {
    ans[node] = 5;
    flag = true;
  } else if (ans[node] == 0 and flag == true) {
    ans[node] = 2;
    flag = false;
  }
  for (auto x : mp[node]) {
    if (ans[x] == 0) {
      dfs(x, flag, mp);
    }
  }
}
void solve() {
  int n;
  cin >> n;

  int temp = n - 1;
  map<int, vector<int>> l;
  while (temp--) {
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    l[x].push_back(y);
    l[y].push_back(x);
  }
  vector<int> indeg(200005);
  ans.resize(n);
  for (int i = 0; i < n; i++) {
    for (auto x : l[i]) {
      indeg[x]++;
    }
  }

  bool flag = true;
  int start = -1;
  int fo = 0;
  if (n == 2) {
    cout << 5 << "\n";
    return;
  }
  for (int i = 0; i < n + 1; i++) {
    if (indeg[i] > 2) {
      flag = false;
      break;
    } else if (indeg[i] == 1 and fo == 0) {
      start = i;
      fo = 1;
    }
  }

  if (flag == false) {
    cout << "-1\n";
    return;
  }
  bool f = true;
  dfs(start, f, l);
  for (int i = 0; i < n - 1; i++) cout << ans[i] << " ";

  cout << "\n";
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  RANDOM;
  int t;
  cin >> t;
  while (t--) solve();
}