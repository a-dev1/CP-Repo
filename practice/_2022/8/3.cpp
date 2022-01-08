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
  vector<string> words = {"dd", "aa", "bb", "dd", "aa", "dd", "bb", "dd",
                          "aa", "cc", "cc", "bb", "cc", "dd", "cc"};

  vector<int> arr;
  int ans = 0;
  map<string, int> m;

  for (auto i : words) {
    m[i]++;
  }

  debug(m);

  int biggest = -1;

  int itsType = 0, itsCnt = 0;
  for (auto i = m.begin(); i != m.end(); i++) {
    if (i->first[0] == i->first[1]) {
      itsType++;
      itsCnt = max(i->second, itsCnt);
      if (i->second > 1) arr.push_back(i->second);
      i->second = -1;
      continue;
    }

    string temp = "";
    temp.push_back(i->first[1]);
    temp.push_back(i->first[0]);
    // debug(temp);

    for (auto j = i; j != m.end(); j++) {
      if (j->first == temp && j->second != -1) {
        ans += 4;
        j->second = -1;
      }
    }
  }

  sort(arr.begin(), arr.end());

  ans += (2 * arr[arr.size() - 1]);
  for (int i = 0; i < arr.size() - 1; i++) {
    if(arr[i]%2 == 0) {
      ans += (2 * arr[i]);
    }
    else {
      ans += (2 * (arr[i] - 1));
    }
  }

  if (itsType == 1 && itsCnt == 1 || itsCnt == 1) {
    ans += 2;
  }

  cout << ans << '\n';

  return 0;
}

///////////////////////////////////////////////////////////////