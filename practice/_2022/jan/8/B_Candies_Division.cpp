#include <bits/stdc++.h>

using namespace std;

#define int long long

///////////////////////////////////////////////////////////////

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    ans += n / k;
    int remaning = n - (k * ans);
    int extra = 0;
    if (n % k != 0) extra = k / 2;
    if(extra > remaning) {
      extra = remaning;
    }
    cout << (ans * k) + extra << '\n';
  }
  return 0;
}

///////////////////////////////////////////////////////////////