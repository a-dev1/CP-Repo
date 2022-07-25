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
    vector<int> even;
    vector<int> odd;
    for (auto &i : arr) {
      cin >> i;
      if (i % 2 == 0)
        even.push_back(i);
      else
        odd.push_back(i);
    }
    // sort(arr.begin(), arr.end());
    for (int i = 0; i < odd.size(); i++) {
      cout << odd[i] << " ";
    }
    for (int i = 0; i < even.size(); i++) {
      cout << even[i] << " ";
    }
    // cout << '\n';
    // for (int i = 0; i < n; i++) {
    //   if (i < odd.size())
    //     cout << odd[i] << " ";
    //   else {
    //     if (i < even.size()) cout << even[i] << " ";
    //   }
    // }
    cout << '\n';
  }
  return 0;
}