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
    if(arr.size() == 1) {
      
    }
    int count = 1, minDiff = abs(arr[0] - arr[1]);
    for (int i = 2; i < n; i++) {
      if (abs(arr[i] - arr[i - 1]) < minDiff)
        minDiff = abs(arr[i] - arr[i - 1]);
      if (n <= 0) {
        count++;
      } else {
        if (arr[i] <= minDiff) {
          count++;
          break;
        }
      }
    }
    cout << count << '\n';
  }
  return 0;
}