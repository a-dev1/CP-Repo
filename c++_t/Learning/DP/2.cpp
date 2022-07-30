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

bool isPerfect(int N) {
  if ((sqrt(N) - floor(sqrt(N))) != 0) return false;
  return true;
}

// Function to find the closest perfect square
// taking minimum steps to reach from a number
void getClosestPerfectSquare(int N) {
  if (isPerfect(N)) {
    cout << N << " "
         << "0" << endl;
    return;
  }

  // Variables to store first perfect
  // square number
  // above and below N
  int aboveN = -1, belowN = -1;
  int n1;

  // Finding first perfect square
  // number greater than N
  n1 = N + 1;
  while (true) {
    if (isPerfect(n1)) {
      aboveN = n1;
      break;
    } else
      n1++;
  }

  // Finding first perfect square
  // number less than N
  n1 = N - 1;
  while (true) {
    if (isPerfect(n1)) {
      belowN = n1;
      break;
    } else
      n1--;
  }

  // Variables to store the differences
  int diff1 = aboveN - N;
  int diff2 = N - belowN;

  if (diff1 > diff2)
    cout << belowN << " " << diff2;
  else
    cout << aboveN << " " << diff1;
}

///////////////////////////////////////////////////////////////

signed main() {
  code_brains;
  int target = 766972377, maxDoubles = 92;
  int ans = 2;

  if (maxi == 0) {
    return target - n;
  }
  int ans = 0;
  if (target & 1) {
    target -= 1;
    ans = 1;
  }

  while (maxi-- and target % 2 == 0) {
    target /= 2;
    if (target & 1 and target > 1) {
      target -= 1;
      ans++;
    }
    ans++;
  }

  cout << target << "\n";
  if (target == n) return ans;
  return ans + (target - 1);
  // debug(ans);
  if (target == 1)
    return 0;
  else if (maxDoubles == 0)
    return (target - 1);
  else
    return ans;
  return 0;
}

///////////////////////////////////////////////////////////////