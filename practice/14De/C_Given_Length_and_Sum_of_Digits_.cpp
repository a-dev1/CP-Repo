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
  int m, s, temp;
  cin >> m >> s;
  temp = s;
  vector<int> ans;
  int alreadyChecked = 0;
  for (int i = 0; i < m; i++) {
    if (temp / 9 > 0) {
      ans.push_back(9);
      temp = temp - 9;
      alreadyChecked++;
    } else {
      break;
    }
  }
  cout << "alreadyChecked:" << alreadyChecked << endl;
  cout << "m:" << m << endl;
  if (alreadyChecked == m - 1) {
    ans.push_back(temp);
    for (int i = ans.size() - 1; i >= 0; i--) cout << i;
    cout << " ";
    for (auto i : ans) cout << i;
    cout << '\n';
  }
  cout << "temp:" << temp << endl;
  return 0;
}