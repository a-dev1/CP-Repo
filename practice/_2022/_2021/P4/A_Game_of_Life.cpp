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
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;

    for (int i = 0; i < n; i++) {
      if (str[i] == '1') {
        cout << '1';
        continue;
      }
      int cnt0 = 0;
      if (str[i] == 0 && str[i + 1] == 0) {
        while (str[i] == 0 && str[i + 1] == 0) {
          cnt0++;
        }
        if ((cnt0 - 1) / 2 == m) {
          int temp = m;
          while (temp--) {
            cout << '1';
            temp--;
          }
          cout << '0';
          temp = m;
          while (temp--) {
            cout << '1';
            temp--;
          }
        } else if ((cnt0 - 1) / 2 > m) {
          int temp = m;
          while (temp--) {
            cout << '1';
            temp--;
          }
          int left = cnt0 - (2 * temp);
          while (left--) {
            cout << '0';
            left--;
          }
          temp = m;
          while (temp--) {
            cout << '1';
            temp--;
          }
          cout << '0';
        } else {
          int temp = (cnt0 - 1) / 2;
          while (temp--) {
            cout << '1';
            temp--;
          }
          cout << '0';

          temp = (cnt0 - 1) / 2;
          while (temp--) {
            cout << '1';
            temp--;
          }
        }
        i += cnt0;
      } else {
        cout << str[i];
      }
    }
  }
  return 0;
}