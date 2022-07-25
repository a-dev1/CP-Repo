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

// const double MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  double tc;
  cin >> tc;
  while (tc--) {
    double n;
    cin >> n;
    vector<double> arr(n);
    for (auto &i : arr) cin >> i;

    sort(arr.begin(), arr.end());

    double ans, sum1 = arr[n - 1], sum2 = 0;
    for (double i = 0; i < n - 1; i++) {
      sum2 += arr[i];
    }
    // cout << "sum2:" << sum2 << endl;

    cout << 1.0 * (sum2 / (n - 1)) + sum1 << "\n";
  }

  return 0;
}