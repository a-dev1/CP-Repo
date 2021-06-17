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

void solve(vector<int> nums, int n) {

}

int main() {
  vector<int> nums(14);
  for (int i = 0; i < 14; i++) {
    cin >> nums[i];
  }
  for (int i = 0; i < 14; i++) {
    if (nums[i] != 0) {
      solve(nums, i);
    }
  }

  return 0;
}