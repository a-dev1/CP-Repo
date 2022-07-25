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

bool prime(int n) {
  if (n == 1) return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

pi minDivisor(int n) {
  if (prime(n)) {
    // cout << 1 << " " << n - 1;
    return make_pair(1, n - 1);
  }

  else {
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        // cout << n / i << " " << n / i * (i - 1) << '\n';
        return make_pair(n / i, (n / i * (i - 1)));
        break;
      }
    }
  }
  return {1, 2};
}

// int countPairs(int G, int L) {
//   // To store count
//   int count = 0;

//   // To store product a*b = G*L
//   int p = G * L;

//   // p/a will be b if a divides p
//   for (int a = 1; a <= L; a++)
//     if (!(p % a) && __gcd(a, p / a) == G) {
//       count++;
//       cout <<
//     }

//   return count;
// }
int primeFactorCount(int);
int countPairs(int gcd, int lcm) {
  if (lcm % gcd != 0) return 0;
  int temp = lcm / gcd;
  return (1 << primeFactorCount(temp));
}
int primeFactorCount(int n) {
  int count = 0;
  if (n % 2 == 0) {  // if n is divisible by 0, enter into the next part
    count++;
    while (n % 2 == 0) n = n / 2;
  }
  // now n is odd, so if we increase n by 2, all numbers will be odd
  for (int i = 3; i * i <= n; i = i + 2) {
    if (n % i == 0) {  // if n is divisible by 0, enter into the next part
      count++;
      while (n % i == 0) n = n / i;
    }
  }
  if (n > 2) count++;
  return count;
}

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    pi ans = minDivisor(n);
    // debug(ans);
    int G = __gcd(ans.fi, ans.se);
    int L = (ans.fi * ans.se) / G;
    // debug(G);
    // debug(L);
    cout << countPairs(G, L) << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////