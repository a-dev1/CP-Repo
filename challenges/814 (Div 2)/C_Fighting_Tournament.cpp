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
map<ll, ll> nextBig;
void printNGE(vl arr) {
  int n = sz(arr);
  stack<ll> s;
  ll res[n];
  for (ll i = n - 1; i >= 0; i--) {
    if (!s.empty()) {
      while (!s.empty() && s.top() <= arr[i]) {
        s.pop();
      }
    }
    res[i] = s.empty() ? -1 : s.top();
    s.push(arr[i]);
  }
  for (ll i = 0; i < n; i++) {
    // cout << arr[i] << " --> " << res[i] << endl;
    nextBig[arr[i]] = res[i];
  }
}

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    nextBig.clear();
    ll n, q;
    cin >> n >> q;
    // vector<pl> arr;
    vector<ll> arr;

    map<int, int> mp;
    map<int, int> idx;
    for (int i = 1; i <= n; i++) {
      int temp;
      cin >> temp;
      arr.pb(temp);

      mp[i] = temp;   // ith position pe kya h
      idx[temp] = i;  // x ka index kya h
    }

    printNGE(arr);

    vl mx(sz(arr));
    mx[0] = arr[0];
    for (int i = 1; i < sz(arr); i++) {
      mx[i] = max(mx[i - 1], arr[i]);
    }

    // debug(mx);

    while (q--) {
      ll ele, k;
      cin >> ele >> k;

      ll val = mp[ele];
      ll ans = 0;
      if (ele != 1) {
        if (mx[ele - 2] > val) {
          cout << 0 << "\n";
          continue;
        } else {
          k -= (ele - 1);
          if (k >= 0) ans++;
        }
      }
      // check for bigger value in right
      if (k > 0) {
        if (val == n) {
          ans += k;
        } else {
          ll nextBiggerElement = nextBig[val];
          if (nextBiggerElement == -1) {
            ans += k;
          } else {
            ll idxNextBig = idx[nextBiggerElement];

            ans += min(k, idxNextBig - ele - 1);
          }
        }
      }

      cout << ans << '\n';
    }
  }
  return 0;
}

///////////////////////////////////////////////////////////////