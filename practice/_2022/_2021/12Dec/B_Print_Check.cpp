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
  int n, m, k;
  cin >> n >> m >> k;
  vector<pair<int, pair<int, int>>> arr;
  vector<vector<int>> ans(n, vector<int>(m, 0));

  for (int i = 0; i < k; i++) {
    int x, y, z;
    cin >> x >> y >> z;
    arr.push_back(make_pair(x, make_pair(y, z)));
  }

  cout << "arr.size():" << arr.size() << endl;

  int start;
  if (k >= (m + n)) {
    start = 0;
  } else {
    start = (k - (m + n));
  }

  cout << "start:" << start << endl;
  for (int m = start; m < arr.size(); m++) {
    if (arr[m].first == 1) {
      for (int i = 0; i < m; i++) {
        ans[arr[m].second.first - 1][i] = arr[m].second.second;
      }
    }
    if (arr[m].first == 0) {
      for (int i = 0; i < n; i++) {
        ans[i][arr[m].second.first - 1] = arr[m].second.second;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << ans[i][j] << " t";
    }
    cout << '\n';
  }

  return 0;
}