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
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    map<int, int> m;

    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      m[temp]++;
    }

    // cout << "m.size():" << m.size() << endl;
    // if(m.size() <= 1) {
    vector<int> toBeDeleted;
    if (m.size() == 0) {
      cout << 0;
    } else if (m.size() == 1) {
      for (int i = 0; i < m.begin()->second; i++)
        cout << m.begin()->first << " ";
    } else {
      while (m.size() > 0) {
        for (auto &i : m) {
          if (i.second == 0) {
            // m.erase(i.first);
            toBeDeleted.push_back(i.first);
          } else {
            cout << i.first << " ";
            m[i.first]--;
          }
        }
        for (int i : toBeDeleted) {
          m.erase(i);
        }
        toBeDeleted.clear();
      }
    }
    cout << '\n';
  }
  return 0;
}