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

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

signed main() {
  int n, x;
  cin >> n >> x;
  vector<int> arr(n);
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    m[temp]++;
  }
  for (auto i : m) {
    if (i.second > 1) {
      cout << 0 << '\n';
    }
  }

  for(auto i : m) {
    
  }
  return 0;
}