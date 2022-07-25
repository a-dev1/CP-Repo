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

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;

    int bag = m;
    bool ans = true;
    for (int i = 0; i < n - 1; i++) {
      int blockDiff = abs(arr[i] - arr[i + 1]);
      cout << "bag:" << bag << endl;
      cout << "blockDiff:" << blockDiff << endl;
      if (arr[i] > arr[i + 1]) {
        bag += (blockDiff);
      } else if (arr[i + 1] > arr[i]) {
        if (blockDiff <= k) {
          continue;
        }
        cout << "(blockDiff-k):" << (blockDiff - k) << endl;
        if (bag < (blockDiff - k)) {
          cout << "NO\n";
          ans = false;
          break;
        }
        bag -= (blockDiff - k);
      } else {
        if (k != 0) bag += arr[i];
      }
    }
    if (ans) {
      cout << "YES\n";
    }
  }
  return 0;
}