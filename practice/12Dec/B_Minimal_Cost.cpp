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
  int tc;
  cin >> tc;
  while (tc--) {
    int n, u, v;
    cin >> n >> u >> v;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;

    int diff = -1;
    for (int i = 0; i < n - 1; i++) {
      diff = max(abs(arr[i] - arr[i + 1]), diff);
    }

    if (diff == 0) {
      cout << min((u + v), 2 * v) << '\n';
    } else if (diff == 1) {
      cout << min(v, u) << '\n';
    } else {
      cout << 0 << '\n';
    }
  }
  return 0;
}