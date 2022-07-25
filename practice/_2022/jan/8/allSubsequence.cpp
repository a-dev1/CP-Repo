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
void generateSubSets(string str, int maping) {
  int cnt = 0;
  while (cnt < str.length()) {
    if ((maping >> cnt) & 1) cout << str[cnt] << " ";
    cnt++;
  }
  cout << '\n';

  if (maping == 0) {
    return;
  }

  generateSubSets(str, maping - 1);
}
vector<int> subset;
int n = 3;
void search(int k) {
  if (k == n + 1) {
    // process subset
  } else {
    // include k in the subset
    subset.push_back(k);
    search(k + 1);
    subset.pop_back();
    // don’t include k in the subset
    search(k + 1);
  }
}

signed main() {
  string str = "abcd";
  // " "
  // "a"
  // "b"
  // "c"
  // "ab"
  // "bc"
  // "ac"
  // "abc"

  // 2^n;
  // for(int i = 0; i < pow(2, str.length()); i++) {
  //   int j = 0;
  //   while(j < str.length()) {
  //     if((i >> j) & 1) cout << str[j] << " ";
  //     j++;
  //   }
  //   cout << '\n';
  // }
  // generateSubSets(str, pow(2, str.length()) - 1);
  search(3);
  debug(subset);
  return 0;
}

///////////////////////////////////////////////////////////////