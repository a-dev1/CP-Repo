#include<bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

signed main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  vector<int> ans1;
  vector<int> ans2;

  for (auto &i : arr) cin >> i;

  sort(arr.begin(), arr.end());

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      ans1.push_back(arr[i]);

    } else
      ans2.push_back(arr[i]);
  }

  for (auto i : ans1) cout << i << " ";

  reverse(ans2.begin(), ans2.end());
  for (auto i : ans2) cout << i << " ";
  cout << '\n';
  return 0;
}