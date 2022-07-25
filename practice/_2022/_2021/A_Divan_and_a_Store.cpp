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
    int n, l, r, k, ans = 0;
    cin >> n >> l >> r >> k;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
    sort(arr.begin(), arr.end());
    int temp = 0;
    for (auto i : arr) {
      if (i >= l && i <= r && (temp + i) <= k) {
        temp += i;
        ans++;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}