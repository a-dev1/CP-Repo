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

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int c, m, x, ans = 0;
    cin >> c >> m >> x;
    int minCM = min(c, m);
    if (minCM <= x) {
      ans += minCM;
      c = c - minCM;
      m = m - minCM;
      x = x - minCM;
    } else {
      ans += x;
      c = c - x;
      m = m - x;
      x = 0;
    }

    if (x == 0) {
      int maxPossible = min((c + m) / 3, min(c, m));
      while (maxPossible) {
        if (maxPossible <= ((c + m) - (2 * maxPossible))) {
          ans += maxPossible;
          break;
        }
        maxPossible--;
      }
    }

    cout << ans << "\n";
  }
  return 0;
}