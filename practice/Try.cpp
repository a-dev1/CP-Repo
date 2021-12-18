#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int accTry(int x, int y) {
  cout << "x:" << x << " ";
  cout << "y:" << y << " ";
  cout << "x*y:" << x * y << endl;
  return x * y;
}

int accTry2(int x, int y) {
  cout << "x:" << x << endl;
  return x * 2;
}
// Code to find odd no. of occurenc of an element in an array
int main() {
  vector<int> arr = {12, 12, 14, 90, 14, 90, 14, 14};
  int oddElement = 0;

  for (auto i : arr) {
    // cout << "oddElement: " << oddElement << endl;
    // cout << "i:" << i << endl;
    oddElement ^= i;
  }
  arr = {2, 1, 3, 4, 8};
  // cout << accumulate(arr.begin(), arr.begin() + 5, 1, accTry);
  vector<int> result(arr.size(), 0);

  partial_sum(arr.begin(), arr.end(), result.begin(), accTry);

  int k = 0;
  while (--k) {
    cout << "Hello -1"
         << "\n";
  }

  // for (auto i : result) cout << "i:" << i << endl;

  return 0;
}

/*
#accumulate(start, end, startingValue, fun);
the fun() take 2 params
fun(startingValue || itself return Value, looping value)
return the last return value from fun();
*/

/*
arrStart is starting of the array where ans should be stored
partial_sum(start, end, arrStart, fun)
don't return any useful things
*/