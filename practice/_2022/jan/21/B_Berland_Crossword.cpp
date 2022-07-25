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

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    int n, u, l, b, r;
    cin >> n >> u >> l >> b >> r;

    int u1 = u, l1 = l, b1 = b, r1 = r;

    if (u == n) {
      l1--;
      r1--;
    }
    if (b == n) {
      l1--;
      r1--;
    }
    if (l == n) {
      u1--;
      b1--;
    }
    if (r == n) {
      u1--;
      b1--;
    }

    if (u == n - 1) {
      if (l1 > r1)
        l1--;
      else
        r1--;
    }
    if (b == n - 1) {
      if (l1 > r1)
        l1--;
      else
        r1--;
    }
    if (l == n - 1) {
      if (u1 > b1)
        u1--;
      else
        b1--;
    }
    if (r == n - 1) {
      if (u1 > b1)
        u1--;
      else
        b1--;
    }
    vector<int> deeee = {u1, r1, b1, l1};
    debug(deeee);
    if (u1 < 0 || b1 < 0 || l1 < 0 || r1 < 0) {
      cout << "NO\n";
      continue;
    }
    cout << "YES\n";
  }
  return 0;
}

///////////////////////////////////////////////////////////////