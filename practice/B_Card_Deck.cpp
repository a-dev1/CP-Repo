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
    cin >> n;
    map<int, int> m;
    vector<int> arr(n);
    vector<int> ans{};

    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      m[temp] = i;
      arr[i] = temp;
    }

    while (m.size() > 0) {
      auto it = m.rbegin();
      for (int i = it->second; i < n; i++) {
        if (arr[i] == 0) break;
        ans.push_back(arr[i]);
        m.erase(arr[i]);
        arr[i] = 0;
      }
    }

    for (auto i : ans) {
      cout << i << " ";
    }
    cout << "\n";
  }
  return 0;
}