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

// const ll MAX_N = 1e5 + 1;
// const ll MOD = 1e9 + 7;
// const ll INF = 1e9;

int main() {
  ll tc;
  cin >> tc;
  while (tc--) {
    ll n, minN = 10000, maxN = -1, minIdx, maxIdx;
    cin >> n;
    vector<ll> arr(n+1);
    for (ll i = 1; i <= n; i++) {
      cin >> arr[i];
      if (minN > arr[i]) {
        minN = arr[i];
        minIdx = i;
      }
      if (maxN < arr[i]) {
        maxN = arr[i];
        maxIdx = i;
      }
    }

    ll minRIdx = (n - minIdx + 1);
    ll maxRIdx = (n - maxIdx + 1);

    ll temp1, temp2, temp3;
    temp1 = max(minIdx, maxIdx);
    temp2 = max(minRIdx, maxRIdx);
    temp3 = min(minIdx, maxIdx) + min(minRIdx, maxRIdx);
    cout << min(temp1, min(temp2, temp3)) << "\n";
    // cout << "time";
    // cout << "noone\n";
  }
  return 0;
}