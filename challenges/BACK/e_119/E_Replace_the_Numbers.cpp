#include <bits/stdc++.h>
#define int long long
using namespace std;
#define MOD 1000000007

void solve() {
  int t;
  cin >> t;
  vector<pair<int, pair<int, int>>> q;
  while (t--) {
    int x;
    cin >> x;
    if (x == 1) {
      int y;
      cin >> y;
      q.push_back({x, {y, y}});
    } else {
      int y, z;
      cin >> y >> z;
      q.push_back({x, {y, z}});
    }
  }

  map<int, int> mp;
  reverse(q.begin(), q.end());
  vector<int> ans;

  for (auto x : q) {
    if (x.first == 1) {
      if (mp[x.second.first] == 0) {
        ans.push_back(x.second.first);
        continue;
      } else {
        ans.push_back(mp[x.second.first]);
      }
    } else {
      if (mp[x.second.first] != 0) continue;
      mp[x.second.first] = x.second.second;
    }
  }

  for (auto x : mp) {
    cout << x.first << " " << x.second << "\n";
  }
  reverse(ans.begin(), ans.end());

  for (auto x : ans) {
    cout << x << " ";
  }

  cout << "\n";
}

signed main() { solve(); }