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
    ll n, a, b;
    cin >> n >> a >> b;
    // Edge case
    if (a == 1) {
      if ((n - 1) % b == 0) {
        cout << "Yes\n";
      } else {
        cout << "No\n";
      }
    } else {
      // a^x + yb == n ? "Yes" : "No";
      ll count = 0;
      bool temp = false;
      ll t = 1;
      while (t <= n) {
        // cout << "t:" << t << endl;
        if ((n - t) % b == 0) {
          cout << "Yes\n";
          temp = true;
          break;
        }
        t = t * a;
      }
      if (!temp) cout << "No\n";
    }
  }
  return 0;
}