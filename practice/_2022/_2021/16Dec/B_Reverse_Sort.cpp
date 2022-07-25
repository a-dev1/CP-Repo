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
    string str;
    cin >> str;
    int cnt0 = 0, cnt1 = 0, ans = 0;
    for (int i = 0; i < n; i++) {
      if (str[i] == 0)
        cnt0++;
      else
        cnt1++;
    }
    vector<int> arr1pos;
    for (int i = 0; i < (n - cnt1); i++) {
      if (str[i] == '1') {
        arr1pos.push_back(i + 1);
      }
    }
    int iterationCnt = arr1pos.size();
    for (int i = str.size(); i >= 0 && (iterationCnt >= 0); i--) {
      if (str[i] == '0') {
        cout << arr1pos[]
        // iterationCnt--;
      }
    }
  }
  return 0;
}