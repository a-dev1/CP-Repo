#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

signed main() {
  int n, m, cnt = 0;
  cin >> n >> m;
  vector<int> ans(1000000);
  map<int, bool> vis;

  for (int i = 1; i <= n; i++) {
    int temp;
    cin >> temp;
    ;
    vis[temp] = 1;
  }

  for (int i = 1; i <= m; i++)
    if (!vis[i]) {
      m -= i;
      ans[++cnt] = i;
    }

  cout << cnt << '\n';
  for (int i = 1; i <= cnt; i++) cout << ans[i] << " ";

  return 0;
}