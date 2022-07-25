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
vector<ll> arr;
vector<ll> required;
int n;
bool ok(ll x) {
  bool ans = true;
  for (int i = 0; i < n; i++) {
    if (required[i] > x) {
      ans = false;
      break;
    }
  }
  return ans;
}

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    cin >> n;
    arr.resize(n);
    required.resize(n);

    for (auto &i : arr) cin >> i;

    bool isOne = false;
    for (int i = 0; i < n; i++) {
      ll must = 0, temp;

      temp = arr[i];

      if (temp >= 3) {
        must += temp / 3;
        temp = temp % 3;
      }
      if (temp >= 2) {
        must += temp / 2;
        temp = temp % 2;
      } else {
        must += temp / 1;
        isOne = true;
      }

      required[i] = must;
    }
    debug(isOne)
        // debug(required)

        ll l = 0LL,
           h = (ll)1e9;
    while (l + 1 < h) {
      ll m = (l + h) / 2LL;
      if (ok(m))
        h = m;
      else
        l = m;
    }
    cout << h << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////