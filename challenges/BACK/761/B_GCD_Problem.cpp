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

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    bool found = false;
    for (int j = 1; j * j < n; j++) {
      int var1 = n - j, var2 = j;
      for (int i = 0; i * i < n && var1 > 0 && var2 < n; i++) {
        if (__gcd(var1, var2) == j) {
          int gcd = __gcd(var1, var2);
          if (gcd != var1 && gcd != var2 && (gcd + var1 + var2) == n) {
            cout << var1 << " " << var2 << " " << gcd << '\n';
            found = true;
            break;
          }
        }
        var1--;
        var2++;
      }
      if (found) break;
    }
  }
  return 0;
}