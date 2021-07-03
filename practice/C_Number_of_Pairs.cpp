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

const ll MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  ll tc;
  cin >> tc;
  while (tc--) {
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll count = 0;
    for (ll i = 0; i < n; i++) {
      auto itr1 = upper_bound(arr.begin() + i + 1, arr.end(), r - arr[i]);
      auto itr2 = lower_bound(arr.begin() + i + 1, arr.end(), l - arr[i]);
      count += (itr1 - itr2);
    }
    cout << count << endl;
  }
  return 0;
}