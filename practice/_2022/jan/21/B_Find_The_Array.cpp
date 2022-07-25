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
#define sz size()
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
// Function to calculate the smallest multiple
ll roundUp(ll numToRound, ll multiple) {
  if (multiple == 0LL) return numToRound;

  ll remainder = numToRound % multiple;
  if (remainder == 0LL) return numToRound;

  ll roundUp = numToRound + multiple - remainder;

  ll roundDown = ((numToRound + multiple / 2) / multiple) * multiple;

  if (roundDown <= 0) {
    return roundUp;
  }

  return (abs(numToRound - roundUp) < abs(numToRound - roundDown) ? roundUp
                                                                  : roundDown);
}

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> arr(n + 1);
    ll es = 0, os = 0;

    for (int i = 1; i <= n; i++) {
      cin >> arr[i];
      i % 2 == 0 ? es += arr[i] : os += arr[i];
    }

    ll start;
    es >= os ? start = 2 : start = 3;

    for (int i = 1; i <= n; i++) {
      if (start == 2) {
        if (i % 2 == 0)
          cout << arr[i] << " ";
        else
          cout << 1 << " ";
      } else {
        if (i % 2 != 0)
          cout << arr[i] << " ";
        else
          cout << 1 << " ";
      }
    }

    cout << '\n';
  }
  return 0;
}

//
///////////////////////////////////////////////////////////////