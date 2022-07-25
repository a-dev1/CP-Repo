#include <bits/stdc++.h>
#define int long long
using namespace std;
#define MOD 1000000007

void solve() {
  string s;
  cin >> s;
  int k;
  cin >> k;

  int Charcnt = 0;
  int candyCane = 0;
  int snowwFlake = 0;

  for (auto x : s) {
    if (x == '*')
      snowwFlake++;
    else if (x == '?')
      candyCane++;
    else
      Charcnt++;
  }

  if (Charcnt == k) {
    for (auto x : s) {
      if (x == '*' || x == '?') continue;
      cout << x;
    }
    cout << "\n";
    return;
  }

  if (Charcnt < k) {
    int need = k - Charcnt;
    if (snowwFlake) {
      int cnt = 0;
      string ans = "";
      for (int i = 0; i < s.length() - 1; i++) {
        if (cnt == 0 and s[i + 1] == '*') {
          while (need--) {
            ans.push_back(s[i - 1]);
          }
          cnt++;
          continue;
        }
        if (s[i] == '?') continue;
        ans.push_back(s[i]);
      }

      cout << ans << "\n";
    } else {
      cout << "Impossible\n";
      return;
    }
  }

  if (Charcnt > k and snowwFlake == 0 and candyCane == 0) {
    cout << "Impossible\n";
    return;
  }
}

signed main() { solve(); }