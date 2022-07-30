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

class UnionFind {
 public:
  UnionFind(int sz) : root(sz) {
    for (int i = 0; i < sz; i++) {
      root[i] = i;
    }
  }

  int find(int x) { return root[x]; }

  void unionSet(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);
    if (rootX != rootY) {
      for (int i = 0; i < root.size(); i++) {
        if (root[i] == rootY) {
          root[i] = rootX;
        }
      }
    }
  }

  bool connected(int x, int y) { return find(x) == find(y); }

 private:
  vector<int> root;
};

///////////////////////////////////////////////////////////////

signed main() {
  code_brains;
  // for displaying booleans as literal strings, instead of 0 and 1
  cout << boolalpha;
  UnionFind uf(10);
  // 1-2-5-6-7 3-8-9 4
  uf.unionSet(1, 2);
  uf.unionSet(2, 5);
  uf.unionSet(5, 6);
  uf.unionSet(6, 7);
  uf.unionSet(3, 8);
  uf.unionSet(8, 9);
  cout << uf.connected(1, 5) << endl;  // true
  cout << uf.connected(5, 7) << endl;  // true
  cout << uf.connected(4, 9) << endl;  // false
  // 1-2-5-6-7 3-8-9-4
  uf.unionSet(9, 4);
  cout << uf.connected(4, 9) << endl;  // true
  return 0;
}

///////////////////////////////////////////////////////////////

// Python Code
//  # UnionFind class
//  class UnionFind:
//      def __init__(self, size):
//          self.root = [i for i in range(size)]

//     def find(self, x):
//         return self.root[x]

//     def union(self, x, y):
//         rootX = self.find(x)
//         rootY = self.find(y)
//         if rootX != rootY:
//             for i in range(len(self.root)):
//                 if self.root[i] == rootY:
//                     self.root[i] = rootX

//     def connected(self, x, y):
//         return self.find(x) == self.find(y)

// # Test Case
// uf = UnionFind(10)
// # 1-2-5-6-7 3-8-9 4
// uf.union(1, 2)
// uf.union(2, 5)
// uf.union(5, 6)
// uf.union(6, 7)
// uf.union(3, 8)
// uf.union(8, 9)
// print(uf.connected(1, 5))  # true
// print(uf.connected(5, 7))  # true
// print(uf.connected(4, 9))  # false
// # 1-2-5-6-7 3-8-9-4
// uf.union(9, 4)
// print(uf.connected(4, 9))  # true