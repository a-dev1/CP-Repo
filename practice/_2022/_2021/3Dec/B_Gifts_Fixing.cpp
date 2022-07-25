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
    ll n, min1 = 100000000000, min2 = 100000000000;
    cin >> n;
    vector<ll> arr1(n);
    vector<ll> arr2(n);
    for (auto &i : arr1) {
      cin >> i;
      if (i < min1) min1 = i;
    }
    // cout << "arr2\n";
    // for (auto i : arr2) cout << "i:" << i << endl;

    for (auto &i : arr2) {
      cin >> i;
      if (i < min2) min2 = i;
    }

    // cout << "min1:" << min1 << endl;
    // cout << "min2:" << min2 << endl;
    for (auto &i : arr1) {
      i = i - min1;
    }
    // cout << "arr1: \n";
    // for (auto i : arr1) cout << "i:" << i << endl;
    for (auto &i : arr2) {
      i = i - min2;
    }
    // cout << "arr2: \n";
    // for (auto i : arr2) cout << "i:" << i << endl;

    ll ans = 0;
    for (int i = 0; i < n; i++) {
      if (arr1[i] == 0 || arr2[i] == 0) {
        ans += arr1[i] + arr2[i];
        // cout << "ans(fomula): " << arr1[i] + arr2[i] << "\n";
        continue;
      }
      ans += min(arr1[i], arr2[i]) + abs(arr1[i] - arr2[i]);
      // cout << "ans(formula):" << min(arr1[i], arr2[i]) + abs(arr1[i] -
      // arr2[i])
      // << endl;
    }
    cout << ans << endl;
  }
  return 0;
}