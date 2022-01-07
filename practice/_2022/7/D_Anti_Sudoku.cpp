#include <bits/stdc++.h>

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

///////////////////////////////////////////////////////////////

signed main() {
  int t;
  cin >> t;
  while (t--) {
    vector<string> arr(9);
    // debug(arr)
    for (int i = 0; i < 9; i++) {
      cin >> arr[i];
    }

    int k = 0;
    vector<int> alag;
    for (int i = 0; i < 3; i++) {
      // debug(arr[i][k])
      alag.push_back(arr[i][k] - '0');
      k += 3;
    }
    // debug(alag);

    int whatTo;
    for (int i = 1; i <= 9; i++) {
      if (i != alag[0] && i != alag[1] && i != alag[2]) {
        whatTo = i;
        break;
      }
    }
    // debug(whatTo)

    k = 0;
    for (int i = 0; i < 3; i++) {
      arr[i][k] = to_string(whatTo)[0];
      k += 3;
    }

    // --------------------------------------------------- //
    k = 1;
    alag.resize(0);
    for (int i = 3; i < 6; i++) {
      // debug(arr[i][k])
      alag.push_back(arr[i][k] - '0');
      k += 3;
    }
    // debug(alag);

    whatTo;
    for (int i = 1; i <= 9; i++) {
      if (i != alag[0] && i != alag[1] && i != alag[2]) {
        whatTo = i;
        break;
      }
    }
    // debug(whatTo)

    k = 1;
    for (int i = 3; i < 6; i++) {
      arr[i][k] = to_string(whatTo)[0];
      k += 3;
    }

    // --------------------------------------------------- //
    k = 2;
    alag.resize(0);
    for (int i = 6; i < 9; i++) {
      // debug(arr[i][k])
      alag.push_back(arr[i][k] - '0');
      k += 3;
    }
    // debug(alag);

    whatTo;
    for (int i = 1; i <= 9; i++) {
      if (i != alag[0] && i != alag[1] && i != alag[2]) {
        whatTo = i;
        break;
      }
    }
    // debug(whatTo)

    k = 2;
    for (int i = 6; i < 9; i++) {
      arr[i][k] = to_string(whatTo)[0];
      k += 3;
    }

    for (int i = 0; i < 9; i++) {
      cout << arr[i] << '\n';
    }
  }
  return 0;
}

// 154873296
// 386592714
// 729641835
// 863725149
// 975314628
// 412968357
// 631457982
// 598236471
// 247189563

// 2 54873296
// 386 2 92714
// 729641 2 35
// 2 4 3725149
// 9753 2 4628
// 4129683 2 7
// 63 2 457982
// 59823 2 471
// 24718956 2

// 154873 3 96 2-> 3
// 3 3 6592714 8-> 3
// 72964 5 835 1-> 5
// 86372514 5  9-> 5
// 97 9 314628 5-> 9
// 4129 5 8357 6-> 5
// 6314579 9 2 8-> 9
// 9 98236471  5-> 9
// 247 7 89563 1-> 7
// ///////////////////////////////////////////////////////////////