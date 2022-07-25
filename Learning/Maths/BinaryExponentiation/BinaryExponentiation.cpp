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
/*  Logic for Iterative approach
 Just find nd the binary equivalent of the power & multiply the places where 1
 till the last bit 3 ^ 25 25 =>   1    1    0   0    1 3^8  3^4  3^2  3^1  3^0
 -> 3 ^ 25
*/

ll BinaryExpo(ll base, ll power) {
  debug(floor(log2(power)));

  ll ans = 1, temp;

  for (ll i = 0; i <= floor(log2(power)); i++) {
    if (i == 0)
      temp = base;
    else
      temp = temp * temp;

    // if nth bit is set to 1 then only multiply in ans
    (((power >> i) & 1) ? ans *= temp : ans = ans);
    debug(ans);
  }

  return ans;
}

// Recursive Way
double findPow(double base, ll power) {
  if (power == 0) return 1;
  // if (power == 1) return base;

  double ans = findPow(base, power / 2);

  // if it's odd than have to multiply it by 1 extra base
  ans = ans * ans * (power % 2 ? base : 1.0);

  return ans;
}

signed main() {
  code_brains;
  ll n = 10, b = 5;
  cout << BinaryExpo(2, 5) << '\n';
  cout << pow(2.5, 1.7) << '\n';
  cout << findPow(2.5, 1.7);
  return 0;
}

//(x,y) => transformation(x+y, 2y+3x) what will be the value after 1000
// transformations
///////////////////////////////////////////////////////////////