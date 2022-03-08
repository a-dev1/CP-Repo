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
bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
  return a.se.fi < b.se.fi;
}

bool cmp2(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
  return a.se.se < b.se.se;
}

signed main() {
  code_brains;
  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<pair<int, pair<int, int>>> arr(m);
    for (int i = 0; i < m; i++) {
      arr[i].fi = i + 1;
      cin >> arr[i].se.fi >> arr[i].se.se;
    }

    vector<pair<int, pair<int, int>>> temp;
    temp = arr;
    // debug(temp);
    sort(all(arr), cmp);
    sort(all(temp), cmp2);

    // debug(arr);
    // debug(temp);

    vector<int> visited(m + 1, 0);
    // debug(visited.size());

    int extra = m - (2 * n), cnt = 0;

    for (int i = m; cnt != extra; i--) {
      cnt++;
      visited[temp[i - 1].fi] = 1;
    }

    // debug(visited.size());
    // debug(visited);

    int l = 0, r = m;

    vector<pair<int, int>> ans(n);

    int sum = 0;
    cnt = 0;
    for (int i = 0; i < m && cnt != n; i++) {
      if (!visited[arr[i].fi]) {
        sum += arr[i].se.se;
        ans[cnt].first = arr[i].fi;
        cnt++;
      }
    }

    // debug(ans.size());
    // debug(ans);

    cnt = 0;
    for (int i = m - 1; i >= 0 && cnt != n; i--) {
      if (!visited[arr[i].fi]) {
        sum += arr[i].se.se;
        ans[cnt].second = arr[i].fi;
        cnt++;
      }
    }

    // debug(ans);
    cout << sum << '\n';
    for (auto i : ans) cout << i.fi << " " << i.se << '\n';

    cout << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////