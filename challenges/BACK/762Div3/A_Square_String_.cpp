#include <bits/stdc++.h>

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
    string str;
    cin >> str;
    int len = str.length();
    // cout << "len:" << len << endl;
    if (len % 2 != 0) {
      cout << "NO\n";
      continue;
    }
    string st1 = str.substr(0, (len / 2));
    string st2 = str.substr(len / 2, len / 2);
    // cout << "st1:" << st1 << endl;
    // cout << "st2:" << st2 << endl;
    if (st1 == st2) {
      cout << "YES\n";
    } else
      cout << "NO\n";
  }
  return 0;
}