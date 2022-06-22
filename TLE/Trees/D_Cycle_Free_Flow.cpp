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
vvi ad;
vvi up;
vvi mn;
map<pi, int> weight;
vi depth;

int n, m;

void dfs(int u, int p) {
  for (auto child : ad[u]) {
    if (child == p) continue;

    depth[child] = depth[u] + 1;
    up[child][0] = u;
    mn[child][0] = weight[{child, u}];

    for (int i = 1; i <= log2(n); i++) {
      up[child][i] = up[up[child][i - 1]][i - 1];
      int temp = mn[child][i - 1];
      mn[child][i] = min(temp, mn[up[child][i - 1]][i - 1]);
    }

    dfs(child, u);
  }
}

int findKthParent(int u, int k) {
  for (int i = 0; i <= log2(k); i++) {
    if (k & (1 << i)) u = up[u][i];
  }
  return u;
}

int findKthMin(int u, int k) {
  int ans = INT_MAX;
  for (int i = 0; i <= log2(k); i++) {
    if (k & (1 << i)) {
      ans = min(ans, mn[u][i]);
      u = up[u][i];
    }
    // debug(ans);
  }
  return ans;
}

int lca(int u, int v) {
  if (depth[u] < depth[v]) swap(u, v);
  int diff = depth[u] - depth[v];
  u = findKthParent(u, diff);

  if (u == v) return u;

  for (int i = log2(n); i >= 0; i--) {
    int parent1 = up[u][i];
    int parent2 = up[v][i];
    if (parent1 != parent2) {
      u = parent1;
      v = parent2;
    }
  }

  return up[u][0];
}

signed main() {
  code_brains;
  cin >> n >> m;

  mn = up = vvi(n + 1, vi(log2(n) + 5));
  ad = vvi(n + 1);
  depth = vi(n + 1);

  weight.clear();

  for (int i = 1; i <= m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    ad[u].pb(v);
    ad[v].pb(u);
    weight[make_pair(u, v)] = w;
    weight[make_pair(v, u)] = w;
  }

  dfs(1, -1);

  // debug(mn);

  int q;
  cin >> q;
  while (q--) {
    int u, v;
    cin >> u >> v;

    int anc = lca(u, v);
    int d1 = depth[u] - depth[anc], d2 = depth[v] - depth[anc];
    cout << min(findKthMin(u, d1), findKthMin(v, d2)) << "\n";
  }
  return 0;
}

///////////////////////////////////////////////////////////////