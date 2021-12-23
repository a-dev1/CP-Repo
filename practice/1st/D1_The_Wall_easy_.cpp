#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

map<pair<int, int>, int> vis;

void startKrDo(int i, int j, int r, int c, vector<string>& v) {
  if (i < 0 or i >= r or j < 0 or j >= c) {
    return;
  }
  if (vis[{i, j}] == 1) return;
  if (v[i][j] == '.') return;
  vis[{i, j}] = 1;

  startKrDo(i + 1, j, r, c, v);
  startKrDo(i, j + 1, r, c, v);
  startKrDo(i - 1, j, r, c, v);
  startKrDo(i, j - 1, r, c, v);
}

void solve() {
  int r, c;
  cin >> r >> c;
  std::vector<string> v(r);
  for (int i = 0; i < r; i++) {
    cin >> v[i];
  }

  vector<pair<int, int>> wall;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (v[i][j] == 'B') {
        wall.push_back({i, j});
      }
    }
  }

  if (wall.size() == 0) {
    cout << "0\n";
    return;
  }

  int cnt = 0;
  for (auto x : wall) {
    if (vis[x] == 1) continue;
    cnt++;
    startKrDo(x.first, x.second, r, c, v);
  }

  cout << cnt << "\n";
}

signed main() { solve(); }