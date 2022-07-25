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

// const ll MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  ll tc;
  cin >> tc;
  while (tc--) {
    ll x1, p1, x2, p2;
    cin >> x1 >> p1;
    cin >> x2 >> p2;
    if (p1 > p2) {
      p1 = p1 - p2;
      p2 = 0;
    } else if (p2 > p1) {
      p2 = p2 - p1;
      p1 = 0;
    } else {
      p1 = 0, p2 = 0;
    }

    if ((x1 * pow(10, p1)) == (x2 * pow(10, p2)))
      cout << "=\n";
    else if ((x1 * pow(10, p1)) > (x2 * pow(10, p2)))
      cout << ">\n";
    else
      cout << "<\n";
  }
  return 0;
}