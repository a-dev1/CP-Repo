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
  int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
      if (i == 0) {
        cin >> arr[i];
        continue;
      }
      cin >> arr[i];
      for (int k = 0; k < m; k++) {
        arr[0][k] = (arr[0][k] ^ arr[i][k]);
      }
    }
    // cout << "a: " << arr[0] << endl;
    int ans = 0;
    for (char c : arr[0]) {
      if (c == '1') ans++;
    }

    if (ans % 2 == 0)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;

    // cout << "ans:" << ans << endl;
    // if (ans == '0')
    //   cout << "NO" << endl;
    // else
    //   cout << "YES" << endl;
  }
  return 0;
}