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
  ll n, sum = 0LL;
  cin >> n;
  vector<pair<ll, ll>> arr(n);
  vector<ll> ans;

  for (ll i = 0LL; i < n; i++) {
    cin >> arr[i].first;
    arr[i].second = i + 1LL;
    sum += arr[i].first;
  }

  sort(all(arr));
  ll last = arr[n - 1LL].first;
  sum = sum - last;

  // debug(sum)

  for (ll i = 0LL; i < n - 1LL; i++) {
    if (sum - arr[i].first == last) {
      ans.push_back(arr[i].second);
    }
  }

  ll secondLast = arr[n-2LL].first;
  sum -= secondLast;
  // debug(sum)
  // debug(secondLast)
  
  if(sum == secondLast) {
    ans.push_back(arr[n-1LL].second);
  }

  cout << ans.size() << '\n';
  for (ll i = 0LL; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
  return 0;
}

///////////////////////////////////////////////////////////////