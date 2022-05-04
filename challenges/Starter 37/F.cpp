#include <bits/stdc++.h>

#define code_brains                 \
  ;                                 \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(0);
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double lld;

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
#define endl "\n"
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#define present(c, x) (c.find(x) != c.end())
#define desc greater<int>()
#define fi first
#define se second
#define bg begin()
#define ed end()
#define set_bits __builtin_popcountint
#define vl vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define pi pair<int, int>
#define pl pair<ll, ll>

int M = 1e9 + 7;
int power(int a, int n) {
  int result = 1;
  while (n) {
    if (n & 1) result = (result * (ll)a) % M;
    n >>= 1;
    a = (a * (ll)a) % M;
  }
  return result;
}

int power(int a, int n);
int minv(int a) { return power(a, M - 2); }
int mod(int n) { return (n % M + M) % M; }
int modM(int n, int m) { return ((ll)(n % M) * (m % M)) % M; }
int modA(int n, int m) { return ((ll)(n % M) + (m % M)) % M; }
int modS(int n, int m) { return (((ll)(n % M) - (m % M)) + M) % M; }
int modD(int n, int m) { return ((ll)(n % M) * (minv(m) % M)) % M; }
int lcm(int a, int b) { return ((ll)a * b) / __gcd(a, b); }

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T>
void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

///////////////////////////////////////////////////////////////

int main() {
  code_brains;
  ll t, n, i, j, ans, temp, sum, m, q;
  string sans;
  t = 1;
  // cin >> t;
  while (t--) {
    sans = "NO";
    ans = temp = sum = 0;
    cin >> n >> m >> q;
    vector<vll> a(n + 5, vll(m + 5, 0));
    ll tot = 0;
    for (i = 1; i <= n; i++) {
      string s;
      cin >> s;
      for (j = 1; j <= m; j++) {
        if (s[j - 1] == '*') {
          a[i][j] = 1;
          tot++;
        }
      }
    }
    vector<vll> psum(n + 5, vll(m + 5, 0));
    for (j = 1; j <= m; j++) {
      for (i = 1; i <= n; i++) {
        psum[i][j] = psum[i - 1][j] + a[i][j];
      }
    }
    ll iter;
    for (iter = 1; iter <= q; iter++) {
      ll x, y;
      cin >> x >> y;
      if (a[x][y] == 1) {
        a[x][y] = 0;
        tot--;
      } else {
        a[x][y] = 1;
        tot++;
      }
      for (i = x; i <= n; i++) {
        psum[i][y] = psum[i - 1][y] + a[i][y];
      }

      ll rem, div;
      div = tot / n;
      rem = tot % n;
      ans = 0;
      fo(i, 1, div) { ans += psum[n][i]; }
      ans += psum[rem][div + 1];
      ans = tot - ans;
      cout << ans << "\n";
    }
  }
  return 0;
}

///////////////////////////////////////////////////////////////