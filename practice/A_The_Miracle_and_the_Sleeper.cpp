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
    int l, r, diff;
    cin >> l >> r;
    diff = abs(r - l);
    if (r / 2 >= l) {
      cout << r % ((r / 2) + 1) << "\n";
    } else {
      cout << r % l << "\n";
    }
  }
  return 0;
}