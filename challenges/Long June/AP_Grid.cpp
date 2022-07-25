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
#define pb push_back
#define setBits __builtin_popcount
#define setBitsll __builtin_popcountll
#define vl vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define sz(a) a.size()
#define len(a) a.length()

int M = 1e9 + 7;
int power(int a, int n) {
  int result = 1;
  while (n) {
    if (n & 1) result = (result * (ll)a) % M;
    n >>= 1;
    a = (a * (ll)a) % M;
  }
  return result;
}

int power(int a, int n);
int minv(int a) { return power(a, M - 2); }
int mod(int n) { return (n % M + M) % M; }
int modM(int n, int m) { return ((ll)(n % M) * (m % M)) % M; }
int modA(int n, int m) { return ((ll)(n % M) + (m % M)) % M; }
int modS(int n, int m) { return (((ll)(n % M) - (m % M)) + M) % M; }
int modD(int n, int m) { return ((ll)(n % M) * (minv(m) % M)) % M; }
int lcm(int a, int b) { return ((ll)a * b) / __gcd(a, b); }

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
  ll t;
  cin >> t;
  while (t--) {
    ll r, c;
    cin >> r >> c;
    ll i = 1;

    if (c == 1) {
      for (ll i = 1; i <= r; i++) {
        cout << i << '\n';
      }
      continue;
    }

    ll tr = r, tc = c, start = 1;
    bool first = true;
    ll mx1 = -1;

    while (tr--) {
      if (first) {
        start = 1;
        first = false;
      } else {
        start += 2;
      }
      tc = c;
      ll tempStart = start;
      while (tc--) {
        // cout << tempStart << " ";
        mx1 = max(mx1, tempStart);
        tempStart += i;
      }
      i += 2;
      // cout << '\n';
    }

    ll mx2 = -1;
    tr = r, tc = c, start = 1;
    first = true;
    i = 2;
    while (tr--) {
      if (first) {
        start = 1;
        first = false;
      } else {
        start += 1;
      }
      tc = c;
      ll tempStart = start;
      while (tc--) {
        // cout << tempStart << " ";
        mx2 = max(mx2, tempStart);
        tempStart += i;
      }
      i += 2;
      // cout << '\n';
    }

    // Moment of Truth
    if (mx1 <= mx2) {
      tr = r, tc = c, start = 1;
      bool first = true;
      // mx1 = -1;
      i = 1;

      while (tr--) {
        if (first) {
          start = 1;
          first = false;
        } else {
          start += 2;
        }
        tc = c;
        ll tempStart = start;
        // debug(tempStart);
        //   debug(i);
        while (tc--) {
          cout << tempStart << " ";
          // mx1 = max(mx1, tempStart);
          tempStart += i;
        }
        i += 2;
        cout << '\n';
      }
    } else {
      tr = r, tc = c, start = 1;
      first = true;
      i = 2;
      while (tr--) {
        if (first) {
          start = 1;
          first = false;
        } else {
          start += 1;
        }
        tc = c;
        ll tempStart = start;
        while (tc--) {
          cout << tempStart << " ";
          // mx2 = max(mx2, tempStart);
          tempStart += i;
        }
        i += 2;
        cout << '\n';
      }
    }
  }
  return 0;
}

///////////////////////////////////////////////////////////////