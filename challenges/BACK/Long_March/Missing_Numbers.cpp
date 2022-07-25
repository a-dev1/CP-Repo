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
    // ll a, b, c, d;
    // cin >> a >> b >> c >> d;

    vector<ll> arr(4);
    for (auto &i : arr) cin >> i;

    sort(all(arr));

    ll product = arr[3];
    ll sum = arr[2];
    ll b = -sum, a = 1, c = product;

    ll r1 = (-(b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
    ll r2 = (-(b)-sqrt((b * b) - (4 * a * c))) / (2 * a);

    if (r1 < 0 || r1 > 1e4 || r2 < 0 || r2 > 1e4) {
      cout << -1 << " " << -1 << '\n';
      continue;
    } else {
      if (r1 / r2 == arr[0] || r1 / r2 == arr[1]) {
        if (r1 / r2 == arr[0] && r1 - r2 == arr[1]) {
          cout << r1 << " " << r2 << '\n';
          continue;
        }
        if (r1 / r2 == arr[1] && r1 - r1 == arr[0]) {
          cout << r1 << " " << r2 << '\n';
          continue;
        }
      } else if (r2 / r1 == arr[0] || r2 / r1 == arr[1]) {
        if (r2 / r1 == arr[0] && r2 - r1 == arr[1]) {
          cout << r2 << " " << r1 << '\n';
          continue;
        }
        if (r2 / r1 == arr[1] && r2 - r1 == arr[0]) {
          cout << r2 << " " << r1 << '\n';
          continue;
        }
      }
    }

    cout << -1 << " " << -1 << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////