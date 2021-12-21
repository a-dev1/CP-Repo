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
    int x, y, t, v;
    cin >> x >> y;
    for (int i = 0; i <= 50; i++) {
      cout << "running";
      // t = (x+y) / v;
      for (int j = 0; j <= 50; j++) {
        cout << "inside";
        int temp = i;
        if ((x + y) / j == temp) {
          cout << "deep inside";
          cout << temp << " " << j << "\n";
          break;
        }
      }
    }
  }
  return 0;
}