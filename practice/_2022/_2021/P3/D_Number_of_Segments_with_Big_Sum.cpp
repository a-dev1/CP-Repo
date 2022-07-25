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
  std::vector<ll> v(n);
  for (ll i = 0; i < n; i++) cin >> v[i];

  ll sum = 0;
  ll ans = 0;
  // ans = v[0] >= s;
  ans = 0;
  ll j = 0;
  for (ll i = 0; i < n; i++) {
    sum += v[i];
    while (sum >= s) {
      ans += (n - i);
      sum -= v[j++];
    }
  }
  cout << ans << "\n";
  return 0;
}