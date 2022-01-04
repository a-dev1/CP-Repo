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
ll k, x, ans = 0;
bool ok(ll y) {
  ll sum = 0;
  if (y <= k) {
    sum += ((y * (y + 1LL)) / 2LL);
  } else {
    sum += ((k * (k + 1LL)) / 2LL);
    ll temp = ((2 * k) - 1) - y;
    ll tp = (((k - 1) * (k)) / 2LL) - (((temp) * (temp + 1)) / 2);
    sum += tp;
  }
  debug(sum) debug(k) if (sum <= x) ans = y;
  return sum > x;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    cin >> k >> x;
    ll l = 0, r = x;
    for (int i = 0; i <= 10; i++) {
      ll m = l + (r - l) / 2LL;

      debug(m) debug(l) debug(r) if (ok(m)) r = m;
      else l = m;
    }
    debug(l) debug(r) debug("exit")
        // cout << ans << '\n';
        // cout
        // << r << '\n';
        cout
        << l << "\n";
    debug(l) debug(r) debug(ans)
  }
  return 0;
}

///////////////////////////////////////////////////////////////