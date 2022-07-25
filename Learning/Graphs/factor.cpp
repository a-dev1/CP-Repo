#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

vector<int> findFactor(int n) {
  vector<int> arr;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      if (n / i == i) {
        // cout << i << " ";
        arr.push_back(i);
      } else {
        // cout <<" " << i << " " << n / i;
        arr.push_back(i);
        arr.push_back(n / i);
      }
    }
  }
  sort(arr.begin(), arr.end());
  return arr;
}
signed main() {
  int n;
  cin >> n;
  for (auto i : findFactor(n)) cout << i << " ";
  return 0;
}