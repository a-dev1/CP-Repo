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
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int ans = 1;
    bool temp = true;
    for (int i = 1; i < n; i++) {
      if (temp) {
        if ((arr[i] == arr[i - 1]) && arr[i] != 0) {
          break;
        } else if (arr[i] == 0 && arr[i - 1] == 0) {
          ans++;
          i++;
          while (i < n) {
            if (arr[i] == 0) {
              ans++;
              i++;
            } else {
              temp = false;
              break;
            }
          }
          // cout << "You got me" << i << endl;
        } else {
          if (abs(arr[i] - arr[i - 1]) >= arr[i]) {
            ans++;
          } else
            break;
        }
      }
    }
    if (arr.size() == 1) {
      cout << 1 << endl;
    } else
      cout << ans << endl;
  }
  return 0;
}