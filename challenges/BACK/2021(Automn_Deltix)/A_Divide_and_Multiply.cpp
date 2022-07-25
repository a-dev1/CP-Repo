#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

#define ar array
#define ll long long

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> arr(n);
    int k = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      while (arr[i] % 2 == 0) {
        arr[i] /= 2;
        k += 1;
      }
    }
    
    sort(arr.begin(), arr.end());
    for (int i = 0; i < k; i++) {
      arr.back() *= 2;
    }
    cout << accumulate(arr.begin(), arr.end(), 0LL) << '\n';
  }
  return 0;
}