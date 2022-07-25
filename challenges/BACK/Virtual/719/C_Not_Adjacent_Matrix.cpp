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
    if (n == 2) {
      cout << -1 << "\n";
      continue;
    }
    int count = 0;
    for (int i = 1; i <= n * n; i += 2) {
      if (count == n) {
        cout << "\n";
        count = 0;
      }
      cout << i << " ";
      count++;
    }
    for (int i = 2; i <= n * n; i += 2) {
      if (count == n) {
        cout << "\n";
        count = 0;
      }
      cout << i << " ";
      count++;
    }
    cout << "\n";
  }
  return 0;
}