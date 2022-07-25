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
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> m;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      m[arr[i]]++;
    }

    int maxUnique = -1;
    for (auto i : m) {
      if (i.second > maxUnique) {
        maxUnique = i.second;
      }
    }

    if (m.size() == 1) {
      auto it = m.begin();
      if (it->second > 1) {
        cout << 1 << '\n';
      } else
        cout << 0 << '\n';
      continue;
    }

    if (maxUnique > m.size()) {
      cout << m.size() << '\n';
    } else {
      if (maxUnique == m.size()) {
        cout << maxUnique - 1 << '\n';
      } else {
        cout << maxUnique << '\n';
      }
      continue;
    }

    // else if (cnt < maxUnique) {
    //   if ((cnt + 1) < (maxUnique - 1)) {
    //   }
    //   cout << cnt << '\n';
    // }
    // else if (maxUnique < cnt) {
    //   cout << maxUnique << '\n';
    // }
  }
  return 0;
}

///////////////////////////////////////////////////////////////