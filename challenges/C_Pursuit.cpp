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

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for (auto &i : arr1) {
      cin >> i;
      sum1 += i;
    }
    for (auto &i : arr2) {
      cin >> i;
      sum2 += i;
    }

    

  }
  return 0;
}