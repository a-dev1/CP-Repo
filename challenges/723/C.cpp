#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums(n, 0);

  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }

  sort(begin(nums), end(nums), greater<int>());

  int health = 0;
  int portion_count = 0;
  for (int i : nums) {
    if (i > 0) {
      health += i;
      portion_count++;
    } else if ((health + i) >= 0) {
      health += i;
      portion_count++;
    } else {
    }
  }
  cout << portion_count;
  return 0;
}