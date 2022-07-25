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

signed main() {
  code_brains;
  int m, s;
  cin >> m >> s;

  string mx = "", mi = "";

  if (s == 0 && m < 2) {
    cout << 0 << " " << 0;
    return 0;
  }

  if (s == 0 || (m * 9) < s) {
    cout << -1 << " " << -1;
    return 0;
  }

  int temp = s / 9;
  while (temp--) {
    mx.push_back('9');
  }

  if (s % 9 != 0 && mx.size() != m) {
    mx += to_string(s % 9);
  }

  while (mx.size() != m) mx.push_back('0');

  // min Formation
  temp = s;
  if (temp % 9 != 0 || temp / 9 != m) temp--;

  int nine = temp / 9;

  while (nine--) mi.push_back('9');

  bool isComplete = false;

  if (temp % 9 != 0)

    if (mi.size() + 1 == m) {
      mi += to_string((temp % 9) + 1);
      isComplete = true;
    } else
      mi += to_string((temp % 9));

  reverse(all(mi));

  if (!isComplete) {
    if ((temp % 9 != 0 || temp / 9 != m) && mi.size() != m) cout << '1';

    int diff = m - mi.size() - ((temp % 9 != 0 || temp / 9 != m) ? 1 : 0);

    while (diff > 0) {
      diff--;
      cout << '0';
    }
  }

  cout << mi << " " << mx;

  return 0;
}
