#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

signed main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &i : arr) cin >> i;

  int possible = arr[n - 1], ans = possible;
  for (int i = n - 2; i >= 0; i--) {
    if (possible == 0) break;
    if (possible > arr[i]) {
      ans += arr[i];
      possible = arr[i];
    } else {
      ans += possible - 1;
      possible--;
    }
  }
  cout << ans << '\n';
  return 0;
}