#include <bits/stdc++.h>
#define int long long
#define fastio             \
  ios::sync_with_stdio(0); \
  cin.tie(0)
using namespace std;

signed main() {
  // fastio;
  int t;
  cin >> t;
  while (t--) {
    int w, b;
    cin >> b >> w;
    if ((w == 0 && b > 1) || (b == 0 && w > 1)) {
      cout << "-1\n";
      continue;
    }

    if (b < w) {
      for (int i = 0; i < b; i++) {
        cout << "B";
      }
      for (int i = 0; i < w; i++) {
        cout << "W";
      }
    } else {
      for (int i = 0; i < w; i++) {
        cout << "W";
      }
      for (int i = 0; i < b; i++) {
        cout << "B";
      }
    }

    cout << "\n";
    int a = 1, c = 2;
    for (int i = 1; i < w + b; i++) {
      cout << a << " " << c++ << "\n";
    }
  }
  return 0;
}