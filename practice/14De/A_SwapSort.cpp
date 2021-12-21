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

signed main() {
  int n, cnt = 0;
  cin >> n;
  vector<int> arr(n);
  vector<pair<int, int>> ans;
  for (auto &i : arr) cin >> i;

  for (int i = 0; i < n; i++) {
    int j = i;
    for (int t = i; t < n; t++) {
      if (arr[t] < arr[j]) {
        j = t;
      }
    }
    if (j != i) {
      ans.push_back(make_pair(i, j));
    }
    swap(arr[i], arr[j]);
  }
  cout << ans.size() << '\n';
  for (auto i : ans) {
    cout << i.first << " " << i.second << '\n';
  }
  return 0;
}