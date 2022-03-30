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
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vl arr1(n), arr2(n);
    for (auto &i : arr1) cin >> i;
    for (auto &i : arr2) cin >> i;

    ll ul = arr1[0], ur = arr1[n - 1], dl = arr2[0], dr = arr2[n - 1];

    ll diff1 = 1e12, diff2 = 1e12, diff3 = 1e12, diff4 = 1e12, ans1 = 0,
       ans2 = 0, ans3 = 0, ans4 = 0;

    for (int i = 0; i < n; i++) {
      if (abs(arr2[i] - ul) < diff1) {
        diff1 = abs(arr2[i] - ul);
        ans1 = arr2[i];
      }
    }

    for (int i = 0; i < n; i++) {
      if (abs(arr2[i] - ur) < diff2) {
        diff2 = abs(arr2[i] - ur);
        ans2 = arr2[i];
      }
    }

    for (int i = 0; i < n; i++) {
      if (abs(arr1[i] - dl) < diff3) {
        diff3 = abs(arr1[i] - dl);
        ans3 = arr1[i];
      }
    }

    for (int i = 0; i < n; i++) {
      if (abs(arr1[i] - dr) < diff4) {
        diff4 = abs(arr1[i] - dr);
        ans4 = arr1[i];
      }
    }

    if (ans1 == dl) diff3 = 0;
    if (ans1 == dr) diff4 = 0;

    if (ans2 == dl) diff3 = 0;
    if (ans2 == dr) diff4 = 0;

    if (diff3 && diff4) {
      if (ans3 == ul) diff1 = 0;
      if (ans3 == ur) diff2 = 0;

      if (ans4 == ul) diff1 = 0;
      if (ans4 == ur) diff2 = 0;
    }

    ll poss1 = abs(ul - dl) + abs(ur - dr), poss2 = abs(ul - dr) + abs(ur - dl);
    ll sum = diff1 + diff2 + diff3 + diff4;

    cout << min(sum, min(poss1, poss2)) << '\n';
    // cout << diff1 + diff2 + diff3 + diff4 << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////