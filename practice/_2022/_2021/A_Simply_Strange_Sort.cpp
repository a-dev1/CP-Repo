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
    vector<int> sortedArr(n);
    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      arr[i] = temp;
      sortedArr[i] = temp;
    }
    sort(sortedArr.begin(), sortedArr.end());
    int answer = 0;
    int isSolved = false;
    for (int i = 0; i < n; i++) {
      if (isSolved) break;
      for (int j = 0; j < n - 1; j++) {
        if (arr[j] > arr[j + 1]) {
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
          answer++;
          j++;
        }
      }
      for (int k = 0; k < n; k++) {
        if (arr[k] != sortedArr[k]) {
          break;
        }
        if (k == n - 1) {
          if (i == 0)
            cout << 0 << "\n";
          else
            cout << i + 1 << "\n";
          isSolved = true;
          break;
        }
      }
      for (auto i : arr) cout << i << " ";
    }
    // cout << answer << "\n";
  }
  return 0;
}