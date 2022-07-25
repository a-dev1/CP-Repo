#include <algorithm>
#include <climits>
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

int solve(string s) {
  long long ans = 0;
  int poscnt = 0, negcnt = 0;
  bool temp = true;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != ' ') {
      if (temp) {
        if (s[i] == '+') poscnt++;
        if (s[i] == '-') negcnt++;
        if (poscnt && negcnt) return 0;
        if (poscnt > 1 || negcnt > 1) return 0;
      }

      if (s[i] >= '0' && s[i] <= '9') {
        temp = false;
        if (s[i - 1] == ' ' && (poscnt || negcnt)) return 0;
        ans = ans * 10 + (((int)s[i]) - 48);
        if (i != s.size() - 1) {
          if (s[i + 1] == '+' || s[i + 1] == '-' || s[i + 1] == ' ') {
            if (negcnt >= 1) ans = ans * -1;
            return ans;
          }
        }
        // cout << ((int)s[i]) - 48 << endl;
      } else if (s[i] == '+' || s[i] == '-') {
      } else {
        if (negcnt >= 1) ans = ans * -1;
        return ans;
      }
    }
    if (negcnt >= 1) {
      if (-ans <= INT32_MIN) return INT32_MIN;
    } else {
      if (ans >= INT32_MAX) return INT32_MAX;
    }
  }
  if (negcnt >= 1) ans = ans * -1;
  return ans;
}

int main() {
  string input;
  cin >> input;
  cout << solve(input) << endl;
  cout << "INT_MAX:" << INT_MAX;
  cout << "INT_MAX:" << INT_MIN;
  // if()
  return 0;
}