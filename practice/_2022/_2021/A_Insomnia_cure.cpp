#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  // cout << k << l << m << n;
  vector<int> arr(d + 1, 0);
  for (int i = 1; i <= d; i++) {
    if ((i % k == 0 || i % l == 0 || i % m == 0 || i % m == 0 || i % n == 0))
      arr[i] = 1;
  }

  int ans = 0;
  for (int i = 1; i <= d; i++) {
    if (arr[i] == 0) {
      ans++;
    }
  }
  if (ans == 0)
    cout << d;
  else if (ans == d)
    cout << 0;
  else
    cout << (d - ans);

  return 0;
}