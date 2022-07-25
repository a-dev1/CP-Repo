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
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    int odd = 0, even = 0;
    for (int i = 1; i <= n; i++) {
      cin >> arr[i];
      if (arr[i] % 2)
        odd++;
      else
        even++;
    }
    if (odd % 2 == 0) {
      cout << "YES\n";
      continue;
    }
    sort(arr.begin(), arr.end());
    bool isans = false;
    for (int i = 1; i < n; i++) {
      if (arr[i + 1] - arr[i] == 1) {
        odd--;
        even--;
        if (odd % 2 == 0 && even % 2 == 0) isans = true;
      }
    }
    if (isans)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}