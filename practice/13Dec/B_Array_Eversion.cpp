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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
    reverse(arr.begin(), arr.end());

    int maximum = *max_element(arr.begin(), arr.end());
    int ans = 0;

    int prevMax = arr[0];
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] == maximum) {
        break;
      }
      if (prevMax < arr[i + 1]) {
        ans++;
        prevMax = arr[i + 1];
      }
    }
    cout << ans << '\n';
  }
  return 0;
}