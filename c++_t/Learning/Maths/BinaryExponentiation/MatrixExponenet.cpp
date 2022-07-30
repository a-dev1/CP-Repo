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

///////////////////////////////////////////////////////////////

int r1 = 2, c1 = 2, r2 = 2, c2 = 2;
vvl mul(vvl &arr1, vvl &arr2) {
  vvl arr;

  for (auto i : arr1) {
    vector<ll> row;

    for (int k = 0; k < r1; k++) {
      ll sum = 0;
      for (int j = 0; j < c1; j++) {
        sum += i[j] * arr2[j][k];
      }
      row.push_back(sum);
    }

    arr.push_back(row);
  }
  return arr;
}

vvl identityMatrix = {{1, 0}, {0, 1}};

vvl matrixPower(vvl &arr1, ll power) {
  if (power == 0) return identityMatrix;

  vvl ans = matrixPower(arr1, power / 2);

  ans = mul(ans, ans);
  ans = mul(ans, (power % 2 ? arr1 : identityMatrix));

  return ans;
}

signed main() {
  code_brains;
  vvl arr1 = {{1, 2}, {1, 0}};
  vvl identityMatrix = {{1, 0}, {0, 1}};

  debug(mul(arr1, identityMatrix));

  debug(matrixPower(arr1, 15));

  // find arr1 Rase to the power 100
  return 0;
}

///////////////////////////////////////////////////////////////