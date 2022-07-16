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
#define mp make_pair

bool inRange(ll x, ll n) { return (x <= n); }

ll search(ll x, vvl &arr) {
  int i = 0;
  bool found = false;
  for (; i < arr.size(); i++) {
    if (arr[i][1] <= x && x <= arr[i][3]) {
      found = true;
      break;
    }
  }
  if(found) {
    ll diff = x - arr[i][1];
    return arr[i][2] + diff;
  }
  return 0;
}

signed main() {
  code_brains;
  int t;
  cin >> t;
  // 1000 * (1e4 * 1e5)
  while (t--) {
    ll n, c, q;
    cin >> n >> c >> q;
    string str;
    cin >> str;

    vvl arr(c + 1, vl(5, 0));

    arr[0][1] = 1;
    arr[0][2] = 1;
    arr[0][3] = n;
    arr[0][4] = n;

    int i = 0;
    while (c--) {
      ll l, r;
      cin >> l >> r;

      ll len = r - l + 1;

      ll tl = arr[i][3] + 1;
      ll tr = arr[i][3] + len;

      i++;
      arr[i][1] = tl;
      arr[i][2] = l;
      arr[i][3] = tr;
      arr[i][4] = r;
    }

    // 1 -> left
    // 3 -> right
    // debug(arr);

    while (q--) {
      int idx;
      cin >> idx;

      while (true) {
        if (inRange(idx, n))
          break;
        else {
          idx = search(idx, arr);
        }
      }

      cout << str[idx - 1] << '\n';
    }
  }
  return 0;
}

///////////////////////////////////////////////////////////////