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
  // vi arr = {-4, 1, -3, 2, 3, -1, 5, -8, 2};
  // vi arr = {5, 6, 4, 7, 2, -30, 12, 16};
  vi arr = {31, 63, -38, 43, 65, 74, 90, -23, 45, 22};
  // vi arr = {2, -1, 2, 11};
  int k = 341;
  // int k = 9;
  // ans = 4;
  int ans = INT_MAX;
  // debug(ans);

  int l = 0, r = 0, len = arr.size();
  bool isLast = true, isNecessary = true;

  if (arr.size() == 1) {
    if (arr[0] < k) return -1;
    return 1;
  }

  // debug(k);

  int pos = 0, neg = 0;

  while (r < (len)) {
    // int segSum = arr[r];
    if (l == r) {
      pos = 0;
      neg = 0;
    }
    debug(pos);
    debug(neg);
    while (r < (len) && pos < k) {
      if (r == len - 1) break;
      (arr[r] >= 0) ? pos += arr[r] : neg += arr[r];

      if ((pos + neg) >= k) ans = min(ans, (r - l + 1));

      debug(pos);
      debug(neg);
      if (pos >= k) break;

      r++;
    }

    debug(l);
    debug(r);
    debug(ans);

    int prevL = 0, prevNeg = neg, prevPos = pos;

    while (pos >= k && l != r) {
      (arr[l] >= 0) ? pos -= arr[l] : neg -= arr[l];

      l++;

      if (pos + neg >= k) {
        ans = min(ans, (r - l + 1));
        debug(r - l + 1);
        debug(pos);
        debug(neg);
        debug(l);
        debug(r);
      }
    }

    if (ans == INT_MAX) {
      l = prevL;
      neg = prevNeg;
      pos = prevPos;
    }
    debug(l);
    debug(r);
    debug(ans);

    r++;
  }

  if (ans == INT_MAX) ans = -1;

  return 0;
}

///////////////////////////////////////////////////////////////