#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int w, h;
    cin >> w >> h;
    int k;
    cin >> k;
    int x_b, x_t, y_l, y_r;
    int first, last;
    for (int i = 0; i < k; i++) {
      int temp;
      cin >> temp;
      if (i == 0)
        first = temp;
      else if (i == k - 1)
        last = temp;
    }
    x_b = last - first;

    first, last;
    cin >> k;

    for (int i = 0; i < k; i++) {
      int temp;
      cin >> temp;
      if (i == 0)
        first = temp;
      else if (i == k - 1)
        last = temp;
    }
    x_t = last - first;

    first, last;
    cin >> k;

    for (int i = 0; i < k; i++) {
      int temp;
      cin >> temp;
      if (i == 0)
        first = temp;
      else if (i == k - 1)
        last = temp;
    }
    y_l = last - first;

    first, last;
    cin >> k;

    for (int i = 0; i < k; i++) {
      int temp;
      cin >> temp;
      if (i == 0)
        first = temp;
      else if (i == k - 1)
        last = temp;
    }
    y_r = last - first;

    cout << max(max((x_b * h), (x_t * h)), max((y_l * w), (y_r)*w)) << '\n';
  }
  return 0;
}