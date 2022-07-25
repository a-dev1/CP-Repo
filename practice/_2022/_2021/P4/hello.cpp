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
    int d;
    cin >> d;

    int temp = (d + 1) + d;
    int temp2 = temp * (d + 1);
    cout << (temp * temp2) / __gcd(temp, temp2) << '\n';
  }
  return 0;
}
