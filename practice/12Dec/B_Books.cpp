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
  int n, t;
  cin >> n >> t;
  vector<int> arr(n);
  bool isPossible = false;
  for (auto &i : arr) {
    cin >> i;
    if (i <= t) isPossible = true;
  }

  int l = 0, ans = -1, sum = 0;
  if (!isPossible) {
    cout << 0 << '\n';
    return 0;
  }
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    while (sum > t && i > l) {
      sum -= arr[l];
      l++;
    }
    ans = max(ans, i - l + 1);
  }

  cout << ans << '\n';
  return 0;
}
