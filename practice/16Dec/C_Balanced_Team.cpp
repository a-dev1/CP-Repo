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

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

signed main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  bool ok = false, lastTime = false;
  for (auto &i : arr) cin >> i;

  sort(arr.begin(), arr.end());

  // 1 2 10 12 15 17

  int diff, ans = -1, l = 0, r = 0;

  for (int r = 0; r < n; r++) {
    while (arr[r] - arr[l] > 5 && l < r) {
      l++;
    }
    ans = max(ans, r - l + 1);
  }

  cout << ans << '\n';
  return 0;
}

/*
  l = 0;
  r = 0;

  1step
  l = 0
  r = 0+1 = 1

  int diff, ans = -1;
  for(int i = 0; i < n; i++) {
    while(arr[r] - arr[l] > 5 && l < r){
      l++;
    }
    ans = max(ans, r - l + 1)
  }

*/