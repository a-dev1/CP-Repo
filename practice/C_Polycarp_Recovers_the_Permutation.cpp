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
    vector<int> arr(n);
    for (auto &i : arr) {
      cin >> i;
    }

    if (arr[0] == n || arr[n - 1] == n) {
      for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
      }
      cout << '\n';
    } else {
      cout << -1 << "\n";
    }
  }
  return 0;
}