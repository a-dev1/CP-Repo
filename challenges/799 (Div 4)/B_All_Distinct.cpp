#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;

  map<int, int> myMap;
  for (int i = 0; i < n; i++) {
    int tt;
    cin >> tt;
    myMap[tt]++;
  }

  if (n == myMap.size()) {
    cout << n << "\n";
  } else {
    if ((n - myMap.size()) % 2 != 0) {
      cout << myMap.size() - 1 << '\n';
    } else
      cout << myMap.size() << "\n";
  }
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
