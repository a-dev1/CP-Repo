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
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    int extra = 0, cnt = 0, preCnt = 0, preK = 0;
    int len = str.length();

    bool isNotFound = true, isOneFound = false;

    int temp = 0, oneCnt = 0;

    for (int i = 0; i < len - 1; i++) {
      temp = 0;
      oneCnt = 0;

      while (str[i] == '1' && str[i + 1] == '1') {
        preCnt = 0;
        isOneFound = true;
        i++;
        continue;
      }

      if (str[i] == '1') {
        isOneFound = true;
        continue;
      }

      while (str[i] == '0' && str[i + 1] == '0') {
        temp++;
        i++;
      }

      if ((temp + 1) >= k) cnt += ((temp + 1) / k);

      if ((((temp + 1) % k) + 1 + preK) == k && isNotFound && isOneFound) {
        cnt++;
        isNotFound = false;
      }

      preK = ((temp + 1) % k);
    }

    if (k > n) {
      cout << 0 << '\n';
      continue;
    } else if (n == 1 && str[0] == '0') {
      cout << 0 << '\n';
      continue;
    } else if (n == 1 && str[0] == '1') {
      cout << 1 << '\n';
      continue;
    }

    if (str[n - 1] == '0') temp++;

    if (n > 2)
      if ((str[n - 1] == '0' && str[n - 2] == '1') && (1 + preK + temp) >= k &&
          isNotFound && isOneFound) {
        cnt++;
        isNotFound = false;
      }

    cout << cnt << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////