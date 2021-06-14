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

class Solution {
 public:
  vector<int> runningSum(vector<int>& nums) {
    vector<int> ans = {};
    for (int i = 0; i < nums.size(); i++)
      ans.push_back((i != 0) ? nums[i] + ans[i - 1] : nums[i]);
    return ans;
  }
};

int main() {
  Solution obj;
  vector<int> numbers = {1,1,1,1,1};

  for (auto i : obj.runningSum(numbers)) cout << "i:" << i << endl;
  return 0;
}
