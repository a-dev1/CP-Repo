#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#define int long long
using namespace std;

signed main() {
  int t, sx, sy, ex, ey;
  cin >> t >> sx >> sy >> ex >> ey;
  string s;
  cin >> s;
  if (sx == ex and ex == ey) {
    cout << 1 << "\n";
    return 0;
  }

  int i;
  int cnt = 0;
  for (i = 0; i < s.length(); ++i) {
    if (sx == ex and sy == ey) {
      // cout << "hello\n";
      break;
    }
    if (sx > ex and s[i] == 'W') {
      sx--;
    } else if (sx < ex and s[i] == 'E') {
      sx++;
    }

    else if (sy > ey and s[i] == 'S') {
      sy--;
    } else if (sy < ey and s[i] == 'N') {
      sy++;
    }
    cnt++;
  }
  // cout << cnt <<"\n";
  if (cnt = t)
    cout << "-1\n";
  else
    cout << cnt << "\n";
}