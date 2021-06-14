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

// My Approach
class Solution {
 public:
  int subsetXORSum(vector<int>& nums) {
    int totalSum = 0;

    for (int i = 0; i < pow(2, nums.size()); i++) {
      int sum = 0;
      for (int j = 0; j < nums.size(); j++) {
        if (i & (1 << j)) {
          sum ^= nums[j];
        }
      }
      totalSum += sum;
    }

    return totalSum;
  }
};

int main() {
  vector<int> numbers = {1, 2, 3};

  Solution obj;
  cout << "Total Sum:" << obj.subsetXORSum(numbers);
  return 0;
}