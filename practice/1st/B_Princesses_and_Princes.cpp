#include <bits/stdc++.h>
#define int long long
using namespace std;
#define MOD 1000000007

void solve() {
  int n;
  cin >> n;
  map<int, int> prince;
  map<int, int> mp;  // visited

  int cnt = 0;
  std::vector<int> ans;
  int prev = 0;
  for (int i = 1; i <= n; i++) {
    int k;
    cin >> k;
    bool ok = false;
    for (int f = 0; f < k; f++) {
      int x;
      cin >> x;
      if (mp[x] == 0 and ok == false) {
        mp[x] = 1;
        prince[i] = 1;
        ok = true;
        prev++;
      }
    }
  }
  int x = 0, y = 0;
  bool ok = false;
  bool flag = false;
  for (int i = 1; i <= n; i++) {
    if (prince[i] == 0) {
      x = i;
      ok = true;
    }
    if (mp[i] == 0) {
      y = i;
      flag = true;
    }

    if (ok and flag) {
      break;
    }
  }
  if (x == 0 and y == 0) {
    cout << "OPTIMAL\n";
    return;
  }
  cout << "IMPROVE\n";
  cout << x << " " << y << "\n";
}

signed main() {
  int t;
  cin >> t;
  while (t--) solve();
}