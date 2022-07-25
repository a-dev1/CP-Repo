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

using namespace std;

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ansl = -1, ansr = -1;
    for (int i = 1; i <= n - 1; i++) {
      if (s[i] != s[i - 1]) {
        ansl = i;
        ansr = i + 1;
        break;
      }
    }
    cout << ansl << " " << ansr << endl;
  }
}