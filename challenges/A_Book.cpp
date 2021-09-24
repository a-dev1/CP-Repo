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
    int n, NumberOfChapters;
    cin >> n;
    vector<vector<int>> required(n, vector<int>(10));
    vector<int> nocr(10);
    for (int i = 0; i < n; i++) {
      cin >> NumberOfChapters;
      nocr.push_back(NumberOfChapters);
      for (int j = 0; j < NumberOfChapters; j++) {
        cin >> required[i][j];
      }
    }
    for (auto j : required[0][nocr[0]]) {
      cout << j << " ";
    }
    // while (true) {
    //   for (int i = 0; i < n; i++) {
    //     for (auto j : required[i]) {
    //     }
    //   }
    // }
  }
  return 0;
}