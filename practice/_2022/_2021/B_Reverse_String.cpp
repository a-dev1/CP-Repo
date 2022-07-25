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

bool checkString(string s1, string s2, int pos) {
  for (int i = 1; i < s2.length(); i++) {
    if (s2[i] == s1[pos - 1]) {
      pos--;
      while (pos < !0) {
        pos--;
        i++;
        if (s2[i] != s1[pos]) {
          // cout << "NO\n";
          return false;
        }
      }
      if (i == s2.length() - 1)
        return true;
      else
        return false;
    } else if (s2[i] == s1[pos + 1]) {
      pos++;
      while (pos <= s1.length() - 1) {
        pos++;
        i++;
        if (s2[i] != s1[pos]) return false;
      }
      if (i == s2.length() - 1) {
        return true;
      }
    }
  }
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;

    for (int i = 0; i < s1.length(); i++) {
      if (s1[0] == s2[0] && i == 0) {
        checkString(s1, s2, 0);
      } else {
        int nth = i + 1, cnt = 0;
        size_t index = 0;

        while (cnt != nth) {
          index++;
          index = s1.find(s2[0], index);
          if(index == string::npos) {
            break;
          }
          cnt++;
        }

        if (index == string::npos) {
          cout << "NO\n";
          break;
        }
        
        cnt++;
        if (checkString(s1, s2, index)) {
          cout << "YES\n";
          break;
        }
      }
    }
  }
  return 0;
}