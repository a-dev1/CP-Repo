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
#define int long long

bool binarySearch(int n, vector<int> &arr) {
  int l = 0, r = arr.size() - 1, mid;
  while (r >= l) {
    mid = (l + r) / 2;
    if (arr[mid] == n) return true;
    if (arr[mid] > n) {
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  cout << "l:" << l << endl;
  cout << "r:" << r << endl;
  return false;
}

signed main() {
  int n, t;
  cin >> n >> t;
  vector<int> arr(n);
  vector<int> elements(t);
  for (auto &i : arr) cin >> i;
  for (auto &i : elements) cin >> i;

  for (int i = 0; i < t; i++) {
    if (binarySearch(elements[i], arr))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}