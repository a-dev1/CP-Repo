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
    int n, ans = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n - 1; i++) {
      if (str[i] == str[i + 1]) {
        ans++;
      }
    }
    cout << ceil(ans / 2.0) << '\n';
  }
  return 0;
}