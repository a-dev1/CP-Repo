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

///////////////////////////////////////////////////////////////
bool myComp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.first > p2.first) return true;
  if (p1.first == p2.first && p1.second < p2.second) return true;
  return false;
}

signed main() {
  code_brains;
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> arr(n);
  for (auto &i : arr) {
    cin >> i.first >> i.second;
  }

  // sort(arr.begin(), arr.end(), myComp);
  sort(arr.begin(), arr.end(), myComp);

  // debug(arr);

  // debug(ans);

  unordered_map<pair<int, int>, int> m;
  for (int i = 0; i < n; i++) {
    m[{arr[i].first, arr[i].second}]++;
  }

  // debug(m)
  // vector<int> ans;

  // for (auto i = m.rbegin(); i != m.rend(); i++) {
  //   stack<int> stack;

  //   auto tp = i;
  //   tp++;

  //   if (tp->first.first == i->first.first && tp != m.rend()) {
  //     stack.push(i->second);
  //     while (tp->first.first == i->first.first) {
  //       stack.push(tp->second);
  //       tp++;
  //     }
  //     tp--;
  //     i = tp;
  //     while (!stack.empty()) {
  //       ans.push_back(stack.top());
  //       stack.pop();
  //     }
  //   } else {
  //     ans.push_back(i->second);
  //   }
  // }

  // debug(ans);

  // temp = 0;
  // for (int i = 0; i < ans.size(); i++) {
  //   temp += ans[i];
  //   if (temp >= k) {
  //     cout << ans[i] << '\n';
  //     break;
  //   }
  // }

  return 0;
}

///////////////////////////////////////////////////////////////