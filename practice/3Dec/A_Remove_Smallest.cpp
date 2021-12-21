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
    for (auto &i : arr) cin >> i;

    sort(arr.begin(), arr.end());
    bool isFind = false;

    for (int i = 1; i < n; i++) {
      // cout << "arr[i-1]:" << arr[i - 1] << endl;
      if (abs(arr[i - 1] - arr[i]) > 1) {
        cout << "NO\n";
        isFind = true;
        break;
      }
    }
    if (!isFind) cout << "YES\n";
  }
  return 0;
}