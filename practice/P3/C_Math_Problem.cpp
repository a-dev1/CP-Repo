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

bool sortbysec(pair<int, int>& a, pair<int, int>& b) {
  if (a.first != b.first) return a < b;
  return a.second > b.second;
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    std::vector<int> v(n);
    vector<int> g(n);

    for (int i = 0; i < n; i++) {
      cin >> v[i];
      cin >> g[i];
    }

    sort(v.begin(), v.end(), greater<int>());
    sort(g.begin(), g.end());

    if (v[0] >= g[0]) {
      cout << abs(v[0] - g[0]) << "\n";
    } else {
      cout << 0 << "\n";
    }
    // cin >> arr[i].first >> arr[i].second;
  }

  return 0;
}