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
    int n, e = 0, o = 0;
    cin >> n;

    for (int i = 0; i < n * 2; i++) {
      int temp;
      cin >> temp;
      if (temp % 2 == 0)
        e++;
      else
        o++;
    }

    if (o == n  && e == n ) {
      cout << "Yes\n";
    } else
      cout << "No\n";
  }
  return 0;
}