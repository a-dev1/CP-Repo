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
#define pb push_back
#define setBits __builtin_popcount
#define setBitsll __builtin_popcountll
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

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    vvi ad(n + 1, vi());
    set<int> s;
    vi childCount(n + 1, 0);
    for (int i = 1; i <= n - 1; i++) {
      int u, v;
      cin >> u >> v;
      ad[u].pb(v);
      ad[v].pb(u);
    }

    if (n == 1) {
      cout << 0 << '\n';
      continue;
    }

    int roo = -1, ss = 0;
    for (int i = 1; i <= n; i++) {
      childCount[i] = ad[i].size();

      if (ad[i].size() == 1) {
        s.insert(i);
      }
      if (ad[i].size() >= ss) {
        ss = ad[i].size();
        roo = i;
      }
    }

    vi parentOf(n + 1, -1);

    function<void(int root, int parent)> dfs;
    dfs = [&](int root, int parent) {
      parentOf[root] = parent;
      for (auto child : ad[root]) {
        if (child != parent) dfs(child, root);
      }
    };

    // debug(roo);
    dfs(roo, -1);
    // debug(parentOf);
    // debug(s);
    vector<bool> visited(n + 1, false);

    int lost = 0;
    if (k > n) {
      cout << 0 << "\n";
      continue;
    } else {
      while (s.size() > 1 && k > 0) {
        k--;
        set<int> temp;
        lost += s.size();
        // debug(s);
        while (s.size() > 0) {
          int i = *s.begin();
          visited[i] = true;
          childCount[parentOf[i]]--;
          if (parentOf[i] != -1) {
            if (childCount[parentOf[i]] <= 1 && !visited[parentOf[i]])
              temp.insert(parentOf[i]);
          }
          s.erase(i);
        }
        // debug(s);
        s = temp;
      }
      // debug(s.size());

      if (k > 0 && s.size() > 0) {
        lost++;
        s.clear();
      }
    }
    cout << n - lost << '\n';
  }
  return 0;
}