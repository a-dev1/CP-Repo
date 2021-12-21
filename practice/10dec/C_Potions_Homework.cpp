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
#define MOD 10007

signed main() {
  int n, ans = 0;
  cin >> n;
  vector<int> arr(n);
  for (auto &i : arr) cin >> i;
  sort(arr.begin(), arr.end());
  int l = 0, r = n - 1;
  while (r > l) {
    ans += 2 * ((arr[l]%MOD) * (arr[r]%MOD))%MOD;
    r--;
    l++;
  }
  if (n % 2 != 0) {
    ans += ((arr[(n / 2)])%MOD * (arr[(n / 2)])%MOD)%MOD;
    // cout << "IN \n";
  }
  cout << ans%MOD << '\n';
  return 0;
}