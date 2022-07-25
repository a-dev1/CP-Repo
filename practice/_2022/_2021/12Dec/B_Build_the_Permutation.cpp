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
    int n, hill, valley;
    cin >> n >> hill >> valley;
    vector<int> arr(n);

    int maximum = max(hill, valley);
    int minimum = abs((hill + valley) - maximum);
    int elementRequired = (maximum * 2) + 1;

    if (n < elementRequired) {
      cout << -1 << '\n';
      continue;
    }

    if (hill == 0 && valley == 0) {
      for (int i = 1; i <= n; i++) {
        cout << i << " ";
      }
      cout << '\n';
      continue;
    }

    if (maximum - 1 > minimum) {
      cout << -1 << '\n';
      continue;
    }

    int temp = maximum, value = n;

    if (hill == valley) {
      value = (hill * 2) + 2;
      temp += 1;
    }

    if (maximum == hill || hill == valley) {
      for (int i = 0; (i < n && temp > 0); i++) {
        if (i % 2 != 0) {
          arr[i] = value;
          value--;
          temp--;
        }
      }

      for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
          if (value > 0) {
            cout << value << " ";
            value--;
          }
        } else {
          cout << arr[i] << " ";
        }
      }

      if (hill == valley) {
        for (int i = n; i >= (hill * 2) + 3; i--) {
          cout << i << " ";
        }
      }
    } else {
      int cnt = 1;
      for (int i = 0; i < n && cnt <= maximum; i++) {
        if (i % 2 != 0) {
          arr[i] = cnt;
          cnt++;
        }
      }
      for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
          cout << cnt << " ";
          cnt++;
        } else {
          cout << arr[i] << " ";
        }
      }
    }
    cout << '\n';
  }
  return 0;
}
