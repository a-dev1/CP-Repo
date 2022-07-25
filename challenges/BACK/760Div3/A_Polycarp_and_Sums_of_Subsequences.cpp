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

void fun() {
  int n = 7;
  vector<int> v(n);
  set<int> s;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    s.insert(v[i]);
  }

  int maxElement = *max_element(v.begin(), v.end());

  for (int i = 0; i < 7; i++) {
    for (int p = i + 1; p < 7; p++) {
      for (int k = p + 1; k < 7; k++) {
        int bigg = v[i] + v[k] + v[p];
        if (s.find(bigg) != s.end() && bigg == maxElement) {
          cout << v[i] << " " << v[p] << " " << v[k] << "\n";
          return;
        }
      }
    }
  }
}

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    fun();
  }
  return 0;
}