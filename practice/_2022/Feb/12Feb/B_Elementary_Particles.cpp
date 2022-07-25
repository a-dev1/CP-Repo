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
    ll n;
    cin >> n;

    vector<ll> arr(n);
    map<ll, vector<ll>> m;

    for (ll i = 0LL; i < n; i++) {
      cin >> arr[i];
      m[arr[i]].push_back(i);
    }

    ll ans = 0LL;

    // debug(m);

    for (auto el : m) {
      if (el.second.size() > 1LL) {
        vector<ll> arr = el.second;
        ll len = arr.size();

        for (int i = 0; i < 1; i++) {
          ll left = arr[i];
          ll right = abs((n - 1) - arr[i]);

          for (int j = i + 1; j < len; j++) {
            ll nl, nr;
            nl = arr[j];
            nr = abs((n - 1LL) - arr[j]);
            // debug(nl) debug(nr)
            // debug(left) debug(right)
            ll temp = min(left, nl) + min(right, nr) + 1LL;

            if (ans < temp) ans = temp;
          }
        }
      }
    }

    if (ans < 1LL)
      cout << -1 << '\n';
    else
      cout << ans << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////