#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long
#define int long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

signed main() {
  int n, min = 1000000000, max = -1, maxFrequency = 0, minFrequency = 0;
  cin >> n;
  vector<int> flowers(n);
  for (int i = 0; i < n; i++) {
    cin >> flowers[i];
    if (flowers[i] > max) max = flowers[i];
    if (flowers[i] < min) min = flowers[i];
  }

  for (int i = 0; i < n; i++) {
    if (flowers[i] == max) maxFrequency++;
    if (flowers[i] == min) minFrequency++;
  }

  if (min == max) {
    cout << 0 << " " << n * (n - 1) / 2;
  } else
    cout << abs(max - min) << " " << maxFrequency * minFrequency;

  // cout << max << endl;
  // cout << min << endl;

  return 0;
}