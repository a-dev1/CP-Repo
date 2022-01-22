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
    int n, u, r, d, l;
    cin >> n >> u >> r >> d >> l;

    int udmax = max(u, d);
    int lrmax = max(l, r);

    // 2 2 1 2
    // 2 2 0 0
    // 1 0 1 1
    // 1 2 2 2

    int sabseMax = max(udmax, lrmax);

    if (n == 2) {
      if ((u == 0 && d == 0) && ((l != 0) || (r != 0))) {
        cout << "NO\n";
        continue;
      } else if ((l == 0 && r == 0) && ((u != 0) || (d != 0))) {
        cout << "NO\n";
        continue;
      }
      // int ua = 2, ra = 2, da = 2, la = 2;
      // int udmx = max(u, d);
      // int lrmx = max(l, r);
      if ((u == 1 || d == 1) && (l == 0 && r == 0)) {
        cout << "NO\n";
        continue;
      } else if ((u == 2 || d == 2) && (l == 0 || r == 0)) {
        cout << "NO\n";
        continue;
      }

      if ((l == 1 || r == 1) && (u == 0 && d == 0)) {
        cout << "NO\n";
        continue;
      } else if ((l == 2 || r == 2) && (u == 0 || d == 0)) {
        cout << "NO\n";
        continue;
      }
      cout << "YES\n";
    }


    if (sabseMax == udmax && sabseMax == lrmax && min(u, d) == udmax &&
        udmax == n) {
      if (l < 2 || r < 2) {
        cout << "NO\n";
        continue;
      }
    }

    if (sabseMax == udmax) {
      int ml = 0, mr = 0, mk = 0, mk2 = 0;
      if (u == n && d == n) {
        ml = 2;
        mr = 2;
      } else if (udmax == n) {
        ml = 1;
        mr = 1;
        if (min(u, d) > n - 2) mk = 1;
      } else if (udmax > n - 2) {
        mk = 1;
        if (min(u, d) == udmax) mk2 = 1;
      }
      // debug(mr);
      // debug(ml);
      // debug(mk);
      // debug(mk2);
      // 4 2 4 4

      // check of less values
      if (l < ml || r < mr) {
        cout << "NO\n";
        continue;
      } else if (mk == 1 && mk2 == 1) {
        if (min(u, d) == 0 && max(u, d) == 0) {
          cout << "NO\n";
          continue;
        }
      } else if (((ml + mk) > l && mr > r) && (ml > l && (mr + mk) > r)) {
        cout << "NO\n";
        continue;
      }

      // check for max values
      cout << "YES\n";

    } else if (sabseMax == lrmax) {
      int mu = 0, md = 0, mk = 0, mk2 = 0;

      if (l == n && r == n) {
        mu = 2;
        md = 2;
      } else if (lrmax == n) {
        mu = 1;
        md = 1;
        if (min(l, r) > n - 2) mk = 1;
      } else if (lrmax > n - 2) {
        mk = 1;
        if (min(l, r) == lrmax) mk2 = 1;
      }

      // debug(lrmax) debug(uavail);
      // debug(davail);
      // debug(extra);
      // debug(mu);
      // debug(md);
      // debug(mk);
      // debug(mk2);
      // debug(u);
      // debug(d);

      // check of less values
      if (u < mu || d < md) {
        cout << "NO\n";
        continue;
      } else if (mk == 1 && mk2 == 1) {
        if (min(u, d) == 0 && max(u, d) == 0) {
          cout << "NO\n";
          continue;
        }
      } else if (((mu + mk) > u && md > d) && (mu > u && (md + mk) > d)) {
        cout << "NO\n";
        continue;
      }

      cout << "YES\n";
    }
  }
  return 0;
}

///////////////////////////////////////////////////////////////