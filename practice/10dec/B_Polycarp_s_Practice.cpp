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
  int n, k;
  cin >> n >> k;

  map<int, int> m;
  vector<int> arr(n);
  for (auto &i : arr) {
    cin >> i;
    m[i]++;
  }
  // for (auto i : m) cout << i.first << " " << i.second << '\n';

  for (auto it = m.rbegin(); it != m.rend(); it++) {
    cout << "(" << it->first << ", " << it->second << ")" << endl;
    cout << "kkk:" << k << endl;
    cout << "it->second:" << it->second << endl;

    k -= it->second;

    cout << "k:" << k << endl;
    int temp = it->second;

    cout << "temp:" << temp << endl;
    while (temp-- && k >= 0) {
      for (int i = 0; i < n; i++) {
        if (arr[i] == -1) {
          continue;
        }
        if (arr[i] == it->first) {
          arr[i] = -1;
          cout << "Matched: " << '\n';
        }
      }
    }
    cout << "k:" << k << endl;
    if (k < 0) break;
  }
  for (auto i : arr) cout << i << " ";
  return 0;
}