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
    string str;
    cin >> str;
    int ans = 0, starCnt = 0, doctCnt = 0;
    int i = 0;
    while (str[i] == '.') {
      i++;
    }
    // cout << "i start:" << i << endl;
    for (int i = 0; i < n; i++) {
      if (str[i] == '.')
        doctCnt++;
      else {
        ans += doctCnt;
        starCnt++;
      }
    }

    int ans2 = 0;
    starCnt = 0, doctCnt = 0;
    int j = n - 1;
    while (str[j] == '.') {
      j--;
    }
    for (int i = 0; i < n; i++) {
      if (str[i] == '.') {
        doctCnt++;
        ans2 += doctCnt;
      } else {
        starCnt++;
      }
    }
    cout << "ans2:" << ans2 << endl;
    cout << ans << '\n';
  }
  return 0;
}