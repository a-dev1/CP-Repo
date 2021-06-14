#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int> &nums, int x) {
  if (nums.size() == 0 || nums[nums.size() - 1] <= x) {
    nums.push_back(x);
    return;
  }
  int temp = nums[nums.size() - 1];
  nums.pop_back();
  insert(nums, x);
  nums.push_back(temp);
}

void sortUsingRecursion(vector<int> &arr) {
  if (arr.size() == 1) return;
  int temp = arr[arr.size() - 1];
  arr.pop_back();
  sortUsingRecursion(arr);  // hypothesis
  insert(arr, temp);        // new recursion fun() to handle new situation
  return;
}

int main() {
  vector<int> numbers = {1, 5, 0, 23, 2, 12, 2};
  for (auto i : numbers) cout << i << " ";
  sortUsingRecursion(numbers);
  cout << "\nSorted Array: ";
  for (auto i : numbers) cout << i << " ";
}