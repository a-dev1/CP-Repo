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
    int n;
    cin >> n;
    vector<int> arr(n);
    bool ans = true;
    for (auto &i : arr) cin >> i;

    int hillCnt = 0;
    for (int i = n - 1; i >= 0; i++) {
      if (arr[i] < arr[i - 1]) {
        if (hillCnt == 0) {
          continue;
        } else {
          cout << "arr[i]:" << arr[i] << endl;
          cout << i << '\n';
          ans = false;
          break;
        }
      } else if (arr[i] > arr[i - 1]) {
        hillCnt = 1;
        // cout << i << '\n';
      }
    }
    if (ans) cout << 0 << "\n";
    // else
    // cout << latest << endl;
  }
  return 0;
}