#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define int long long
using namespace std;
#define MOD 1000000007

void solve() {
  int k, n, m;
  cin >> k >> n >> m;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  int h = v.size();
  vector<int> ans(h);
  for (auto x : v) {
    if (x == 0) continue;
    int need = x - k;
    cout << need << " ";
    if (need <= 0) need = 0;
    bool flag = false;
    int cnt = 0;
    for (int i = 0; i < h; i++) {
      if (cnt == need and ans[i] == 0) {
        cout << "cnt " << cnt << "\n";
        ans[i] = x;
        flag = true;
        break;
      } else if (ans[i] == 0)
        ++cnt;
    }

    if (flag == false) {
      cout << "-1\n";
      return;
    }
  }

  cout << "\n";
  for (auto x : ans) cout << x << " ";
  cout << "\n";
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}