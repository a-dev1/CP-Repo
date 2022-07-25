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
  int n, m, k;
  cin >> n >> m >> k;
  string ans = "";

  for (int i = 0; i < n - 1; i++) {
    ans += 'U';
  }
  for (int i = 0; i < m - 1; i++) {
    ans += 'L';
  }

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0)
      for (int j = 0; j < m - 1; j++) {
        ans += 'R';
      }
    else
      for (int j = 0; j < m - 1; j++) {
        ans += 'L';
      }

    if (i < n - 1) ans += 'D';
  }
  cout << ans.length() << '\n';
  cout << ans << '\n';

  return 0;
}