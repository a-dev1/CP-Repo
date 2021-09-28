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
    ll n;
    cin >> n;
    ll s = 6, m = 8, l = 10;

    if (n % s == 0) {
      cout << n / s * 15 << "\n";
      continue;
    }
    if (n % m == 0) {
      cout << n / m * 20 << "\n";
      continue;
    }
    if (n % l == 0) {
      cout << n / l * 25 << "\n";
      continue;
    }

    ll temp = n, ans = 0;

    while (temp > 0) {
      if (temp >= l) {
        ans += (temp / l) * 25;
        temp = temp - (temp / l);
      } else if (temp >= m) {
        ans += temp / m * 20;
        temp = temp - (temp / m);
      } else {
        if (temp >= s) {
          ans += temp / s * 15;
          temp = temp - (temp / s);
        } else {
          // cout << "Here";
          ans += 15;
          temp = 0;
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}