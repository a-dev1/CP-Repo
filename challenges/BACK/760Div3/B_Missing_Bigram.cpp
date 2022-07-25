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
    vector<string> arr(n - 2);
    bool found = false;
    for (auto &i : arr) cin >> i;
    for (int i = 0; i < n - 3; i++) {
      if (i == 0) {
        cout << arr[i][0];
      }
      if (arr[i][1] == arr[i + 1][0]) {
        cout << arr[i][1];
      } else {
        cout << arr[i][1] << arr[i + 1][0];
        found = true;
        // cout << "true\n";
      }
    }
    if (n == 3) {
      cout << "b" << arr[0] << '\n';
    } else {
      if (!found) {
        cout << arr[n - 3][1];
        cout << "b" << '\n';
      } else
        cout << arr[n - 3][1] << '\n';
    }
  }
  return 0;
}