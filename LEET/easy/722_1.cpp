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

void solve(vector<int> &arr) {
  int avg = 0;
  int count = 0;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr.size() - i; j++) {
      
    }
  }
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, i;
    cin >> n;
    vector<int> nums(n, 0);

    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }

    solve(nums);
  }
  return 0;
}