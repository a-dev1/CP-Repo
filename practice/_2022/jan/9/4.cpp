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

signed main() {
  ll n;
  cin >> n;
  vector<ll> arr(n);
  for (auto &i : arr) cin >> i;
  vector <pair<ll, pair<ll, ll>>> sum;

  ll l = 0, r = 0;
  while (l < n && r < n) {
    debug(arr[r]) debug(arr[r + 1]);

    while (r < n && l < n && arr[r] < arr[r + 1]) {
      r++;
    }

    // if(arr[r] >= arr[r+1]) {
    if (r >= n) {
      r--;
    }
    ll len = (r - l + 1);
    debug(l) debug(r) 
    sum.push_back({len, {arr[l], arr[r]}});
    // }
    r++;
    l = r;
  }
  debug(sum);
  ll ans = 0;
  for(int i = 0; i < sum.size(); i++) {
    if(i != n-1) {
      if(sum[i].first > 1 && sum[i].first > 1) {
        
      }
    }
  }
  return 0;
}

///////////////////////////////////////////////////////////////