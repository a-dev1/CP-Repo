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
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    ll ans = 0;

    ll n = (x1 + y1) - 2, n2 = (x2 + y2) - 2;

    ll vertical = x2 - x1, start = ((n * (n + 1)) / 2) + x1,
       last = ((n2 * (n2 + 1)) / 2) + x2;

    if (start == last) {
      ans += start;
    } else {
      ans += last;
      ans += start;
    }

    // debug(start);
    // debug(last);
    // debug(ans);

    ll x3 = x1, y3 = y1;

    while (vertical > 1) {
      x3++;
      ll n = (x3 + y3) - 2;
      ans += ((n * (n + 1)) / 2) + x3;
      vertical--;
    }

    ll horizontal = y2 - y1;
    if (horizontal > 0 && x2 - x1 >= 1) {
      x3++;
      ll n = (x3 + y3) - 2;
      ans += ((n * (n + 1)) / 2) + x3;
    }  
     

    while (horizontal > 1) {
      y3++;
      ll n = (x3 + y3) - 2;
      ans += ((n * (n + 1)) / 2) + x3;
      horizontal--;
    }

    cout << ans << "\n";
  }
  return 0;
}

///////////////////////////////////////////////////////////////