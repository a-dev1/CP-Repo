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
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>

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

//////////////////////////////////////////////////////////////
// int r1 = 2, c1 = 2, r2 = 2, c2 = 1;
vvl matrix = {{1, 1}, {1, 0}};
vvl idM = {{1, 0}, {0, 1}};

vvl mul(vvl &arr1, vvl &arr2) {
  vvl arr;

  for (auto i : arr1) {
    vector<ll> row;

    for (int k = 0; k < arr2[0].size(); k++) {
      ll sum = 0;
      for (int j = 0; j < arr2.size(); j++) {
        sum += i[j] * arr2[j][k];
      }
      row.push_back(sum);
    }

    arr.push_back(row);
  }

  return arr;
}

vvl mPow(vvl matrix, ll power) {
  if (power == 0) return idM;

  // debug(power);

  vvl ans = mPow(matrix, power / 2);

  ans = mul(ans, ans);

  return (mul(ans, ((power % 2) ? matrix : idM)));
}

// mPow(5);
/*
mPow(5)->         mPow(2) ->         mPow(1) ->      mPow(0) -
(idM * matrix)^4 (idM * matrix)^2  (idM * matrix)   idM

*/

ll nthFibo(ll n) {
  if (n == 1 || n == 2) return 1;

  vvl m2 = {{1}, {1}};
  vvl m3 = mPow(matrix, n - 2);
  vvl ans = mul(m3, m2);

  return ans[0][0];
}

signed main() {
  code_brains;
  ll n;
  cin >> n;

  cout << nthFibo(n);
  return 0;
}

///////////////////////////////////////////////////////////////