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
    string s;
    cin >> n;
    cin >> s;
    set<char> arr;
    bool ans = true;
    for (int i = 0; i < n; i++) {
      if (s[i] != s[i + 1] && i != n - 1) {
        // cout << "s[i]:" << s[i] << endl;
        if (arr.find(s[i]) != arr.end()) {
          ans = false;
          break;
        }
        arr.insert(s[i]);
      }
      if (i == n - 1) {
        if (arr.find(s[i]) != arr.end()) {
          ans = false;
          break;
        }
        arr.insert(s[i]);
      }
    }
    if (ans)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}