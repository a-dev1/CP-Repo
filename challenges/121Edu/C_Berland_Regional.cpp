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
#define pb push_back
#define present(c, x) (c.find(x) != c.end())
#define desc greater<int>()
#define fi first
#define se second
#define bg begin()
#define ed end()
#define set_bits __builtin_popcountint

#define sz size()
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;

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

#define forn(i, n) for (int i = 0; i < int(n); i++)

///////////////////////////////////////////////////////////////

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> uni(n);
    vector<ll> str(n);
    map<ll, multiset<ll>> m;

    for (auto &i : uni) cin >> i;

    for (auto &i : str) cin >> i;

    for (ll i = 0; i < n; i++) m[uni[i]].insert(str[i]);

    map<ll, vector<ll>> m2;

    for (auto j : m) {
      ll pre = 0LL;
      for (auto i : j.se) {
        pre += i;
        m2[j.fi].pb(pre);
      }
    }

    vector<ll> ans(n + 1);

    for (auto i : m2) 
      for (ll j = 1; j <= ll(i.se.sz); j++) 
          ans[j] += i.se[i.se.sz - 1] - (i.se.sz % j != 0 ? i.se[(i.se.sz % j) - 1] : 0);        
      
    for (ll i = 1; i <= n; i++) cout << ans[i] << " ";
    cout << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////