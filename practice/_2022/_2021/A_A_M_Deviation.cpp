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
    int a1, a2, a3, der;
    cin >> a1 >> a2 >> a3;
    der = a1 + a3 - (a2 * 2);
    if (der < 0) {
      cout << abs(der) % 3 << "\n";
    } else if (der > 0) {
      if (der % 3 < 0)
        cout << der << "\n";
      else
        cout << der % 3 << "\n";
    } else
      cout << 0 << "\n";
  }
  return 0;
}