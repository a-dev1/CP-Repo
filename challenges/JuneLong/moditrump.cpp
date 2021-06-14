#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solution {
 public:
  bool PredictTheWinner(vector<int>& nums) {
    int modi = 0, trump = 0, diff;
    bool temp = true;

    int l = 0, r = nums.size() - 1, n = nums.size();
    for (int i = 0; i < n; i++) {
      int lbenefit, rbenefit;
      if (l != r - 1) {
        lbenefit = max(nums[l + 1], nums[r]);
        rbenefit = max(nums[l], nums[r - 1]);
      } else {
        lbenefit = rbenefit = 0;
      }

      int ans;
      if (lbenefit > rbenefit) {
        ans = nums[r];
        r--;
      } else if (rbenefit > lbenefit) {
        ans = nums[l];
        l++;
      } else {
        if (nums[l] > nums[r]) {
          ans = nums[l];
          l++;
        } else {
          ans = nums[r];
          r--;
        }
        // cout << "equal benefit: " << ans << endl;
      }
      if (temp) {
        modi += ans;
        temp = false;
      } else {
        trump += ans;
        temp = true;
      }
    }

    // cout << "modi:" << modi << endl;
    // cout << "trump:" << trump << endl;
    if (modi > trump || modi == trump) {
      return true;
    } else {
      return false;
    }
  }
};

int main() {
  Solution obj;
  vector<int> numbers = {1, 5, 233, 7};
  cout << (obj.PredictTheWinner(numbers));
  return 0;
}
// #include <algorithm>
// #include <cmath>
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// #define ar array
// #define ll long long

// const int MAX_N = 1e5 + 1;
// const ll MOD = 1e9 + 7;
// const ll INF = 1e9;

// void solve() {}

// int main() {
//   int n;
//   cin >> n;
//   vector<int> nums;
//   for (int i = 0; i < n; i++) {
//     int temp;
//     cin >> temp;
//     nums.push_back(temp);
//   }

//   int modi = 0, trump = 0, diff;
//   bool temp = true;

//   int l = 0, r = nums.size() - 1;
//   for (int i = 0; i < n; i++) {
//     int lbenefit, rbenefit;
//     lbenefit = max(nums[l + 1], nums[r]);
//     rbenefit = max(nums[l], nums[r - 1]);

//     int ans;
//     if (lbenefit > rbenefit) {
//       ans = nums[r];
//       r--;
//     } else if (rbenefit > lbenefit) {
//       ans = nums[l];
//       l++;
//     } else {
//       if (nums[l] > nums[r]) {
//         ans = nums[l];
//         l++;
//       } else {
//         ans = nums[r];
//         r--;
//       }
//       // cout << "equal benefit: " << ans << endl;
//     }
//     if (temp) {
//       modi += ans;
//       temp = false;
//     } else {
//       trump += ans;
//       temp = true;
//     }
//   }

// cout << "mdid:" << modi << endl;
// cout << "trump:" << trump << endl;
//   if (modi > trump || modi == trump) {
//     return true;
//   } else {
//     return false;
//   }

//   return 0;
// }