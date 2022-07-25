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
#define present(c, x) (c.find(x) != c.end())
#define desc greater<int>()
#define fi first
#define se second
#define bg begin()
#define ed end()
#define set_bits __builtin_popcountint
#define vl vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define pi pair<int, int>
#define pl pair<ll, ll>

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
bool cmp(pi& x, pi& y) {
  if (x.first != y.first) return false;
  // return true;
  return x.second >= y.second;
}

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<pi> temp;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      temp.push_back({arr[i], i});
    }

    sort(all(temp));

    // debug(arr) debug(temp);

    for (int i = 0; i < n; i++) {
      if (temp[i].first == arr[i] && i != temp[i].second) {
        int ptr = i - 1;
        bool found = false;

        while (ptr >= 0 && temp[ptr].first == arr[i]) {
          if (temp[ptr].second == i) {
            found = true;
            break;
          }
          ptr--;
        }

        if (found) {
          swap(temp[i], temp[ptr]);
        } else {
          int ptr = i + 1;
          while (ptr < n && temp[ptr].first == arr[i]) {
            if (temp[ptr].second == i) {
              found = true;
              break;
            }
            ptr++;
          }
          swap(temp[i], temp[ptr]);
        }
      }
    }

    bool possible = true;
    for (int i = 0; i < n; i++) {
      if (abs(temp[i].second - i) % 2 != 0) {
        possible = false;
        break;
      }
    }

    sort(temp.begin(), temp.end(), cmp);

    debug(temp);
    if (!possible) {
      possible = true;
      for (int i = 0; i < n; i++) {
        if (abs(temp[i].second - i) % 2 != 0) {
          possible = false;
          break;
        }
      }
    }
    if (possible)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}

///////////////////////////////////////////////////////////////