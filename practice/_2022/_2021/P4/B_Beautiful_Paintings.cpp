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
  int n;
  cin >> n;
  vector<int> arr(n);
  map<int, int> m;
  for (auto &i : arr) {
    cin >> i;
    m[i]++;
  }

  int ans = 0, small = 10000;
  bool possible = true;

  while (possible) {
    int howmany = 0;
    small = 10000;
    for (auto it = m.begin(); it != m.end(); it++) {
      if (it->second != 0) {
        howmany++;
        if (it->second < small) small = it->second;
      }
    }

    if (small != 10000) ans += (howmany - 1) * small;

    bool end = true;
    for (auto &it : m) {
      if (it.second > 0) {
        end = false;
        it.second -= small;
        // cout << it.second << endl;
      }
    }

    if (end) break;
  }
  cout << ans << endl;
  return 0;
}