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
  ll n, m, q;
  cin >> n >> m >> q;

  vl adj(n + 1, 0);
  map<ll, vl> arr;

  for (ll i = 0; i < m; i++) {
    ll u, v;
    cin >> u >> v;

    arr[u].push_back(v);
    arr[v].push_back(u);
  }

  // debug(arr);

  queue<ll> qu;

  for (ll i = 0; i < q; i++) {
    ll type, value;
    cin >> type >> value;

    if (type == 1) {
      if (!adj[value]) {
        qu.push(value);
        adj[value] = 1;
      }
    } else if (type == 2) {
      // debug(qu.size());
      for (ll t = 0; t < value && !qu.empty(); t++) {
        vl temp;
        while (!qu.empty()) {
          ll val = qu.front();
          // debug(val);
          qu.pop();

          for (auto k : arr[val]) {
            if (!adj[k]) {
              adj[k] = 1;
              temp.push_back(k);
            }
          }
        }
        for (auto l : temp) qu.push(l);
      }
    } else {
      if (adj[value])
        cout << "YES\n";
      else
        cout << "NO\n";
    }
    // debug(adj);
  }
  return 0;
}

///////////////////////////////////////////////////////////////