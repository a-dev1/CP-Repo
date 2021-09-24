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
    int n, k;
    unordered_map<int, int> mp;
    unordered_map<int, int> mp2;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &i : arr) {
      cin >> i;
      mp[i]++;
    }
    int otherCount = 0;
    // for (auto i : mp) cout << i.first << " " << i.second << "\n";
    for (auto i : mp) {
      if (i.second >= k) {
        mp2[i.first] = k;
      } else {
        otherCount += i.second;
      }
    }

    otherCount /= k;
    // otherCount--;

    int count = k;

    for (int i = 0; i < n; i++) {
      if (mp[arr[i]] > 0 && mp[arr[i]] < k) {
        if (count == 0) {
          count = k;
          otherCount--;
        }
        if (otherCount == 0) {
          cout << 0 << " ";
          continue;
        }
        cout << count << " ";
        count--;
      } else {
        cout << mp2[arr[i]] << " ";
        if (mp2[arr[i]] > 0) mp2[arr[i]]--;
      }
    }
    cout << "\n";
  }
  return 0;
}