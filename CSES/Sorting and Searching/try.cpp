#include <bits/stdc++.h>
using namespace std;
//---------------------------------------------------------------------------------------------//
#define int long long
#define MAX 100005
#define PFfirst
#define PS second
#define PB push_back
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

//-----------------------------------------------------------------------------------------------------//

//-----------------------------------------MAIN
//CODE---------------------------------------------------//

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  map<int, int> mp;
  for (auto &i : v) {
    cin >> i;
    mp[i]++;
  }
  vector<int> cost(m);
  for (auto &i : cost) cin >> i;
  sort(begin(v), end(v));

  for (auto x : cost) {
    if (mp.size() == 0) {
      cout << -1 << "\n";
      continue;
    }
    auto it = mp.lower_bound(x);
    int a = (*it).first;
    if (a > x and it == begin(mp)) {
      cout << -1 << "\n";
      continue;
    } else if (a > x) {
      it--;
      int a = (*it).first;
      mp[a]--;
      if (mp[a] == 0) mp.erase(a);
      cout << a << "\n";
    } else {
      int a = (*it).first;
      mp[a]--;
      if (mp[a] == 0) mp.erase(a);
      cout << a << "\n";
    }
  }
}

signed main() {
  // int t; cin >> t;
  // while(t--)
  solve();
}