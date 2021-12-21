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
// #define ll long long
#define int long long
const int MAX_N = 1e5 + 1;

signed main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &i : arr) cin >> i;

  int l = 0, ans = 0;
  for (int i = 0; i < n - 2;) {
    while ((i < n - 2) && arr[i] + arr[i + 1] != arr[i + 2] && l <= i) l = ++i;

    if (i == n - 3 && arr[i] + arr[i + 1] == arr[i + 2]) i = n - 1;

    if (i < n - 2 && arr[i] + arr[i + 1] == arr[i + 2])
      ans = max(ans, (i - l + 3));

    ans = max(ans, (i - l + 1));
    i++;
  }
  if (arr.size() > 1 && ans <= 1)
    cout << 2 << '\n';
  else if (arr.size() == 1)
    cout << 1 << '\n';
  else
    cout << ans << '\n';
  return 0;
}