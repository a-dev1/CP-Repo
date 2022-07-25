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
    int n;
    cin >> n;

    int count = 0;
    map<int, int> m;
    for (int i = 1; i <= 100000; i++) {
      int x = i * i;
      int y = i * i * i;
      if (i * i > n) break;
      if (m[x] == 0 and x <= n) count++;

      if (m[y] == 0 and y <= n) count++;

      m[x] = 1;
      m[y] = 1;
    }

    cout << count - 1 << "\n";
  }
  return 0;
}