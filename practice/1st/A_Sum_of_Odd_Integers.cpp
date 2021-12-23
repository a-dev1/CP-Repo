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
    int n, k;
    cin >> n >> k;

    if ((k * k) <= n) {
      if (n % 2 == k % 2) {
        cout << "YES\n";
      } else {
        cout << "NO\n";
      }
      continue;
    }
    else 
      cout << "NO\n";
  }
  return 0;
}