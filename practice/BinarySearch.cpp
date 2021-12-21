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

int arr[] = {};

bool binarySearch(int x, int low, int high) {
  int middle = high + low / 2;
  cout << "low:" << low << endl;
  cout << "high:" << high << endl;
  if (arr[middle] == x) {
    return true;
  }
  if (low + 1 == high || low == high) {
    cout << "this rannn\n";
    if (arr[low] == x || arr[high] == x)
      return true;
    else
      return false;
  }
  if (arr[middle] < x) {
    binarySearch(x, middle + 1, high);
  } else {
    binarySearch(x, low, middle - 1);
  }
}

int main() {
  int n;
  cin >> n;
  arr[n];
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    arr[i] = temp;
  }

  sort(arr, arr + n);

  for (int i = 0; i < n; i++) cout << "arr[i]" << arr[i] << endl;
  // cout << binarySearch(4, 0, n - 1);
  int jj = n;
  while (jj--) {
    int toFind;
    cout << "Enter element: ";
    cin >> toFind;
    if (binarySearch(toFind, 0, n - 1))
      cout << "fond\n";
    else
      cout << "no\n";
  }

  // for (auto i : arr) cout << "i:" << i << endl;
  return 0;
}