#include <algorithm>
#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const ll MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  ll tc;
  cin >> tc;
  while (tc--) {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll idx1 = -1, idx2 = -1, minDiff = INT64_MAX;
    for (ll i = 0; i < n - 1; i++) {
      if (arr[i] == arr[i + 1]) {
        idx1 = i;
        idx2 = i + 1;
        break;
      } else {
        if (minDiff > abs(arr[i] - arr[i + 1])) {
          minDiff = abs(arr[i] - arr[i + 1]);
          idx1 = i;
          idx2 = i + 1;
        }
      }
    }
    if (arr.size() == 2) {
      for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
      }
      cout << endl;
    } else {
      // cout << arr[idx1] << " ";
      for (int i = idx2; i < n; i++) {
        // if (i != idx1 && i != idx2)
        cout << arr[i] << " ";
      }

      for (int i = 0; i <= idx1; i++) {
        cout << arr[i] << " ";
      }
      cout << endl;
      // cout << arr[idx2] << " \n";
    }
  }
  return 0;
}