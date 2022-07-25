#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  int n, min = -1, max = 1000000, ans = 0;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (i == 0) {
      max = arr[i];
      min = arr[i];
    } else {
      if (max < arr[i]) {
        // cout << "max change at arr[i]: " << arr[i] << endl;
        max = arr[i];
        ans++;
      }
      if (min > arr[i]) {
        // cout << "Min change at arr[i]: " << arr[i] << endl;
        min = arr[i];
        ans++;
      }
    }
  }
  // cout << "min:" << min << endl;
  // cout << "max:" << max << endl;
  cout << ans;

  return 0;
}