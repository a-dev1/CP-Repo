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

int M = 1e9 + 7;

///////////////////////////////////////////////////////////////
pair<bool, pair<int, int>> canMake(ll n, ll pos, ll k) {
  bool isFound = false;
  ll ans, left;
  for (int i = pos + 1; (ll)pow(k, i) <= (ll)10000000000000000; i++) {
    ll p = (ll)pow(k, i);
    if (n % p == 0) {
      isFound = true;
      left = n / p;
      ans = i;
      break;
    }
  }
  if (isFound)
    return {true, {left, ans}};
  else
    return {false, {0, 0}};
}

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (auto &i : arr) {
      cin >> i;
    }

    sort(all(arr));

    bool isFound = true;

    int dj = 0;

    ll p = (ll)pow(k, dj);

    for (int i = 0; i < n; i++) {
      // if (dj > 17) {
      //   isFound = false;
      //   break;
      // }
      if (!arr[i]) {
        continue;
      }

      if (arr[i] % p != 0) {
        int temp = dj;
        int remain;
        bool innerFound = false;
        for (int temp = dj + 1; (ll)pow(k, temp) < (ll)10000000000000000; temp++) {
          if (arr[i] % (ll)pow(k, temp) == 0) {
            innerFound = true;
            dj = temp;
            remain = arr[i] / (ll)pow(k, temp);
            break;
          }
        }
        if (!innerFound) {
          isFound = false;
          break;
        }
        // run same code
        if (remain == 0) {
          dj++;
          continue;
        } else {
          pair<bool, pair<ll, ll>> kt = canMake(remain, dj, k);
          while (kt.first && kt.second.first >= 0) {
            kt = canMake(kt.second.first, kt.second.second, k);
          }
          if (!kt.first || !kt.second.second) {
            isFound = false;
            break;
          }
          dj++;
        }
      } else {
        ll remain = arr[i] / p;
        if (remain == 0) {
          continue;
        } else {
          pair<bool, pair<ll, ll>> kt = canMake(remain, dj, k);
          while (kt.first && kt.second.first >= 0) {
            kt = canMake(kt.second.first, kt.second.second, k);
          }
          if (!kt.first || !kt.second.second) {
            isFound = false;
            break;
          }
          dj++;
        }
      }
      debug(dj);
    }

    if (isFound)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}

ll power(ll a, ll n) {
  ll result = 1;
  while (n) {
    if (n & 1) result = (result * (ll)a) % M;
    n >>= 1;
    a = (a * (ll)a) % M;
  }
  return result;
}
///////////////////////////////////////////////////////////////