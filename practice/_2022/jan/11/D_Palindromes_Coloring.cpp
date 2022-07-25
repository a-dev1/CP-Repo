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
    ll n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    map<char, ll> m;
    for (auto i : str) {
      m[i]++;
    }
    vector<pair<ll, char>> arr;

    for (auto i : m) {
      arr.push_back({i.second, i.first});
    }

    sort(all(arr));

    ll ans = 0LL;
    ll oneQ = 0LL;
    ll check = 0LL;
    ll extra = 0LL;

    for (ll i = 0LL; i < arr.size(); i++) {
      if (arr[i].first < 2LL * k || arr[i].first <= 2LL) {
        if (arr[i].first < 2LL) {
          oneQ += arr[i].first;
        } else {
          if (arr[i].first % 2LL != 0LL) extra++;
          check += arr[i].first / 2LL;
        }
      } else {
        if (arr[i].first % 2LL != 0LL) extra++;
        if ((arr[i].first / 2LL) % k != 0LL)
          check += ((arr[i].first / 2LL) % k);
        ans += (2LL) * ((arr[i].first / 2LL) / k);
      }
    }

    if (check / k < 1LL) {
      oneQ += 2LL * check;
    } else if (check % k != 0LL) {
      oneQ += 2LL * (check % k);
    }

    oneQ += extra;
    if (oneQ >= k) {
      ans += 1LL;
    }

    ans += 2LL * (check / k);
    cout << ans << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////