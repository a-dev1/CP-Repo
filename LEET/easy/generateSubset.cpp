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

vector<vector<int>> subSet(vector<int> &nums) {
  vector<vector<int>> output = {};

  vector<int> temp = {};

  // total subset = 2^n for n elements.
  for (int i = 0; i < pow(2, nums.size()); i++) {
    temp = {};
    for (int j = 0; j < nums.size(); j++) {
      // is jth bit of i is set or not
      // if yes add it to sub-set else not
      if (i & (1 << j)) {
        temp.push_back(nums[j]);
      }
    }
    output.push_back(temp);
  }

  return output;
}

int main() {
  vector<int> arr = {1, 2, 3};
  vector<vector<int>> arr2 = {};

  arr2 = subSet(arr);

  // cout << "arr2.size():" << arr2.size() << endl;

  for (int i = 0; i < arr2.size(); i++) {
    for (int j = 0; j < arr2[i].size(); j++) {
      cout << arr2[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

/*
  {1, 2, 3}
   0  0  0
   0  0  1
   0  1  0
   0  1  1
   1  0  0
   1  0  1
   1  1  0
   1  1  1

{The subsets will be obtained by mapping arr to 2^n bits}
*/