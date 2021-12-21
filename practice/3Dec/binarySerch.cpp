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
ll arr[] = {};

bool binarySearch(ll x, int low, int high) {
  while (low <= high) {
    ll middle = low + (high - low) / 2;
    if (arr[middle] == x)
      return true;
    else if (arr[middle] > x)
      high = middle - 1;
    else
      low = middle + 1;
  }
  return false;
}
int main() {
  int tc;
  cin >> tc;
  arr[tc];
  for (int i = 0; i < tc; i++) {
    ll temp;
    cin >> temp;
    arr[i] = temp;
  }
  sort(arr, arr + tc);
  int temp = tc;

  while (temp--) {
    ll toFind;
    cin >> toFind;
    if (binarySearch(toFind, 0, tc - 1))
      cout << "found\n";
    else
      cout << "not found\n";
    // binarySearch();
  }
  return 0;
}