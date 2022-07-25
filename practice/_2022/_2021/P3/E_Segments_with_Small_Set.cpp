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
  ll n, t;
  cin >> n >> t;
  vector<ll> arr(n);
  map<ll, ll> m;
  for (auto &i : arr) cin >> i;

  ll l = 0, ans = 0;
  for (ll i = 0; i < n; i++) {
    m[arr[i]]++;
    while (m.size() > t && l < n) {
      if (m[arr[l]] == 1)
        m.erase(arr[l]);
      else if (m[arr[l]] > 1)
        m[arr[l]]--;
      l++;
    }
    ans += (i - l + 1);
  }
  cout << ans << '\n';
  return 0;
}