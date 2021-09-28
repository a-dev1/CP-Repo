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
    int a, b, c, total, diff;
    cin >> a >> b >> c;
    diff = abs(a - b);
    total = max(a, b) + (a - b - 1);

    if (total % 2 != 0) total = total - 1;

    if ((c + diff <= total)) {
      cout << c + diff << "\n";
    } else if ((c - diff) > 0) {
      cout << c - diff << "\n";
      // continue;
    } else
      cout << -1 << "\n";
  }
  return 0;
}