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
  ll n;
  cin >> n;
  vector<ll> arr(n / 2LL);
  vector<ll> ans(n);

  for (auto &i : arr) cin >> i;
  // debug(arr)
  // ll lastMin = 1e18+1;
  // debug(lastMin)

  ans[0] = 0LL;
  ans[n - 1LL] = arr[0];

  for (ll i = 1LL; i < (n / 2LL); i++) {
    if (arr[i] <= arr[i - 1LL]) {
      ans[i] = 0LL;
      ans[n - (i + 1LL)] = arr[i];
    } else {
      // debug(ans[i])
      // debug(arr[i] - arr[i - 1])
      // debug(arr[i-1])
      // debug(i)

      // debug(n-i+1)
      ans[i] = arr[i] - arr[i - 1LL];

      ans[n - (i + 1LL)] = arr[i - 1LL];
    }
    // debug(ans)
  }

  for (auto i : ans) cout << i << " ";
  return 0;
}

///////////////////////////////////////////////////////////////