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
  int n, mt;
  cin >> n >> mt;
  vector<int> arr(mt);
  map<int, int> m;
  for (int i = 0; i < mt; i++) {
    int temp;
    cin >> temp;
    m[temp]++;
  }

  if (m.size() == 1) {
    cout << (m.begin()->second) / n << '\n';
  }

  int ans = 0;
  if (m.size() >= n) {
    for (auto i : m) {
      
    }
  }

  return 0;
}