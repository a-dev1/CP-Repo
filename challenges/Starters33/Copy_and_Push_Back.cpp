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
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string str;
    cin >> str;
    //............
    //[..][..]a
    //..........
    // 0-4 5-9
    // 0-3 4-7 89
    // 9/2 = 4
    //..
    if (str[0] != str[1]) {
      cout << "NO\n";
      continue;
    }

    //..x
    bool ans = true;

    // for (int i = 2; i < n; i++) {
    //   if (i % 2 != 0) {
    //     int half = (i/2) + 1;
    //     int idx = i - 1;
    //     int half2 = (idx/2) + 1;

    //     if((str.substr(0, half) != str.substr(half, half)) && (str.substr(0,
    //     half2) != str.substr(half2, half2))){
    //       cout << i << "\n";
    //       ans = false;
    //       break;
    //     }
    //   }
    // }

    for (int i = 1; i < n;) {
      if (i % 2 != 0) {
        int half = (i / 2) + 1;

        if ((str.substr(0, half) != str.substr(half, half))) {
          cout << i << "\n";
          ans = false;
          break;
        }
        debug(i);
        int temp = i;
        temp += (temp + 1);

        i++;
        i += (i + 1);
        debug(i);
      } else {
        i++;
      }
    }

    bool extra = true;
    int idx = n - 1;
    while (idx > 0) {
      int i = idx;
      int half = (i / 2) + 1;

      if ((str.substr(0, half) != str.substr(half, half))) {
        // cout << i << "\n";
        ans = false;
      }
      idx /= 2;
    }
    
    // debug("here");
    // debug(ans);
    if (n % 2 != 0) {
      int i = n - 2;
      // debug(i);
      // i 3
      int half = (i / 2) + 1;

      if ((str.substr(0, half) != str.substr(half, half))) {
        // cout << i << "\n";
        ans = false;
      }
    }

    if(extra) {
      cout << "YES\n";
      continue;
    }
    if (ans)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}

// aax
// aaxaax
// aaxaaxy or aaxaaxaaxaax
// aaxaaxyaaxaaxy or aaxaaxaaxaaxaaxaaxaaxaax
// aaxaaxyaaxaaxyt or aaxaaxyaaxaaxyaaxaaxyaaxaaxy
///////////////////////////////////////////////////////////////