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
    string s;
    cin >> s;
    if (s[0] != '1') {
      cout << 1;
      cout << s;
    } else {
      cout << s[0] << 0;
      for (int i = 1; i < s.size(); i++) {
        cout << s[i];
      }
    }
    cout << endl;
  }
  return 0;
}