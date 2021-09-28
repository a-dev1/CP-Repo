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

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

unordered_map<int, int> primeFactors(int n) {
  // Print the number of 2s that divide n
  unordered_map<int, int> temp;
  while (n % 2 == 0) {
    // cout << 2 << " ss";
    temp[2]++;
    n = n / 2;
  }

  // n must be odd at this point. So we can skip
  // one element (Note i = i +2)
  for (int i = 3; i <= sqrt(n); i = i + 2) {
    // While i divides n, print i and divide n
    while (n % i == 0) {
      // cout << i << " ";
      temp[i]++;
      n = n / i;
    }
  }

  // This condition is to handle the case when n
  // is a prime number greater than 2
  if (n > 2) {
    // cout << n << " ";
    temp[n]++;
  }
  return temp;
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int a, b, k;
    cin >> a >> b >> k;

    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    m1 = primeFactors(a);
    m2 = primeFactors(b);
    int sum1 = 0, sum2 = 0;
    for (auto i : m1) {
      // cout << i.first << " " << i.second << "\n";
      sum1 += i.second;
    }
    // cout << b << ":\n";
    for (auto i : m2) {
      sum2 += i.second;
      // cout << i.first << " " << i.second << "\n";
    }

    int min = 0, max = 0;
    max = sum1 + sum2;
    for (auto i : m1) {
      if (m2.find(i.first) != m2.end()) {
        if (i.second != m2[i.first]) min++;
        max = sum1 + sum2 - 2;
      } else {
        min++;
      }
    }
 
    // cout << "min:" << min << endl;
    // cout << "max:" << max << endl;
    if ((a == 1 || b == 1) && k <= max)
      cout << "YES\n";
    else if (k <= max && k >= min)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}