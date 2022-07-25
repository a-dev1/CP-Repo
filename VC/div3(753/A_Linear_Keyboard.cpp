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

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    string layout, str;
    map<char, int> m;

    int ans = 0;
    cin >> layout;
    cin >> str;

    for (int i = 0; i < 26; i++) {
      m[layout[i]] = i + 1;
    }

    for (int i = 0; i < str.length() - 1; i++) {
      ans += abs(m[str[i + 1]] - m[str[i]]);
    }

    cout << ans << "\n";
  }
  return 0;
}