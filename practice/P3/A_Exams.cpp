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
void solve() {
  int n, k;
  cin >> n >> k;

  int rem = k - (n * 2);
  if (k <= 0) {
    cout << n << "\n";
    return;
  }

  if (rem >= n) {
    cout << 0 << "\n";
    return;
  } else {
    cout << n - rem << "\n";
    return;
  }
}
int main() {
  // int n, k;
  // cin >> n >> k;
  // int ans = __gcd(n, k);
  // (ans == 1) ? cout << 0 : cout << ans;
  solve();
  return 0;
}