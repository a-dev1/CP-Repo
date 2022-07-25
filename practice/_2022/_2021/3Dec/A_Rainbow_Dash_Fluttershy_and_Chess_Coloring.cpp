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
    int n;
    cin >> n;
    if (n == 1) {
      cout << 1 << '\n';
      continue;
    }
    if (n == 2 || n == 3) {
      cout << 2 << '\n';
      continue;
    }
    if (n == 4) {
      cout << 3 << '\n';
      continue;
    }
    if (n > 4) {
      cout << n - 2 << '\n';
    }
  }
  return 0;
}