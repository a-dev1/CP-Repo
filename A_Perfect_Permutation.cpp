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
  int n;
  cin >> n;
  if (n == 1 || n % 2 != 0) {
    cout << -1;
  } else {
    for (int i = 1; i <= n; i += 2) {
      cout << i + 1 << " " << i << " ";
    }
  }
  return 0;
}