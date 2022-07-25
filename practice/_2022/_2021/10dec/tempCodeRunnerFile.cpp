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

int primeFactors(int n) {
  map<int, int> m;
  // Print the number of 2s that divide n
  while (n % 2 == 0) {
    // cout << 2 << " ";
    m[2]++;
    n = n / 2;
  }

  // n must be odd at this point. So we can skip
  // one element (Note i = i +2)
  for (int i = 3; i <= sqrt(n); i = i + 2) {
    // While i divides n, print i and divide n
    while (n % i == 0) {
      // cout << i << " ";
      n = n / i;
    }
  }

  // This condition is to handle the case when n
  // is a prime number greater than 2
  if (n > 2) m[n]++;
  int ans = 0;
  for (auto i : m) {
    ans += i.second;
  }
  return ans;
}

signed main() {
  int n;
  cin >> n;
  cout << primeFactors(n);

  return 0;
}