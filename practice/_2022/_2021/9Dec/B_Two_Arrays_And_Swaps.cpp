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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> arr2(n);
    for (auto &i : arr) cin >> i;
    for (auto &i : arr2) cin >> i;

    sort(arr.begin(), arr.end());
    sort(arr2.begin(), arr2.end());

    int maxin1 = *max_element(arr.begin(), arr.end());
    int maxin2 = *max_element(arr2.begin(), arr2.end());
    // auto maxin2 = *max_element(arr2.begin(), arr2.end());
    // cout << "maxin2:" << maxin2 << endl;
    int sum = 0;
    if (maxin1 > maxin2) {
      for (int i = 0; i < n; i++) {
        sum += arr[i];
      }
      cout << sum << '\n';
    } else {
      int sum = 0, j = n - 1;
      // cout << "k:" << k << endl;
      while (arr2[j] > maxin1 && k > 0) {
        sum += arr2[j];
        j--;
        k--;
      }


      for (int i = n - 1; i < n; i++) {
        sum += arr[i];
      }
      cout << sum << endl;
    }
  }
  return 0;
}