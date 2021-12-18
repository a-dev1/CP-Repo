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
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &i : a) cin >> i;

  int m = 0, ans = 0;

  for (int i = n - 1; i >= 0; --i) {
    if (m <= 0) {
      ++ans;
    }

    m = max(m - 1, a[i]);
  }

  cout << ans << '\n';
  return 0;
}