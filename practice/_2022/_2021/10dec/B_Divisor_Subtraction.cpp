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

int findNearestPrime(int n) {
  for (int i = 2; i * i < n; i++) {
    if (n % i == 0) return i;
  }
  return n;
}

void solve(int n) {
  int ans = 0;
  if (n % 2 == 0) {
    cout << n / 2 << '\n';
    return;
  } else {
    int nearest = findNearestPrime(n);
    cout << 1 + ((n - nearest) / 2) << '\n';
  }
  return;
}

signed main() {
  int n;
  cin >> n;
  solve(n);
  return 0;
}