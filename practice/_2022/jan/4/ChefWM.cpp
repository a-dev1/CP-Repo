#include <bits/stdc++.h>
#define int long long
// #define fastio ios::sync_with_stdio(0);cin.tie(0)

using namespace std;

signed main() {
  // fastio;
  int t;
  cin >> t;
  while (t--) {
    int width, height;
    cin >> width >> height;
    int x = height;

    map<int, int> maptile;

    while (x % 2 == 0) {
      maptile[2]++;
      x = x / 2;
    }

    for (int i = 3; i <= sqrt(x); i = i + 2) {
      while (x % i == 0) {
        maptile[i]++;
        x = x / i;
      }
    }

    if (x > 2) {
      maptile[x]++;
    }

    int no = maptile.size();

    // cout << "no:" << no << endl;

    if (height == 1) {
      cout << 0 << '\n';
      continue;
    }
    if (width % no == 0) {
      cout << no << '\n';
      continue;
    } else {
      for (int i = no; i > 0; i--) {
        if (width % i == 0) {
          cout << i << '\n';
          break;
        }
      }
    }
  }
  return 0;
}