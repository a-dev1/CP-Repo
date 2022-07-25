#include <bits/stdc++.h>
using namespace std;
//---------------------------------------------------------------------------------------------//
// #define int long long
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
struct FenwickTree {
  vector<int> bit;  // binary indexed tree
  int n;

  FenwickTree(int n) {
    this->n = n;
    bit.assign(n, 0);
  }

  FenwickTree(vector<int> a) : FenwickTree(a.size()) {
    for (size_t i = 0; i < a.size(); i++) add(i, a[i]);
  }

  int sum(int r) {
    int ret = 0;
    for (; r >= 0; r = (r & (r + 1)) - 1) ret += bit[r];
    return ret;
  }

  int sum(int l, int r) { return sum(r) - sum(l - 1); }

  void add(int idx, int delta) {
    for (; idx < n; idx = idx | (idx + 1)) bit[idx] += delta;
  }
};
int modulo_Euclidean(int a, int b) {
  int m = a % b;
  if (m < 0) {
    m = (b < 0) ? m - b : m + b;
  }
  return m;
}

//-----------------------------------------MAIN
// CODE---------------------------------------------------//
double findMedian(vector<int>& a, int n) {
  if (n % 2 != 0) return (double)a[n / 2];
  return (double)((double)a[(n - 1) / 2.0] + (double)a[n / 2]) / 2.0;
}
void getSolved() {
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (auto& x : v) cin >> x;
  sort(begin(v), end(v));
  int j = n - 1;
  int sum = 0;
  while (m > 1) {
    sum += v[j--];
    m--;
  }

  vector<int> clone;
  for (int i = 0; i < n - m; i++) {
    clone.push_back(v[i]);
  }

  lld sum = 0.0;
  if(n == 1) {
    for(int i = 0; i < n; i++) {
      sum += v[i];
    }
    cout << setprecision(4) << sum/(lld)n << '\n';
    return;
  }
  double ans = findMedian(clone, n - m);
  cout << findMedian(clone, n - m) + (double)sum << "\n";
}

signed main() {
  int t;
  cin >> t;
  int i = 1;
  while (t--) {
    cout << "Case #" << i++ << ": ";
    getSolved();
  }
}