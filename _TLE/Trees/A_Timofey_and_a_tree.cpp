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
bool possible = false;

signed main() {
  code_brains;
  int n;
  cin >> n;

  vvi ad(n + 1);
  for (int i = 1; i <= n - 1; i++) {
    int u, v;
    cin >> u >> v;
    ad[u].pb(v);
    ad[v].pb(u);
  }

  vector<int> color(n + 1);
  for (int i = 1; i <= n; i++) cin >> color[i];

  vector<pi> ans;

  function<void(int root, int parent)> dfs;
  dfs = [&](int root, int parent) {
    for (auto child : ad[root]) {
      if (child != parent) {
        if (color[child] != color[root]) ans.pb(make_pair(root, child));
        dfs(child, root);
      }
    }
  };

  dfs(1, -1);

  // debug(ans);
  if (ans.size() == 0) {
    cout << "YES\n";
    cout << 1 << '\n';
    return 0;
  }

  if (ans.size() == 1) {
    cout << "YES\n";
    cout << ans[0].fi << '\n';
    return 0;
  }

  bool check = true;
  int common = -1;

  map<int, int> mp;
  mp[ans[0].fi]++;
  mp[ans[0].se]++;
  mp[ans[1].fi]++;
  mp[ans[1].se]++;

  if (mp.size() != 4) {
    for (auto i : mp) {
      if (i.se > 1) {
        common = i.fi;
        break;
      }
    }
  }
  // debug(mp);
  // debug(common);

  for (int i = 2; i < ans.size() && common != -1; i++) {
    if (common != ans[i].fi && common != ans[i].se) {
      check = false;
      break;
    }
  }

  if (common == -1 || check == false) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
    cout << common << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////