// C++ program to print all prime factors
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

// A function to print all prime
// factors of a given number n
bool primeFactors(int n) {
  // Print the number of 2s that divide n
  while (n % 2 == 0) {
    // cout << 2 << " ";
    n = n / 2;
  }

  // n must be odd at this point. So we can skip
  // one element (Note i = i +2)
  for (int i = 3; i <= sqrt(n); i = i + 2) {
    // While i divides n, print i and divide n
    while (n % i == 0) {
      // cout << i << " ";
      if (i != 2 || i != 5) {
        return false;
      }
      n = n / i;
    }
  }

  // This condition is to handle the case when n
  // is a prime number greater than 2
  if (n > 2) {
    if (n != 2 || n != 5) {
      return false;
    }
  }
  return true;
}

/* Driver code */
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;

    primeFactors(b) ? cout << "Yes\n" : cout << "No\n";
  }
  return 0;
}