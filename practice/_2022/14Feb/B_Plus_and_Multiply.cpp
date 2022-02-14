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
#define set_bits __builtin_popcountint
#define vl vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define pi pair<int, int>
#define pl pair<ll, ll>

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
ll power(ll base, int p) {
  if (p == 0) return 1LL;

  if (p % 2 == 0)
    return power(base, p / 2) * power(base, p / 2);
  else
    return power(base, p / 2) * power(base, p / 2) * base;
}

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    // a^x
    //(b+1)
    //(a^x) * (b+1)
    //(a^x) + (b+1)
    //(a^x) * b
    //(b+1) + (x.b)
    //(a^y) * ((b+1)+x.b)
    // final
    //(a^x) + (z * b) == n
    ll n, a, b;
    cin >> n >> a >> b;

    ll limit = 0, temp = a;

    if (a == 1) {
      if ((n - 1) % b == 0)
        cout << "Yes\n";
      else
        cout << "No\n";
      continue;
    }

    ll cnt = 1;

    bool possible = false;

    while (cnt <= n) {
      if ((n - cnt) % b == 0) {
        possible = true;
      }
      cnt *= a;
      if (possible) break;
    }

    if (possible)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}

///////////////////////////////////////////////////////////////