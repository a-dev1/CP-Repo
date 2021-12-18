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
  int n, m, minimum = 0;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  minimum = min(n, m);

  if (s.length() - 1 > t.length()) {
    cout << "NOo\n";
    return 0;
  }

  bool ans = true;
  int prev = 0;

  for (int i = 0; s[i] != '*'; i++) {
    if (s[i] != t[i]) {
      cout << "NO\n";
    }
  }

  reverse(s.begin(), s.end());
  reverse(t.begin(), t.end());

  for (int i = 0; s[i] != '*'; i++) {
    if (s[i] != t[i]) {
    }
  }

  return 0;
}