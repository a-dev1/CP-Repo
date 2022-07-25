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

bool isPrime(int n) {
  // Corner case
  if (n <= 1) return false;

  // Check from 2 to n-1
  for (int i = 2; i < n; i++)
    if (n % i == 0) return false;

  return true;
}

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, a = 0, b = 0;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;

    for (int i = 0; i < n; i++) {
      if (i % 2 == 0)
        a = __gcd(a, arr[i]);
      else
        b = __gcd(b, arr[i]);
    }

    bool ansFound1 = true, ansFound2 = true;
    for (int i = 0; i < n; i += 2) {
      if (arr[i] % b == 0) {
        ansFound1 = false;
        break;
      }
    }

    for (int i = 1; i < n; i += 2) {
      if (arr[i] % a == 0) {
        ansFound2 = false;
        break;
      }
    }

    if (ansFound1 || ansFound2) {
      (a > b) ? cout << a << '\n' : cout << b << '\n';
    } else {
      cout << 0 << '\n';
    }
  }
  return 0;
}