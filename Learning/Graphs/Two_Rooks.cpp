#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

signed main() {
    int tc;
    cin >> tc;
    while (tc--) {

      int x1, y1, x2, y2;
      cin >> x1 >> y1 >> x2 >> y2;


      if(abs(x1-x2) == 0 || abs(y1-y2) == 0) {
        cout << "YES\n";
      }
      else 
        cout << "NO\n";
    }
    return 0;
}