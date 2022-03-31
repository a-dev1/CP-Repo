#include <bits/stdc++.h>

using i64 = long long;
using namespace std;

constexpr int inf = 1E9;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  int ans = min(abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]),
                abs(a[0] - b[n - 1]) + abs(a[n - 1] - b[0]));

  int a0 = inf, b0 = inf, a1 = inf, b1 = inf;
  for (int i = 0; i < n; i++) {
    a0 = min(a0, abs(a[0] - b[i]));
    a1 = min(a1, abs(a[n - 1] - b[i]));
    b0 = min(b0, abs(b[0] - a[i]));
    b1 = min(b1, abs(b[n - 1] - a[i]));
  }

  ans = min({1LL * ans, 1LL * abs(a[0] - b[0]) + a1 + b1,
             1LL * abs(a[0] - b[n - 1]) + a1 + b0,
             1LL * abs(a[n - 1] - b[0]) + a0 + b1,
             1LL * abs(a[n - 1] - b[n - 1]) + a0 + b0});

  ans = min(1LL * ans, 1LL * a0 + a1 + b0 + b1);

  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}