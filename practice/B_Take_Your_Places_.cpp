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
    vector<int> v(n);
    for (auto &i : v) {
      cin >> i;
    }

    int oddCount = 0, evenCount = 0;
    for (auto &i : v) {
      i = i % 2;
      if (i == 1)
        oddCount++;
      else
        evenCount++;
    }
    int steps = 0;
    int diff = abs(oddCount - evenCount);
    if (diff > 1) {
      cout << -1 << "\n";
    } else {
      for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1]) {
          for (int k = i + 1; k < n; k++) {
            if (v[k] != v[i]) {
              steps = k - i;
              
              break;
            }
          }
        }
      }
    }
  }
  return 0;
}