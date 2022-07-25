#include <bits/stdc++.h>

using namespace std;

#define int long long

#ifndef ONLINE_JUDGE
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define debug(x)
#endif

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

signed main() {
  int n, q;
  cin >> n >> q;
  for (int i = 0; i < q; i++) {
    int r, c;
    cin >> r >> c;
    // debug(r)
    // debug(c)
    if (r % 2 != 0 && c % 2 != 0) {
      int extra = ((r - 1) / 2);
      int ans = (r - 1) * (n / 2) + ((c / 2) + 1);
      cout << (n % 2 == 0 ? ans : ans + extra) << '\n';
    } else if (r % 2 == 0 && c % 2 == 0) {
      int extra = ((r + 1) / 2);
      int ans = (r - 1) * (n / 2) + (c / 2);
      cout << (n % 2 == 0 ? ans : ans + extra) << '\n';
    } else if (c % 2 == 0 && r % 2 != 0) {
      int start = ((n * n) / 2);
      if (n % 2 != 0) start++;
      int extra = ((r - 1) / 2);
      int ans = start + ((r - 1) * (n / 2)) + (c / 2);
      cout << (n % 2 == 0 ? ans : ans + extra) << '\n';
    } else {
      int start = ((n * n) / 2);
      if (n % 2 != 0) start++;
      int extra = ((r - 1) / 2);
      int ans = start + (r - 1) * (n / 2) + ((c / 2) + 1);
      cout << (n % 2 == 0 ? ans : ans + extra) << '\n';
    }
  }
  return 0;
}