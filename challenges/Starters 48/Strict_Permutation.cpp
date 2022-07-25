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
#define sz(a) a.size()
#define len(a) a.length()

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
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> arr(m);
    for (auto &i : arr) cin >> i.se >> i.fi;

    // x = arr.se
    // len = arr.fi

    sort(all(arr));

    reverse(arr.begin(), arr.end());

    // debug(arr);
    vector<int> visited((n + 1), 0);
    visited[0] = 1;

    set<int> idx;
    for (int i = 1; i <= n; i++) {
      idx.insert(i);
    }

    bool possible = true;

    for (auto i : arr) {
      int x = i.se, len = i.fi;

      if (idx.find(len) != idx.end()) {
        visited[len] = x;
        idx.erase(len);
      } else {
        // search

        auto itr = idx.lower_bound(len);
        if (itr != idx.end()) {
          // 2 4 and demand is 1 1
          if (itr == idx.begin() && *itr > len) {
            possible = false;
            break;
          }
          if (*itr == len) {
            visited[*itr] = x;
            idx.erase(itr);
          } else {
            itr--;
            visited[*itr] = x;
            idx.erase(itr);
          }
        } else {
          possible = false;
          break;
        }
        // bool found = false;
        // for (int j = len - 1; j >= 1; j--) {
        //   if (!visited[j]) {
        //     visited[j] = x;
        //     found = true;
        //     break;
        //   }
        // }

        // if (!found) possible = false;
      }
    }

    if (!possible)
      cout << -1 << "\n";
    else {
      set<int> present;
      vi ans;
      for (int i = 1; i <= n; i++) {
        if (visited[i]) {
          
          while()
          present.insert(visited[i]);
        }
      }

      sort(all(ans));
      for (int i = 1; i <= n; i++) {
        if (present.find(i) == present.end()) {
          ans.pb(i);
        }
      }

      int j = 0;
      for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
          cout << ans[j] << " ";
          j++;
        } else {
          cout << visited[i] << " ";
        }
      }
      cout << '\n';
    }
  }
  return 0;
}

///////////////////////////////////////////////////////////////