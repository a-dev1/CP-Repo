#include <bits/stdc++.h>

#include <string>

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
    vector<pair<int, int>> arr(n);
    
    for (int i = 0; i < n; i++) {
      cin >> arr[i].second >> arr[i].first;
    }

    sort(all(arr));
    // debug(arr);

    bool isPossible = true;
    for (int i = 1; i < n; i++) {
      if (arr[i].second < arr[i - 1].second) {
        cout << "NO\n";
        isPossible = false;
        break;
      }
    }

    if (!isPossible) {
      continue;
    }

    string str = "";
    cout << "YES\n";
    int r = 0, c = 0;
    for (int i = 0; i < n; i++) {
      int loo = abs(arr[i].second - c);
      while (loo--) {
        str += "R";
      }
      loo = abs(arr[i].first - r);
      while (loo--) {
        str += "U";
      }
      r = arr[i].first;
      c = arr[i].second;
    }
    cout << str << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////