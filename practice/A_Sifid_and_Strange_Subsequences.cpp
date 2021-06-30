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
    // bool temp = true;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int count = 1;
    for (int i = 1; i < n; i++) {
      int max = arr[i];
      if (arr[i] == 0 && arr[i - 1] == 0) {
        count++;
        i++;
        while (true) {
          if (arr[i] == 0 && arr[i - 1] == 0) {
            count++;
            i++;
          } else
            break;
        }
      } else if (arr[i] == arr[i - 1]) {
        // cout << "count: " << count << endl;
        if (i == 1) {
          count++;
          i++;
          while (true) {
            if (arr[i] == arr[i - 1]) {
              count++;
              i++;
            } else
              break;
          }
        } else {
          break;
        }
      } else {
        if (abs(arr[i] - arr[i - 1]) < max) {
          break;
        } else {
          count++;
        }
      }
    }
    cout << count << '\n';
  }
  return 0;
}