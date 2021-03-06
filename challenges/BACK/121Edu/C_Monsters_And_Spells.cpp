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
#define be begin()
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

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> k(n);
    vector<ll> h(n);

    for (auto &i : k) cin >> i;

    for (auto &i : h) cin >> i;

    ll ans = 0;
    ll prePower = 0;

    for (int i = 0; i < n; i++) {
      if (i == 0) {
        ans += (h[i] * (h[i] + 1)) / 2LL;
        prePower = h[i];
        continue;
      }

      if (k[i] - k[i - 1LL] == 1 && h[i] > 1) {
        ans += prePower + 1LL;
        prePower = (prePower + 1LL);
        continue;
      } else if (k[i] - k[i - 1] == 1LL && h[i] <= 1LL) {
        ans += 1LL;
        prePower = 1;
        continue;
      }

      ll diff = k[i] - k[i - 1];

      if (h[i] > diff) {
        ans += (((k[i]) * (k[i] + 1)) / 2LL) - ((k[i - 1] * (k[i - 1] + 1LL)) / 2LL);
      } else {
        ans += (h[i] * (h[i] + 1)) / 2LL;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////