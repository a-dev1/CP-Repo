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
    int n, m, k;
    cin >> n >> m >> k;

    vector<pair<int, int>> arr(n * m);

    for (auto &i : arr) {
      cin >> i.first >> i.second;
    }
    // cout << "Size: " << n * m << endl;
    // for (auto &i : arr) {
    //   cout << i.first << " " << i.second << endl;
    // }
    
    if (k == 1) {
      cout << "Alice";
      return 0;
    }
  }
  return 0;
}