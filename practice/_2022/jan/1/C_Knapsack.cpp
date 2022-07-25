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
  int tc;
  cin >> tc;
  while (tc--) {
    ll n, w;
    cin >> n >> w;
    vector<pair<ll, ll>> arr(n);
    ll cnt = 1;
    for (auto &i : arr) {
      ll temp;
      cin >> temp;
      i = {temp, cnt};
      cnt++;
    }
    sort(all(arr));

    ll l = 0LL, r = 1LL, sum = arr[0].first,
       required = (w / 2LL) + (w % 2LL != 0LL);

    while (sum < required && r < n) {
      sum += arr[r].first;
      r++;
    }

    if (r >= n - 1 && required > sum) {
      cout << -1 << '\n';
      continue;
    }

    if (sum <= w) {
      if (n == 1) {
        cout << 1 << '\n';
        cout << arr[0].second << '\n';
        continue;
      } else
        cout << (r - l) << '\n';
      for (int i = l; i < r; i++) {
        cout << arr[i].second << " \n"[i == r - 1];
      }
      continue;
    }

    while (sum > w && l < n) {
      sum -= arr[l].first;
      l++;
    }

    if (sum > w || sum < required) {
      cout << -1 << '\n';
    } else {
      cout << (r - l) << '\n';
      for (int i = l; i < r; i++) {
        cout << arr[i].second << " \n"[i == r - 1];
      }
    }
  }
  return 0;
}

///////////////////////////////////////////////////////////////