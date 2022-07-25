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
vector<ll> arr;
string str1, str2;
ll ans = 0LL;
bool notOk(ll x) {
  string temp = str1;
  for (ll i = 0LL; i < x; i++) {
    temp[arr[i] - 1LL] = '*';
  }

  string ans = str2;
  ll j = 0LL, k = 0LL;
  while (k < temp.length()) {
    if (temp[k] == ans[j]) {
      if (j < (ll)temp.length()) j++;
    }
    k++;
  }

  // if(j >= ((ll)ans.length() - 1LL)) {
  //   ans = x;
  // }

  return j < ((ll)ans.length() - 1LL);
}

signed main() {
  cin >> str1 >> str2;
  ll len = (ll)str1.length();
  arr.resize(len);

  for (auto &i : arr) cin >> i;
  // debug(arr)

  ll l = 0LL, r = len;

  while (l + 1LL < r) {
    ll m = l + (r - l) / 2LL;
    debug(m)
    debug(l)
    debug(r)
    if (notOk(m))
      r = m;
    else
      l = m;
  }
  debug(l)
  debug(r)
  cout << l;
  // cout << "what happened bro\n";
  return 0;
}

///////////////////////////////////////////////////////////////