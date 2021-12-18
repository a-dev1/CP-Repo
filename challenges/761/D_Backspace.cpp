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
    string s, t;
    cin >> s >> t;
    if (t.size() > s.size()) {
      cout << "NO\n";
      continue;
    }

    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());

    int l = 0;

    for (int i = 0; i < s.size(); i++) {
      if (s[i] == t[l]) {
        l++;
        continue;
      } else {
        i++;
      }
    }

    if(l == t.size()) 
      cout << "YES\n";
    else 
      cout << "NO\n";
    
  }
  return 0;
}