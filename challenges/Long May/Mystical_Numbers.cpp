#include <bits/stdc++.h>
#include <stdint.h>

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

// static inline uint32_t log2(const uint32_t x) {
//   uint32_t y;
//   asm("\tbsr %1, %0\n" : "=r"(y) : "r"(x));
//   return y;
// }
///////////////////////////////////////////////////////////////

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<vector<int>> cn;
    vector<int> zs;

    for (auto &i : arr) cin >> i;
    vector<int> MSB(40, 0);

    for (int i = 0; i < n; i++) {
      // index of MSB in arr[i]
      if (arr[i] == 0) {
        zs.push_back(1);
        cn.push_back(MSB);
      } else {
        zs.push_back(0);
        int MSB_index = log2(arr[i]);
        MSB[MSB_index]++;
        cn.push_back(MSB);
      }
    }

    // prefix for zs
    for (int i = 1; i < zs.size(); i++) {
      zs[i] += zs[i - 1];
    }

    // debug(zs);

    int q;
    cin >> q;
    while (q--) {
      int l, r, x;
      cin >> l >> r >> x;

      // debug(cn);

      vector<int> ff;
      for (int i = 0; i < 33; i++) {
        ll rl = l - 2;
        if (l - 2 < 0) {
          ff.push_back(cn[r - 1][i]);
        } else {
          ff.push_back(cn[r - 1][i] - cn[l - 2][i]);
        }
      }

      // cout << "happening";
      // special zs case
      ll extra = 0;
      if (l - 2 < 0)
        extra += zs[r - 1];
      else
        extra += zs[r - 1] - zs[l - 2];

      // debug(extra);
      // debug(ff);
      if(x == 0) extra = 0;

      int bad = -1;
      if (x > 0) bad = log2(x);
      ll ans = 0;
      for (int i = 0; i < ff.size(); i++) {
        if (i != bad) {
          ans += ff[i];
        }
      }

      cout << ans + extra << '\n';
    }
  }
  return 0;
}

///////////////////////////////////////////////////////////////