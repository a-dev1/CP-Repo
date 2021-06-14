#include <algorithm>
#include <iostream>
#include <vector>

#define int long long
using namespace std;

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int a[n + 1];
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
      sum += a[i];
    }

    sort(a + 1, a + n + 1);
    if (a[1] == a[n]) {
      cout << 0 << "\n";
      continue;
    }
    if (sum % n != 0) {
      cout << "-1\n";
      continue;
    } else {
      int x = sum / n;
      int k = 0;
      for (int i = 1; i <= n; i++) {
        if (a[i] > x) k++;
      }

      cout << k << "\n";
    }
  }
}