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
#define pb push_back
#define bg begin()
#define ed end()
#define set_bits __builtin_popcountint
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
vi parent;
vi depth;
vvi up;
vvi ad;

int n;

void dfs(int u, int p) {
  for (auto child : ad[u]) {
    if (child != p) {
      depth[child] = depth[u] + 1;
      dfs(child, u);
    }
  }
}

// Brute Force Way O(u) in each case
int findLca(int u, int v) {
  if (depth[u] < depth[v]) swap(u, v);

  while (depth[u] > depth[v]) {
    u = parent[u];
  }

  while (u != v) {
    u = parent[u];
    v = parent[v];
  }

  return u;
}

int findKthParent(int u, int k) {
  for (int i = 0; i <= log2(u); i++) {
    if (k & (1 << i)) u = up[u][i];
  }
  return u;
}

// Using Binary UpLifting
//logN*logN approach to find LCA
int fLca(int u, int v) {
  if (depth[u] < depth[v]) swap(u, v);
  int diff = depth[u] - depth[v];

  u = findKthParent(u, diff);

  auto ok = [&](int x) {
    int tu = u, tv = v;
    tu = findKthParent(tu, x);
    tv = findKthParent(tv, x);
    return (tu == tv);
  };

  int l = 0, r = depth[u], ans = -1;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (ok(mid)) {   
      r = mid - 1;
      ans = mid;
    } else
      l = mid + 1;
  }

  return findKthParent(u, ans);
}

signed main() {
  code_brains;
  cin >> n;
  up = vvi(n, vi(log2(n) + 5));
  ad = vvi(n);
  parent = depth = vi(n, 0);
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    while (t--) {
      int tt;
      cin >> tt;
      parent[tt] = i;
      ad[i].pb(tt);
    }
  }

  dfs(0, -1);

  // debug(depth);

  // preComputation Steps
  for (int i = 0; i < n; i++) up[i][0] = parent[i];

  for (int j = 1; j <= log2(n); j++) {
    for (int i = 0; i < n; i++) {
      up[i][j] = up[up[i][j - 1]][j - 1];
    }
  }

  // debug(up);

  int q;
  cin >> q;
  while (q--) {
    int u, v;
    cin >> u >> v;
    // cout << findLca(u, v) << '\n';
    cout << fLca(u, v) << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////