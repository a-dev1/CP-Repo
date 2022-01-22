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
void doStuff(vector<ll> &arr, ll required, ll n) {
  if (required == 0) return;

  debug(required);
  debug(n);
  if (required > n) {
    reverse(arr.begin(), arr.begin() + n);
    required++;
    required -= n;
  } else {
    if (required == 1) required++;

    reverse(arr.begin() + n - required, arr.begin() + n);
    required = 0;
  }
  debug(arr);

  doStuff(arr, required, n - 1);
}

signed main() {
  code_brains;
  int t;
  cin >> t;
  int temp = t;
  while (t--) {
    ll n, sum;
    cin >> n >> sum;

    if (sum > ((n * (n + 1)) / 2) - 1 || sum < n - 1) {
      cout << "Case #" << temp - t << ": "
           << "IMPOSSIBLE\n";
      continue;
    }

    ll start = n - 1;
    vector<ll> arr;
    for (ll i = 1; i <= n; i++) arr.push_back(i);

    debug(arr);
    if (sum - (n - 1) != 0) doStuff(arr, sum - (n - 2), n);
    debug(arr);

    cout << "Case #" << temp - t << ": ";
    for (auto i : arr) cout << i << " ";
    cout << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////