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

bool coprime(int a, int b) {
  if (__gcd(a, b) == 1)
    return true;
  else
    return false;
}

signed main() {
  int n, cnt = 0;
  cin >> n;
  vector<int> arr(n);
  vector<int> ans;
  for (auto &i : arr) cin >> i;
  // sort(arr.begin(), arr.end());
  for (int i = 0; i < n - 1; i++) {
    if (coprime(arr[i], arr[i + 1])) {
      ans.push_back(arr[i]);
    } else {
      ans.push_back(arr[i]);
      ans.push_back(1);
      cnt++;
    }
  }
  ans.push_back(arr[n - 1]);

  cout << cnt << endl;
  for (auto i : ans) {
    cout << i << " ";
  }
  return 0;
}