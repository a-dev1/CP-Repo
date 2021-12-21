#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

// Returns the product of digits of number x
int product(int x) {
  int prod = 1;
  while (x) {
    prod *= (x % 10);
    x /= 10;
  }
  return prod;
}

// This function returns the number having
// maximum product of the digits
int findNumber(int l, int r) {
  // Converting both integers to strings
  string a = to_string(l);
  string b = to_string(r);

  // Let the current answer be r
  int ans = r;
  for (int i = 0; i < b.size(); i++) {
    if (b[i] == '0') continue;

    // Stores the current number having
    // current digit one less than current
    // digit in b
    string curr = b;
    curr[i] = ((curr[i] - '0') - 1) + '0';

    // Replace all following digits with 9
    // to maximise the product
    for (int j = i + 1; j < curr.size(); j++) curr[j] = '9';

    // Convert string to number
    int num = 0;
    for (auto c : curr) num = num * 10 + (c - '0');

    // Check if it lies in range and its product
    // is greater than max product
    if (num >= l && product(ans) < product(num)) ans = num;
  }

  return ans;
}

// Driver Code
int main() {
  long long int num, temp, factor = 1, mul = 1;
  long long r;
  cin >> r;
  // cout << findNumber(1, r) << endl;
  num = findNumber(1, r);
  temp = num;
  while (temp) {
    temp = temp / 10;
    factor = factor * 10;
  }

  // printf("Each digits of given number are: ");
  while (factor > 1) {
    factor = factor / 10;
    mul = mul * (num / factor);
    num = num % factor;
  }

  cout << mul;

  return 0;
}