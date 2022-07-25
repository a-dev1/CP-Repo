#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    vector<int> arr(3);
    for (int i = 0; i < 3; i++) cin >> arr[i];
    sort(all(arr));

    if (arr[0] + arr[1] == arr[2]) {
      cout << "YES\n";
      continue;
    }

    if (arr[0] == arr[1] && arr[2] % 2 == 0) {
      cout << "YES\n";
      continue;
    } else if (arr[1] == arr[2] && arr[0] % 2 == 0) {
      cout << "YES\n";
      continue;
    } else if (arr[0] == arr[2] && arr[1] % 2 == 0) {
      cout << "YES\n";
      continue;
    }

    cout << "NO\n";
  }
  return 0;
}