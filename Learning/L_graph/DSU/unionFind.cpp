// class UnionFind {
// public:
//     UnionFind(int sz) : root(sz) {
//         for (int i = 0; i < sz; i++) {
//             root[i] = i;
//         }
//     }

//     int find(int x) {
//         while (x != root[x]) {
//             x = root[x];
//         }
//         return x;
//     }

//     void unionSet(int x, int y) {
//         int rootX = find(x);
//         int rootY = find(y);
//         if (rootX != rootY) {
//             root[rootY] = rootX;
//         }
//     }

//     bool connected(int x, int y) {
//         return find(x) == find(y);
//     }

// private:
//     vector<int> root;
// };

// // Test Case
// int main() {
//     // for displaying booleans as literal strings, instead of 0 and 1
//     cout << boolalpha;
//     UnionFind uf(10);
//     // 1-2-5-6-7 3-8-9 4
//     uf.unionSet(1, 2);
//     uf.unionSet(2, 5);
//     uf.unionSet(5, 6);
//     uf.unionSet(6, 7);
//     uf.unionSet(3, 8);
//     uf.unionSet(8, 9);
//     cout << uf.connected(1, 5) << endl;  // true
//     cout << uf.connected(5, 7) << endl;  // true
//     cout << uf.connected(4, 9) << endl;  // false
//     // 1-2-5-6-7 3-8-9-4
//     uf.unionSet(9, 4);
//     cout << uf.connected(4, 9) << endl;  // true

//     return 0;
// }

// # UnionFind class
// class UnionFind:
//     def __init__(self, size):
//         self.root = [i for i in range(size)]

//     def find(self, x):
//         while x != self.root[x]:
//             x = self.root[x]
//         return x

//     def union(self, x, y):
//         rootX = self.find(x)
//         rootY = self.find(y)
//         if rootX != rootY:
//             self.root[rootY] = rootX

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
// class Solution {
//  public:
//   vector<int> root;

//   int find(int x) {
//     while (x != root[x]) x = root[x];

//     return x;
//   }

//   int uni(int x, int y) {
//     int xroot = find(x);
//     int yroot = find(y);

//     if (xroot != yroot) {
//       root[yroot] = xroot;
//     }
//   }

//   int connected(int x, int y) { return find(x) == find(y); }

//   int findCircleNum(vector<vector<int>>& isConnected) {
//     int len = isConnected[0].size();
//     root.resize(len);
//     for (int i = 1; i <= len; i++) root[i] = i;

//     for (int i = 1; i <= len; i++) {
//       for (int j = 0; j <= len; j++) {
//         if (isConnected[i][j] && i != j) uni(i, j);
//       }
//     }
//   }
// };