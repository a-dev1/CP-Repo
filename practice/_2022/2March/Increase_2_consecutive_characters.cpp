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

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    int n, q;

    cin >> n >> q;
    string a, b;
    cin >> a >> b;

    map<pi, string> m;
    for (int i = 0; i < q; i++) {
      int l, r;
      cin >> l >> r;
      int len = r - l + 1;

      if (m.count({l, r})) {
        cout << m[{l, r}] << '\n';
        continue;
      }

      string t1 = a.substr(l - 1, len), t2 = b.substr(l - 1, len);
      // debug(t1);
      // debug(t2);

      // vector<int> ans(len, 0);

      for (int i = 0; i < len - 1; i++) {
        if (t1[i] < t2[i]) {
          int steps = ((int)t2[i] - 96) - ((int)t1[i] - 96);
          // debug(steps);

          int temp = (((int)t1[i + 1] - 96) + steps);
          // debug(temp);

          t1[i] = t2[i];

          if (temp > 26) {
            if (temp % 26 == 0) {
              temp = 26;
            } else
              temp = (temp % 26);
          }

          t1[i + 1] = (char)(temp + 96);
          // debug(char(t1[i + 1]));

        } else if (t1[i] > t2[i]) {
          // debug("second");
          int steps = ((int)t1[i] - ((int)t1[i] - (int)t2[i])) - 97;
          // debug(steps);

          t1[i] = t2[i];

          int temp = (((int)t1[i + 1] - 96) + steps);
          // debug(temp);

          if (temp > 26) {
            if (temp % 26 == 0) {
              temp = 26;
            } else
              temp = (temp % 26);
          }
          // debug(temp);
          t1[i + 1] = (char)(temp + 96);
          // debug(char(t1[i + 1]));
        }
        if (t1 == t2) break;
      }
      // debug("after");
      // debug(t1);
      // debug(t2);
      if (t1 == t2) {
        cout << "Yes\n";
        m[{l, r}] = "Yes";
      } else {
        cout << "No\n";
        m[{l, r}] = "No";
      }
    }
  }
  return 0;
}
///////////////////////////////////////////////////////////////