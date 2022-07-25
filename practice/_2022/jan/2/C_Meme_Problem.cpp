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
double ans1, ans2;
bool ok(double x, double num1, double num2, int d) {
  num1 = num1 - x;
  num2 = num2 + x;

  if (abs((num1 * num2) - d) <= 1e-10) {
    ans1 = num1;
    ans2 = num2;
  }

  return (num1 * num2) > d;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int d;
    cin >> d;
    ans1 = -1, ans2 = -1;
    double l = 0, h = 1;
    double num1 = d - 1, num2 = 1;

    for (int i = 0; i < 100; i++) {
      double mid = (l + h) / 2;
      if (ok(mid, num1, num2, d))
        h = mid;
      else
        l = mid;
    }

    if (d == 0) {
      cout <<"Y" <<" " << 0 << " " << 0 << '\n';
      continue;
    }

    if (ans1 == -1 && ans2 == -1) {
      cout << "N\n";
      continue;
    }
    cout << setprecision(20);
    cout << "Y " << ans1 << " " << ans2 << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////