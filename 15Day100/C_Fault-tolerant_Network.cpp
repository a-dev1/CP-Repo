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

ll findMin(vl arr, ll ele) {
  ll ans = 1e18;
  for (int i = 0; i < (ll)arr.size(); i++) {
    if (abs(arr[i] - ele) <= ans) {
      ans = abs(arr[i] - ele);
    }
  }
  return ans;
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

    // 2 way connection possible
    ll poss1 = abs(ul - dl) + abs(ur - dr), poss2 = abs(ul - dr) + abs(ur - dl);

    // 4 way connection
    ll poss3 = findMin(arr2, ul) + findMin(arr2, ur) + findMin(arr1, dl) +
               findMin(arr1, dr);

    // 3 way connection
    ll d1 = abs(ul - dl) + findMin(arr2, ur) + findMin(arr1, dr);
    ll d2 = abs(ur - dr) + findMin(arr2, ul) + findMin(arr1, dl);
    ll d3 = abs(ul - dr) + findMin(arr2, ur) + findMin(arr1, dl);
    ll d4 = abs(ur - dl) + findMin(arr2, ul) + findMin(arr1, dr);

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    pq.push(d1);
    pq.push(d2);
    pq.push(d3);
    pq.push(d4);
    ll s = pq.top();

    cout << min(s, min(poss3, min(poss1, poss2))) << '\n';
    // cout << diff1 + diff2 + diff3 + diff4 << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////