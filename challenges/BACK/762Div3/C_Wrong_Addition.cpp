#include <bits/stdc++.h>

#include <string>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;
    string a = to_string(n);
    string s = to_string(m);

    if (n > m) {
      cout << -1 << '\n';
      continue;
    }

    reverse(all(a));
    reverse(all(s));

    bool ok = true;

    string ans;
    int j = 0LL, i = 0LL;
    for (i = 0; i < a.length() && j < s.length(); i++) {
      int x = a[i] - '0';
      int y = s[j] - '0';

      if (x <= y) {
        ans += to_string(abs(x - y));
      } else {
        string sub = s.substr(j, 2);
        reverse(all(sub));
        y = stoi(sub);
        if (y > 18 || y < x) {
          cout << -1 << '\n';
          ok = false;
          break;
        }
        ans += to_string(abs(x - y));
        j++;
      }
      j++;
    }
    if (!ok) continue;

    if (i == a.length() && j == s.length() - 1) {
      ans += s[j];
      j++;
    }

    if (i != a.length() || j != s.length()) {
      cout << -1 << '\n';
      continue;
    }

    int cnt0 = count(ans.begin(), ans.end(), '0');

    if (cnt0 == s.length() && cnt0 == a.length()) {
      cout << 0 << '\n';
      continue;
    } else if (cnt0 == ans.length()) {
      cout << 0 << '\n';
      continue;
    }

    reverse(all(ans));
    int k = 0;

    while (ans[k] == '0') {
      k++;
    }
    
    for (; k < ans.length(); k++) {
      cout << ans[k];
    }
    cout << '\n';
  }
  return 0;
}