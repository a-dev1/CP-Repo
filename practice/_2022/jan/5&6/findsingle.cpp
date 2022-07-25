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
  vector<int> arr = {9, 9, 33, 33, 99, 10, 10, 11, 11, 3, 3, 1, 1};
  // vector<int> arr = {9, 9, 10, 10, 11, 0, 11, 3, 3, 1, 1};
  int len = arr.size();

  int l = 1, h = len, m;

  for (int i = 1; i < 4; i += 2) {
    if (arr[i] != arr[i - 1]) {
      cout << arr[i - 1] << '\n';
      return 0;
    }
  }

  while (l + 1 < h) {
    m = (l + h) / 2;
    if (m % 2 != 0) {
      if (arr[m] != arr[m - 1])
        h = m;
      else
        l = m + 1;
    } else {
      if (arr[m] != arr[m + 1])
        h = m;
      else
        l = m + 2;
    }
    // debug(l) debug(h)
  }
  cout << arr[l];
  return 0;
}

///////////////////////////////////////////////////////////////