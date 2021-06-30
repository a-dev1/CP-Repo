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
  ll n, x, k;
  cin >> n >> x >> k;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
  }

  ll count = 0;
  sort(arr.begin(), arr.end());

  for (ll i = 0; i < n - 1; i++) {
    if (arr[i + 1] - arr[i] > k) {
      if (x) {
        if ((arr[i + 1] - arr[i]) / 2 <= k) {
          // cout << "It works" << endl;
          x--;
        } else {
          count++;
        }
      } else {
        count++;
      }
    }
  }

  cout << count;

  return 0;
}