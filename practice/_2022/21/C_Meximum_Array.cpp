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
void findMinLenMex() {}

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;

    vector<int> arr(n);
    vector<int> ans;
    vector<int> everyNum(n + 2);

    map<int, int> m;

    for (auto &i : arr) {
      cin >> i;
      everyNum[i] = 1;
      m[i]++;
    }

    set<int> s;
    debug(s.size());

    int maxLen = m.size();

    int range = 0;
    for (int i = 0; i < n; i++) {
      debug(s);
      debug(range);
      debug(s.size());

      if (s.size() > 0) {
        debug(*s.rbegin());
        if (*s.rbegin() > range) {
          for (int j = 0; j <= *s.rbegin(); j++) {
            if (!s.count(j)) {
              if (!everyNum[j]) {
                ans.push_back(j);
                s.clear();
                break;
              }
            }
          }
        }
      }

      if (s.size() == maxLen) {
        ans.push_back(*s.rbegin() + 1);
        maxLen--;
        s.clear();
      }

      s.insert(arr[i]);
      debug("end");
      debug(s);
      range = s.size() - 1;
    }

    debug(ans);
  }
  return 0;
}

///////////////////////////////////////////////////////////////