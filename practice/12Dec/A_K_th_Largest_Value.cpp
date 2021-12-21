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

void solve() {
  int n, t;
  cin >> n >> t;
  std::vector<int> v(n);
  int ones = 0;
  int zeros = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] == 1)
      ones++;
    else
      zeros++;
  }

  while (t--) {
    int x, y;
    cin >> x >> y;
    if (x == 1) {
      if (v[y - 1] == 0) {
        v[y - 1] = 1;
        ones++;
        zeros--;
      } else {
        v[y - 1] = 0;
        zeros++;
        ones--;
      }
    } else {
      if (ones >= y) {
        cout << 1 << "\n";
      } else
        cout << 0 << "\n";
    }
  }
}
signed main() { solve(); }