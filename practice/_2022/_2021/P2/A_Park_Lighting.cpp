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

const ll MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  ll tc;
  cin >> tc;
  while (tc--) {
    ll row, c;
    cin >> row >> c;
    if (c % 2 == 0) {
      cout << row * (c / 2) << '\n';
    } else {
      ll ans = 0;
      if (row % 2 == 0) {
        ans += row / 2;
      } else
        ans += row / 2 + 1;
      cout << (row * (c / 2)) + ans << '\n';
    }
  }
  return 0;
}