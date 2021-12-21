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
  ll n, s;
  cin >> n >> s;
  vector<ll> arr(n);
  for (auto &i : arr) cin >> i;
  ll l = 0, r = 0, sum = 0, ans = 1000000;
  for (ll i = 0; i < n; i++) {
    sum += arr[i];

    while (sum >= s) {
      ans = min(ans, i - l + 1);
      sum -= arr[l];
      l++;
    }
  }
  if (ans == 1000000)
    cout << -1 << '\n';
  else
    cout << ans << '\n';
  return 0;
}