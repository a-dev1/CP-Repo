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
    bool ans = false;
    int n, count1 = 0, count2 = 0, count3 = 0;
    vector<int> arr(n);
    vector<bool> prime(100);
    for (auto &i : arr) {
      cin >> i;
    }
    for (auto i : arr) cout << i << " ";
    // for (auto &i : arr) {
    //   cin >> i;
    //   if (i == 1 || i == 4 || i == 6 || i == 8) {
    //     cout << 1 << "\n" << i << "\n";
    //     ans = true;
    //   }
    //   if(!ans) {

    //   }
    // }
  }
  return 0;
}