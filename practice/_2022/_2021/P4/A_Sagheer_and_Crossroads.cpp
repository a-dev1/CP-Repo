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
  int l, s, r, p, w1 = 0, w2 = 0, w3 = 0, w4 = 0;
  vector<vector<int>> lanes(4, vector<int>(4));

  bool jaraKoi = false;

  for (int i = 0; i < 4; i++) {
    int lt, st, rt, pt;
    cin >> lt >> st >> rt >> pt;

    if (pt) jaraKoi = true;

    lanes[i][0] = lt;
    lanes[i][1] = st;
    lanes[i][2] = rt;
    lanes[i][3] = pt;
  }

  if (!jaraKoi) {
    cout << "NO\n";
    return 0;
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
    }
  }

  return 0;
}