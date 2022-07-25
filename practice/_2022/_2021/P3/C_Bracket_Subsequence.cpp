#include <bits/stdc++.h>
#define int long long
using namespace std;
#define MOD 1000000007

void solve() {
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;

  if (n == m) {
    cout << s << "\n";
    return;
  }
  stack<char> st;
  string ans = "";

  int count = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '(') {
      if ((count + 1) <= m - ans.size()) {
        ans += s[i];
        count++;
      }
    } else {
      if (count > 0) {
        ans += s[i];
        count--;
      }
    }
  }

  cout << ans << "\n";
}

signed main() { solve(); }