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
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for (auto &i : arr) {
      cin >> i;
      sum += i;
    }
    if (sum % n != 0) {
      cout << -1 << "\n";
      continue;
    }
    int part = sum / n, ans = 0;
    for (auto i : arr) {
      if (i > part) ans++;
    }
    cout << ans << "\n";
  }
  return 0;
}
