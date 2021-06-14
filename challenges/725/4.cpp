#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int solve(int n) {
  map<int, int> numbers;
  int max = 0;
  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ++numbers[i];
      n = n / i;
    }
  }
  if (n > 1) {
    ++numbers[n];
  }
  for (auto i : numbers) {
    max += i.second;
  }
  return max;
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int a, b, k, minStep = 2, maxStep = 0;
    cin >> a >> b >> k;
    if ((a % b == 0 || b % a == 0) && a != b) minStep = 1;
    maxStep += solve(b);
    maxStep += solve(a);
    // cout << "maxstep:" << maxStep << endl;
    // cout << "minStep:" << minStep << endl;
    if (k >= minStep && k <= maxStep) {
      cout << "YES" << endl;
    } else
      cout << "NO" << endl;
  }
  return 0;
}