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
  int t;
  cin >> t;
  while (t--) {
    string str;
    cin >> str;
    int l = 0, r = 0, u = 0, d = 0;
    for (char i : str) {
      if (i == 'L')
        l++;
      else if (i == 'R')
        r++;
      else if (i == 'U')
        u++;
      else if (i == 'D')
        d++;
    }
    int ans = (2 * min(l, r)) + (2 * min(u, d));
    if (min(u, d) == 0) {
      if (min(l, r) > 0) {
        cout << 2 << '\n';
        cout << "LR" << '\n';
      } else {
        cout << 0 << '\n';
      }
      continue;
    }

    if (min(l, r) <= 0) {
      if (min(u, d) > 0) {
        cout << 2 << '\n';
        cout << "UD" << '\n';
      } else {
        cout << 0 << '\n';
      }
      continue;
    }
    cout << ans << '\n';
    for (int i = 0; i < min(l, r); i++) {
      cout << "L";
    }
    for (int i = 0; i < min(u, d); i++) {
      cout << "U";
    }
    for (int i = 0; i < min(l, r); i++) {
      cout << "R";
    }
    for (int i = 0; i < min(u, d); i++) {
      cout << "D";
    }
    cout << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////