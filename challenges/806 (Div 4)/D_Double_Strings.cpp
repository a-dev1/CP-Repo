#include <bits/stdc++.h>
using namespace std;

void getSolved() {
  int n;
  cin >> n;
  vector<string> v(n);
  for (auto &x : v) cin >> x;

  map<string, int> mp;
  for (auto x : v) mp[x]++;
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    if (v[i].length() == 1) {
      ans[i] = 0;
      continue;
    }
    bool flag = false;
    // b cout << v[i] <<"\n";
    for (int j = 1; j < v[i].length(); j++) {
      string g = v[i].substr(0, j);
      int diff = v[i].length() - j;
      string f = v[i].substr(j, diff);
      //  cout << g <<" "<< f <<"\n";
      if (mp.find(g) != mp.end() and mp.find(f) != mp.end()) {
        // cout <<"y\n";
        flag = true;
        break;
      }
    }
    // cout <<"\n";
    if (flag) {
      ans[i] = 1;
    }
  }

  for (auto x : ans) cout << x;
  cout << "\n";
}
signed main() {
  int t;
  cin >> t;
  int i = 1;
  while (t--) {
    getSolved();
  }
}