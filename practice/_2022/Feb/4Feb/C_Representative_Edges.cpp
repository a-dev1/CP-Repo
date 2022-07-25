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
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<double> arr(n);
    for (auto &i : arr) cin >> i;

    // cout << (double)1e-6 << '\n';
    if (arr.size() <= 2) {
      cout << 0 << '\n';
      continue;
    }

    // how Many already

    int ans = 0;
    for (int i = 0; i < n - 2; i++) {
      int cnt = 0;

      double avg = (arr[i] + arr[i + 2]) / 2.0;
      double diff = avg - arr[i];
      // debug(diff)

      // go check left
      double temp = arr[i];
      for (int j = i - 1; j >= 0; j--) {
        temp -= diff;
        if (abs(arr[j] - temp) < 1 / 1e6) {
          cnt++;
          // debug(arr[j]);
        }
      }

      // go check right
      temp = arr[i];
      for (int j = i + 1; j < n; j++) {
        temp += diff;
        if (abs(arr[j] - temp) < 1 / 1e6) {
          cnt++;
          // debug(arr[j]);
        }
      }

      ans = max(ans, cnt);
    }

    double diff = ((arr[n-1]) - arr[0])/(double)(n-1);
    // debug(diff)
    int cnt = 0; double temp = arr[0];
    //1st and last
    for(int i = 1; i < n-1; i++) {
      temp += diff;
      if(abs(arr[i] - temp) < 1/1e6) cnt++;
    }

    ans = max(ans, cnt);

    ans++;
    cout << n - ans << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////