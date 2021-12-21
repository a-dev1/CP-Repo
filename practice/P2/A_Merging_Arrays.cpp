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
  int n, m;
  cin >> n >> m;
  vector<int> arr1(n);
  vector<int> arr2(m);
  for (auto &i : arr1) cin >> i;
  for (auto &i : arr2) cin >> i;

  int i = 0, j = 0;
  while (i < arr1.size() && j < arr2.size()) {
    if (arr1[i] < arr2[j]) {
      cout << arr1[i] << " ";
      i++;
    } else {
      cout << arr2[j] << " ";
      j++;
    }
  }
  if (i < n) {
    while (i < n) {
      cout << arr1[i] << " ";
      i++;
    }
  } else if (j < m) {
    while (j < m) {
      cout << arr2[j] << " ";
      j++;
    }
  }
  return 0;
}