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
  int n;
  cin >> n;
  vector<int> arr(n + 1);
  vector<int> notFound(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    notFound[arr[i]] = -1;
  }


  set<int> nahi;
  for (int i = 1; i <= n; i++) {
    if (notFound[i] == 0) nahi.insert(i);
  }


  auto j = nahi.begin();

  for (auto it = nahi.begin(); it != nahi.end(); it++) {
    if (arr[*it] == 0) {
      j = nahi.begin();
      if (*j == *it) j++;
      arr[*it] = *j;
      nahi.erase(*j);
    }
  }

  for (int i = 1; i <= n; i++) {
    if (arr[i] != 0) {
      cout << arr[i] << " ";
    } else {
      j = nahi.begin();
      if (*j == i) j++;
      cout << *j << " ";
      nahi.erase(*j);
    }
  }
   return 0;
}

///////////////////////////////////////////////////////////////