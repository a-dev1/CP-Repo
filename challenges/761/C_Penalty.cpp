#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define int long long
signed main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int ans = 9;

    {
      int cnt0 = 0, cnt1 = 0;
      for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0)
          cnt0 += s[i] != '0';
        else
          cnt1 += s[i] == '1';
        if (cnt0 > cnt1 + ((10 - i) / 2)) ans = min(ans, i);
        if (cnt1 > cnt0 + ((9 - i) / 2)) ans = min(ans, i);
      }
    }

    {
      int cnt0 = 0, cnt1 = 0;
      for (int i = 0; i < 10; ++i) {
        if (i % 2 == 0)
          cnt0 += s[i] == '1';
        else
          cnt1 += s[i] != '0';
        if (cnt0 > cnt1 + ((10 - i) / 2)) ans = min(ans, i);
        if (cnt1 > cnt0 + ((9 - i) / 2)) ans = min(ans, i);
      }
    }

    cout << ans + 1 << '\n';
  }
}