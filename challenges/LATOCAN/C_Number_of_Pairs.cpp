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
    int n, l, r;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      auto ptr1 = upper_bound(nums.begin(), nums.end(), );
    }
  }
  return 0;
}