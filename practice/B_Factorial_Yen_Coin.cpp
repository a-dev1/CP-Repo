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
  int n;
  cin >> n;
  int temp = n, ans = 0;
  vector<int> arr = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
  for (int i = 9; i >= 0; i--) {
    if (arr[i] <= n) {
      // cout << "arr[i]:" << arr[i] << endl;
      ans += n / arr[i];
      n = n % arr[i];
    }
  }
  // cout << "ans:" << ans << endl;
  // cout << "n:" << n << endl;
  cout << ans;
  return 0;
}