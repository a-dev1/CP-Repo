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
    int n, a, b;
    cin >> n >> a >> b;
    int half = n / 2;

    if (b > n || (a < b && (b <= half || a > half)) ||
        (a > b && (b > half || a <= half))) {
      cout << -1 << '\n';
      continue;
    }

    int temp = half, acopy = a, bcopy = b;

    while (temp) {
      if (acopy == b) {
        acopy++;
        continue;
      }
      cout << acopy << " ";
      acopy++;
      temp--;
    }

    temp = half;
    while (temp) {
      if (bcopy == a) {
        bcopy--;
        continue;
      }
      cout << bcopy << " ";
      bcopy--;
      temp--;
    }
    cout << '\n';
  }
  return 0;
}