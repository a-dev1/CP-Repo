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
  int n, m, q;
  cin >> n >> m >> q;

  vector<vi> arr(n + 1);
  vi adj(n + 1, 0);
  vi isFrozen(n + 1, 0);

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;

    arr[u].push_back(v);
    arr[v].push_back(u);
  }

  // debug(arr);
  bool full = false;

  for (int i = 0; i < q; i++) {
    int type, value;
    cin >> type >> value;

    if (type == 1) {
      adj[value] = 1;
    } else if (type == 2) {
      vi tt(n + 1, 0);
      int cnt = 0;

      int happens = 10;
      while (value-- && !full) {
        if (happens)
          happens = 0;
        else
          break;

        bool shouldCopy = false;

        for (int i = 1; i <= n && !full; i++) {
          if (adj[i]) {
            cnt++;
            if (!isFrozen[i]) {
              isFrozen[i] = 1;
              for (auto t : arr[i]) {
                shouldCopy = true;
                happens++;
                tt[t] = 1;
              }
            }
          }
        }

        if (cnt == n) full = true;

        if (shouldCopy) {
          for (int i = 1; i <= n; i++) {
            if (tt[i]) adj[i] = 1;
          }
        }
      }
    } else {
      if (adj[value])
        cout << "YES\n";
      else
        cout << "NO\n";
    }
    // debug(isFrozen);
    // debug(adj);
  }
  return 0;
}

///////////////////////////////////////////////////////////////