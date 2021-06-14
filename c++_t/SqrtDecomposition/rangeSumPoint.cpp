#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

class NumArray {
 public:
  int n, b, tb, count = 0;
  vector<int> arr;
  vector<int> B;
  NumArray(vector<int>& nums) {
    arr = nums;
    n = arr.size();
    b = sqrt(n);
    tb = ((n + b - 1) / b);  // ceil(n/b)

    B.assign(tb, 0);

    for (int i = 0; i < n; i++) {  // O(n)
      B[i / b] += arr[i];
    }
  }

  void update(int index, int val) {
    int old = arr[index];
    B[index / b] = B[index / b] - old + val;
    arr[index] = val;
  }

  int sumRange(int left, int right) {
    int sum = 0, i;

    // before sum
    int end_index = ((left / b) * b) + (b - 1);  //(ith block * b) - (b - 1)

    for (i = left; i <= min(end_index, right); i++) {
      sum += arr[i];
    }

    // after sum
    int start_index = (right / b) * b;

    // check if both lies in the same quadrant
    if ((left / b) == (right / b)) {
      cout << "l and b belong to same block:" << endl;
      return sum;
    }

    for (i = start_index; i <= right; i++) {
      sum += arr[i];
    }

    // in between block sum
    for (i = (left / b) + 1; i < (right / b); i++) {
      sum += B[i];
    }

    return sum;
  }
};

int main() {
  vector<int> arr = {1, 2, 6, 3, 9, 8, 6, 5, 2, 3, 9, 10};
  NumArray* obj = new NumArray(arr);
  cout << obj->sumRange(1, 2);
  // obj->update(3, 5);
  return 0;
}

// class NumArray {
// public:

//  int n, b, sz;
//  vector<int> B;
//  vector<int> arr;

//     NumArray(vector<int>& nums) {
//         n = nums.size();
//         b = sqrt(n);
//         sz = (n+b-1) / b; // ceil(n/b)

//         B.assign(sz,0);
//         arr = nums;

//         for(int i=0; i<n; i++)
//         {
//          B[i/b] += arr[i];
//         }
//     }

//     void update(int index, int val) {

//      // O(1)
//      int old = arr[index];
//      arr[index] = val;
//      B[index/b] = B[index/b] - old + val;
//     }

//     int sumRange(int left, int right) {

//         int sum = 0;

//         // Elements in the left block
//         int left_block = left/b;
//         int end_l = (left_block * b) + (b-1);

//         for(int i=left; i<=min(right,end_l); i++)
//          sum += arr[i];

//         // Elements in the right block
//         int right_block = right/b;

//         if(left_block == right_block)
//          return sum;

//         int start_r = right_block * b;

//         for(int i = max(start_r,left); i<=right; i++)
//          sum += arr[i];

//         // Intermediate Boxes

//         for(int block = left_block+1; block < right_block; block++)
//          sum += B[block];

//         return sum;
//     }
// };