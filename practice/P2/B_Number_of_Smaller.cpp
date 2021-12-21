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

  int prevJ = 0, lessCount = 0;
  for (int i = 0; i < m; i++) {
    for (int j = prevJ; j < n && (prevJ != n - 1); j++) {
      prevJ = j;
      if (arr1[j] < arr2[i]) {
        lessCount++;
        while (j > n && arr1[j] == arr1[i + 1]) {
          lessCount++;
          j++;
        }
      } else
        break;
    }
    cout << lessCount << " ";
  }
  return 0;
}