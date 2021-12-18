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

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, q;
    string str;
    cin >> n >> q;
    cin >> str;
    for (int i = 0; i < q; i++) {
      int l, r;
      bool ans = false;
      cin >> l >> r;
      for (int j = r; j < str.size(); j++) {
        if (str[r - 1] == str[j]) {
          cout << "YES\n";
          ans = true;
          break;
        }
      }
      if (ans) continue;
      for (int j = 0; j < l - 1; j++) {
        if (str[j] == str[l - 1]) {
          cout << "YES\n";
          ans = true;
          break;
        }
      }
      if (!ans) cout << "NO\n";
    }
  }
  return 0;
}