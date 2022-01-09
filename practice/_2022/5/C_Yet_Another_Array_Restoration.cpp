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

bool isInAP(ll a, ll d, ll x) {
  return ((x - a) % d == 0LL && (x - a) / d >= 0LL);
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, x, y;
    cin >> n >> x >> y;
    if (n == 2LL) {
      cout << x << " " << y << '\n';
      continue;
    }

    ll diff = 2LL;
    bool notFound = true;

    if ((y - x + 1) <= n) {
      if (isInAP(x, 1, y)) {
        diff = 1;
      }
    } else if (abs(y - x) < 2) {
      diff = 1;
    } else {
      while (notFound) {
        ll howMuchTerm = ((y - x) / diff) + 1;
        bool ans = false;
        if (howMuchTerm <= n) {
          ans = true;
        }
        if (isInAP(x, diff, y) && ans) {
          break;
        }
        diff++;
      }
    }

    ll cnt = n;
    for (ll i = x; i <= y && cnt != 0LL; i += diff) {
      cout << i << " ";
      cnt--;
    }
    if (cnt != 0LL) {
      for (ll i = x - diff; i > 0LL && cnt != 0LL; i -= diff) {
        cout << i << " ";
        cnt--;
      }
    }
    if (cnt != 0) {
      for (ll i = y + diff; cnt != 0LL; i += diff) {
        cout << i << " ";
        cnt--;
      }
    }
    cout << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////