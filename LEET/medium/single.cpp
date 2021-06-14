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
  vector<int> nums = {1, 1, 0, -2147483648};
  vector<int> answer;

  sort(begin(nums), end(nums));
  int xorsum = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (i != nums.size() - 1) {
      if (nums[i] == 0 && i == 0) {
        if (nums[i + 1] != 0) {
          answer.push_back(0);
        }
      } else {
        if (nums[i] != 0) {
          if (xorsum == 0 && nums[i] != nums[i + 1]) {
            answer.push_back(nums[i]);
          } else {
            xorsum = xorsum ^ nums[i];
          }
        } else {
          if (nums[i] == nums[i + 1] || nums[i] == nums[i - 1]) {
          } else {
            answer.push_back(0);
          }
        }
      }
    } else {
      if (nums[i] != nums[i - 1]) {
        answer.push_back(nums[i]);
      }
    }
  }

  // return answer;

  for (auto i : answer) cout << "i:" << i << endl;
  return 0;
}