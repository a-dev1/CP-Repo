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
    int n; 
    double sum = 0;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) {
      cin >> i;
      sum += i;
    }
    double required = (sum / n) * 2;
    cout << required << "\n";
    for(int i = 0; i < n; i++) {
      int find = 
      for(int j = 0; j < n; j++) {

      }
    }
  }
  return 0;
}