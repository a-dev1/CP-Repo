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
  vector<int> prices(n);
  for (auto &i : prices) cin >> i;

  int j = 0, ans = prices.size(), longest = 0;
  for (int i = 0; i < prices.size() - 1; i++) {
    while (prices[i] - prices[i + 1] != 1 && j < i) {
      j = i;
    }
    longest = max(longest, i - j + 1);
    cout << "(i-j+1):" << (i - j + 1) << endl;
  }
  longest++;
  ans += ((longest) * (longest+1) /2
  cout << longest;

  return 0;
}