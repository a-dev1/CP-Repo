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
    vector<pair<int, int>> arr;
    vector<int> buses(100000);
    int n, t;
    // map<int, vector<int>> m;
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
      int s, d;
      cin >> s >> d;
      for (int j = s; j <= 100000; j += d) {
        if (buses[j] == 0) buses[j] = i;
      }
      // cin >> s >> d;
      // // m[s];
      // m[s].push_back(d);
    }
    for (int i = 1; i <= 10; i++) {
      cout << "second:" << i << " bus:" << buses[i] << endl;
    }
    cout << buses[t] << '\n';
    // for (auto i : m) {
    //   cout << "i.first:" << i.first << endl;
    //   for (auto j : i.second) {
    //     cout << j << " ";
    //   }
    //   cout << '\n' << endl;
    // }
    // cout << "ans: " << m[n][0] << endl;
  }
  return 0;
}