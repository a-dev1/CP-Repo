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
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> arr(n);
    vector<int> arr2(m);
    for (auto &i : arr) cin >> i;
    for (auto &i : arr2) cin >> i;

    int i = 0, j = 0, repetition = 0;
    while (i < n && j < m) {
      repetition++;
      if (arr[i] == 0 && i < n) {
        cout << arr[i] << " ";
        k++;
        i++;
      }
      while (arr2[j] == 0 && j < m) {
        cout << arr2[j] << " ";
        j++;
        k++;
      }
      while (arr[i] <= k && i < n) {
        cout << arr[i] << " ";
        if (arr[i] == 0) k++;
        i++;
      }
      while (arr2[j] <= k && j < m) {
        cout << arr2[j] << " ";
        if (arr2[j] == 0) j++;
        j++;
      }
      // cout << "what happened\n";
      if (repetition > n + m) {
        cout << "repetition:" << repetition << endl;
        cout << "arr[i]:" << arr[i] << endl;
        cout << "arr2[j]:" << arr2[j] << endl;
        cout << -1 << '\n';
        break;
      }
    }
  }
  return 0;
}