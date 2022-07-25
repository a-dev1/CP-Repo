// #include <bits/stdc++.h>

// #define code_brains                 \
//   ;                                 \
//   ios_base::sync_with_stdio(false); \
//   cin.tie(NULL);                    \
//   cout.tie(0);
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double lld;

// const int MAX_N = 1e5 + 1;
// const int MOD = 1e9 + 7;
// #define endl "\n"
// #define PI 3.1415926535897932384626
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define debug(x)     \
//   cerr << #x << " "; \
//   _print(x);         \
//   cerr << endl;
// #define present(c, x) (c.find(x) != c.end())
// #define desc greater<int>()
// #define fi first
// #define se second
// #define bg begin()
// #define ed end()
// #define pb push_back
// #define setBits __builtin_popcount
// #define setBitsll __builtin_popcountll
// #define vl vector<ll>
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define vvl vector<vector<ll>>
// #define pi pair<int, int>
// #define pl pair<ll, ll>
// #define sz(a) a.size()
// #define len(a) a.length()

// int M = 1e9 + 7;
// int power(int a, int n) {
//   int result = 1;
//   while (n) {
//     if (n & 1) result = (result * (ll)a) % M;
//     n >>= 1;
//     a = (a * (ll)a) % M;
//   }
//   return result;
// }

// int power(int a, int n);
// int minv(int a) { return power(a, M - 2); }
// int mod(int n) { return (n % M + M) % M; }
// int modM(int n, int m) { return ((ll)(n % M) * (m % M)) % M; }
// int modA(int n, int m) { return ((ll)(n % M) + (m % M)) % M; }
// int modS(int n, int m) { return (((ll)(n % M) - (m % M)) + M) % M; }
// int modD(int n, int m) { return ((ll)(n % M) * (minv(m) % M)) % M; }
// int lcm(int a, int b) { return ((ll)a * b) / __gcd(a, b); }

// void _print(ll t) { cerr << t; }
// void _print(int t) { cerr << t; }
// void _print(string t) { cerr << t; }
// void _print(char t) { cerr << t; }
// void _print(lld t) { cerr << t; }
// void _print(double t) { cerr << t; }
// void _print(ull t) { cerr << t; }

// template <class T, class V>
// void _print(pair<T, V> p);
// template <class T>
// void _print(vector<T> v);
// template <class T>
// void _print(set<T> v);
// template <class T, class V>
// void _print(map<T, V> v);
// template <class T>
// void _print(multiset<T> v);
// template <class T, class V>
// void _print(pair<T, V> p) {
//   cerr << "{";
//   _print(p.first);
//   cerr << ",";
//   _print(p.second);
//   cerr << "}";
// }
// template <class T>
// void _print(vector<T> v) {
//   cerr << "[ ";
//   for (T i : v) {
//     _print(i);
//     cerr << " ";
//   }
//   cerr << "]";
// }
// template <class T>
// void _print(set<T> v) {
//   cerr << "[ ";
//   for (T i : v) {
//     _print(i);
//     cerr << " ";
//   }
//   cerr << "]";
// }
// template <class T>
// void _print(multiset<T> v) {
//   cerr << "[ ";
//   for (T i : v) {
//     _print(i);
//     cerr << " ";
//   }
//   cerr << "]";
// }
// template <class T, class V>
// void _print(map<T, V> v) {
//   cerr << "[ ";
//   for (auto i : v) {
//     _print(i);
//     cerr << " ";
//   }
//   cerr << "]";
// }

// ///////////////////////////////////////////////////////////////
// // ??????
// // )((
// signed main() {
//   code_brains;
//   int t;
//   cin >> t;
//   while (t--) {
//     string str;
//     cin >> str;
//     int n = str.length();
//     int open = 0, close = 0, half = n / 2, question = 0;

//     for (int i = 0; i < n; i++) {
//       if (str[i] == '(')
//         open++;
//       else if (str[i] == ')')
//         close++;
//       else
//         question++;
//     }

//     if (close == half || open == half) {
//       cout << "YES\n";
//       continue;
//     }

//     int qcnt = 0;

//     // debug(str2);

//     for (int i = 0; i < n; i++) {
//       if (str[i] == '?') {
//         qcnt++;
//         if (qcnt == 1) {
//           str[i] = ')';
//           close++;
//           continue;
//         }

//         if (qcnt == question) {
//           str[i] = '(';
//           open++;
//           continue;
//         }

//         if (open < half) {
//           str[i] = '(';
//           open++;
//           continue;
//         }

//         if (close < half) {
//           str[i] = ')';
//           close++;
//           continue;
//         }
//       }
//     }

//     open = 0, close = 0;
//     bool possible = false;
//     debug(str);

//     for (int i = 0; i < n; i++) {
//       if (str[i] == '(')
//         open++;
//       else {
//         close++;
//       }

//       if (close > open) {
//         possible = true;
//         break;
//       }
//     }

//     // if (str.length() == 2) {
//     //   cout << "YES\n";
//     //   continue;
//     // }

//     if (open != close) {
//       cout << "YES\n";
//       continue;
//     }

//     if (!possible) {
//       cout << "NO\n";
//       continue;
//     }

//     cout << "YES\n";
//   }
//   return 0;
// }

// // (???
// // ()()
// // (())
// ///////////////////////////////////////////////////////////////

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
#define pb push_back
#define setBits __builtin_popcount
#define setBitsll __builtin_popcountll
#define vl vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define sz(a) a.size()
#define len(a) a.length()

int M = 1e9 + 7;
int power(int a, int n) {
  int result = 1;
  while (n) {
    if (n & 1) result = (result * (ll)a) % M;
    n >>= 1;
    a = (a * (ll)a) % M;
  }
  return result;
}

int power(int a, int n);
int minv(int a) { return power(a, M - 2); }
int mod(int n) { return (n % M + M) % M; }
int modM(int n, int m) { return ((ll)(n % M) * (m % M)) % M; }
int modA(int n, int m) { return ((ll)(n % M) + (m % M)) % M; }
int modS(int n, int m) { return (((ll)(n % M) - (m % M)) + M) % M; }
int modD(int n, int m) { return ((ll)(n % M) * (minv(m) % M)) % M; }
int lcm(int a, int b) { return ((ll)a * b) / __gcd(a, b); }

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
// ??????
// )((
signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    string str;
    cin >> str;
    int n = str.length();
    int open = n / 2, close = n / 2;

    vi pos;
    for (int i = 0; i < n; i++) {
      if (str[i] == '?') pos.pb(i);
      if (str[i] == ')') close--;
      if (str[i] == '(') open--;
    }

    auto check = [&](string str) {
      int bal = 0;
      for (char c : str) {
        if (c == '(')
          bal++;
        else
          bal--;
        if (bal < 0) return false;
      }

      return bal == 0;
    };

    // for (int i = 0; i < pos.size(); ++i) {
    //   if (i < open)
    //     str[pos[i]] = '(';
    //   else
    //     str[pos[i]] = ')';
    // }
    int tc = close, to = open;
    for (int i = 0; i < n; i++) {
      if (str[i] == '?') {
        if (to > 0) {
          str[i] = '(';
          to--;
        } else {
          str[i] = ')';
          tc--;
        }
      }
    }
    debug(open);
    debug(close);
    debug(str);

    bool ok = true;
    if (open > 0 && close > 0) {
      //freaking really smart move
      swap(str[pos[open - 1]], str[pos[open]]);
      debug(str);
      if (check(str)) ok = false;
    }

    cout << (ok ? "YES\n" : "NO\n");
  }
  return 0;
}

// (???
// ()()
// (())
///////////////////////////////////////////////////////////////