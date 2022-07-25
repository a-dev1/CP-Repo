#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
  int n, m;
  map<int, int> cprice;
  map<int, vector<pair<int, int>>> rotues;
  cin >> n >> m;
  while (m--) {
    int v, u, w;
    cin >> v >> u >> w;
    //adjacetcy list
    rotues[v].push_back({u, w});
    rotues[u].push_back({v, w});
  }
  for (int i = 1; i <= n; i++) {
    int temp;
    cin >> temp;
    cprice[i] = temp;
  }

  vector<int> arr;
  for (auto i : cprice) {
    int ans = i.second;
    // cout << "i: " << i.first << '\n';
    for (auto j : rotues[i.first]) {
      // cout << "ans:" << ans << endl;
      ans = min(ans, (cprice[j.first] + 2 * j.second));
      // cout << "(cprice[j.first] + 2*j.second):" << (cprice[j.first] + 2*j.second) << endl;
    }
    cout << ans << " ";
  }

  return 0;
}