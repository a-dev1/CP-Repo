#include <bits/stdc++.h>

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
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
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
  ll n, s;
  cin >> n >> s;

  vector<ll> arr(n);
  // vector<ll> tem(n);
  // map<ll, ll> m;
  for (auto &i : arr) {
    cin >> i;
  }

  ll sum = accumulate(all(arr), 0LL);
  if (sum < s) {
    cout << -1;
    return 0;
  }

  sort(rall(arr));
  ll required = s, extra = 0LL;
  ll lowest = arr[n - 1];

  ll i = n - 2;
  while (arr[i] == lowest) {
    extra += lowest;
    i--;
  }

  bool isPossible = false;
  for (ll i = 0LL; i < n - 1LL && arr[i] != lowest; i++) {
    if (required <= 0LL) {
      cout << lowest;
      isPossible = true;
      break;
    }
    required -= (arr[i] - lowest);
    // debug(required)
  }

  if (isPossible) return 0;

  if (required <= 0) {
    cout << lowest;
    return 0;
  }

  cout << (lowest - (((required) / n) + (required % n != 0)));

  return 0;
}

///////////////////////////////////////////////////////////////