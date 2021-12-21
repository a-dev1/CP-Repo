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
    int a, b, k;
    cin >> a >> b >> k;
    if (k % 2 == 0) {
      cout << (a * k / 2) - (b * k / 2) << '\n';
    } else {
      cout << (a * ((k / 2) + 1)) - (b * (k / 2)) << '\n';
    }
  }
  return 0;
}