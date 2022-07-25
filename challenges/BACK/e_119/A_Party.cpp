#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

signed main() {
  int n;
  cin >> n;
  vector<int> arr(n + 1);
  for (int i = 1; i <= n; i++) {
    int temp;
    cin >> temp;
    arr[i] = temp;
  }

  int ans = -1;
  for (int i = 1; i <= n; i++) {
    if (arr[i] == -1) {
      continue;
    }
    int cnt = 1, j = arr[i];
    while (arr[j] != -1) {
      cnt++;
      j = arr[j];
    }

    ans = max(ans, cnt);
  }
  if (ans == -1)
    cout << 1 << '\n';
  else
    cout << ans + 1 << '\n';
  return 0;
}