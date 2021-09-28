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
    ll n, ans = 0;
    cin >> n;
    map<ll, ll> m;

    for (ll i = 1; i <= n; i++) {
      ll num;
      cin >> num;
      num -= i;
      m[num]++;
    }

    for (auto i : m) {
      // if (i.second > 1) {
      ans += (i.second * (i.second - 1)) / 2;
      // }
    }
    cout << ans << "\n";
  }
  return 0;
}