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
    string str;
    cin >> str;
    if ((str[str.length() - 1] - '0') % 2 == 0) {
      cout << 0 << '\n';
      continue;
    } else if ((str[0] - '0') % 2 == 0) {
      cout << 1 << '\n';
      continue;
    }

    bool found = false;
    for (int i = 0; i < str.length(); i++) {
      int num = str[i] - '0';
      if (num % 2 == 0) {
        found = true;

        break;
      }
    }
    found ? cout << 2 << '\n' : cout << -1 << '\n';
  }
  return 0;
}