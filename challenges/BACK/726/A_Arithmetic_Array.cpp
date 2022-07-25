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
  int tc;
  cin >> tc;
  while (tc--) {
    int n, sum = 0, ans;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++) {
      cin >> input[i];
      sum += input[i];
    }
    if (sum == 0 || sum < 0) {
      cout << 1 << endl;
    } else if (n > sum) {
      cout << 1 << endl;
    } else {
      cout << abs(abs(sum) - abs(n)) << endl;
    }
  }
  return 0;
}