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

const ll MAX_N = 1e18 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> arr(n);
  for (auto &i : arr) cin >> i;
  ll l = 0, minE = MAX_N, maxE = 0, diff, ans = 0;
  // minE = min(arr[0], arr[1]);
  // maxE = max(arr[0], arr[1]);
  // sum = (maxE - minE) <= k;
  // cout << "sum b:" << sum << endl;
  int minCnt = 0, maxCnt = 0;
  for (ll i = 0; i < n; i++) {
    minE = min(minE, arr[i]);
    maxE = max(maxE, arr[i]);
    if (minE == arr[i]) minCnt++;
    if (maxE == arr[i]) maxCnt++;
    cout << "minE:" << minE << endl;
    diff = abs(maxE - minE);
    cout << "maxE:" << maxE << endl;
    while (diff > k && n > l) {
      if (minE == arr[l]) {
        minCnt--;
        (minCnt == 0) ? minE = MAX_N : "";
      } else if (maxE == arr[l]) {
        maxCnt--;
        // maxE = 0;
        (maxCnt == 0) ? maxE = 0 : "";
      }

      l++;
    }
    ans += (i - l + 1);
    cout << "(i-l+1):" << (i - l + 1) << endl;
  }
  cout << "ans:" << ans << endl;
  return 0;
}