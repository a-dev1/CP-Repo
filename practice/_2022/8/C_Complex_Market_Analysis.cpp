#include <bits/stdc++.h>

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
bool isPrime(ll n) {
  // Corner case
  if (n <= 1LL) return false;

  // Check from 2 to square root of n
  for (ll i = 2LL; i * i <= n; i++)
    if (n % i == 0LL) return false;

  return true;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    ll n, d;
    cin >> n >> d;
    vector<ll> arr(n);
    for (auto &i : arr) cin >> i;

    ll cnt = 0LL;
    for (ll i = 0LL; i < n - d; i++) {
      if (isPrime(arr[i]) || arr[i] == 1LL) {
        ll temp = i, num = arr[i];
        temp += d;
        debug(arr[i])
        debug(temp)
        debug(cnt)
        while (temp < n) {
          if (isPrime(num * arr[temp])
          ) {
            num = num * arr[temp];
            temp += d;
            cnt++;
          } else
            break;
        }
      }
    }

    cout << cnt << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////