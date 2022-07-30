#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
vector<int> visited(6);

class Tree {
 private:
  /* data */
 public:
  Tree(/* args */);
  ~Tree();
};

Tree::Tree(/* args */) {}

Tree::~Tree() {}

void BFS(int v, vector<vector<int>> adj) {
  queue<int> q;

  for (int i = 1; i < v + 1; i++) {
    if (adj[i].size() > 0 && !visited[i]) {
      q.push(i);
      visited[i] = 1;
      break;
    }
  }

  // cout << "BFS: ";

  while (!q.empty()) {
    // int temp = q.front();
    for (auto i : adj[q.front()]) {
      if (!visited[i]) {
        q.push(i);
        visited[i] = 1;
      }
    }
    cout << q.front() << " ";
    q.pop();
  }
}

signed main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> arr(n + 1);

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    arr[u].push_back(v);
    arr[v].push_back(u);
  }

  // If graph is not present in single component then we have to check each
  // element
  cout << "BFS: ";

  for (int i = 1; i < n + 1; i++) {
    if (!visited[i]) {
      // cout << "Called for : " << i << ": ";
      BFS(n, arr);
    }
  }
  cout << '\n';
  for (int i = 1; i < n + 1; i++) {
    cout << "i: " << i << " ";
    for (auto j : arr[i]) cout << j << " ";
    cout << '\n';
  }
  return 0;
}