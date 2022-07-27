#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
      cin >> a[i];
      --a[i];
    }
    vector<int> cnt(n);
    for (int i = 0; i < m; i++) {
      cnt[a[i]] += 1;
    }
    int low = 0, high = 2 * (m + n + 10);
    while (low < high) {
      int mid = (low + high) >> 1;
      long long extra = 0;
      long long need = 0;
      for (int i = 0; i < n; i++) {
        if (cnt[i] <= mid) {
          extra += (mid - cnt[i]) / 2;
        } else {
          need += cnt[i] - mid;
        }
      }
      if (extra >= need) {
        high = mid;
      } else {
        low = mid + 1;
      }
    }
    cout << low << '\n';
  }
  return 0;
}