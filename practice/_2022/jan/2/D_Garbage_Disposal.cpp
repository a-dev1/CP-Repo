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
  ll n, k;

  cin >> n >> k;
  vector<ll> arr(n);
  for (auto &i : arr) cin >> i;

  ll prev = 0LL, ans = 0LL;

  if (arr[0] == 0) {
    ans += 0;
  } else if (arr[0] < k) {
    prev = arr[0];
  } else {
    if (arr[0] % k == 0LL)
      ans += arr[0] / k;
    else {
      ans += arr[0] / k;
      prev = arr[0] % k;
    }
  }

  for (ll i = 1LL; i < n; i++) {
    if ((prev + arr[i]) % k == 0LL) {
      ans += (prev + arr[i]) / k;
      prev = 0LL;
    } else {
      if (prev + arr[i] == 0LL) {
        continue;
      } else if ((prev + arr[i]) < k && prev == 0) {
        prev = arr[i];
        continue;
      } else if ((prev + arr[i]) < k && prev != 0) {
        if (prev < k) {
          ans += 1LL;
        } else if (prev % k == 0LL)
          ans += prev / k;
        else
          ans += (prev / k) + 1LL;

        prev = 0LL;
        continue;
      }

      ans += (prev + arr[i]) / k;
      ll left = (prev + arr[i]) % k;

      if (left > arr[i]) {
        if (left < k) {
          ans += 1LL;
          prev = 0LL;
        } else if (left % k == 0LL) {
          ans += left / k;
          prev = 0LL;
        } else {
          ans += left / k;
          prev = left % k;
        }
      } else
        prev = left;
    }
  }

  if (prev != 0LL)
    if (prev < k)
      ans += 1LL;
    else if (prev % k == 0LL)
      ans += prev / k;
    else
      ans += (prev / k) + 1LL;

  cout << ans;

  return 0;
}

///////////////////////////////////////////////////////////////