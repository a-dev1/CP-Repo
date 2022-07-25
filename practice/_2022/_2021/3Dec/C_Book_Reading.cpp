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
    ll n, m, sum = 0;
    vector<ll> arr(10);
    cin >> n >> m;
    for (ll i = 1; i <= 10; i++) {
      if (m * i < 10) {
        arr[i - 1] = m * i;
      } else {
        arr[i - 1] = (m * i) % 10;
      }
      sum += arr[i - 1];
    }
    if (m > n) {
      cout << 0 << '\n';
      continue;
    }
    if (m == n) {
      cout << m % 10 << '\n';
      continue;
    }
    if (n % (m * 10ll) == 0ll)
      cout << (sum) * (n / (m * 10ll)) << '\n';
    else {
      ll ans = (sum) * (n / (m * 10ll));
      ll extras = (n / (m * 10ll)) * (m * 10ll);
      int toBeAdded = (n - extras) / m;
      for (int i = 0; i < min(toBeAdded, 10); i++) {
        ans += arr[i];
      }
      cout << ans << endl;
    }
  }
  return 0;
}