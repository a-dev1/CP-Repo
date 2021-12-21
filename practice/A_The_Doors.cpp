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
  int n, lastIndex0, lastIndex1;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if (temp == 0) {
      lastIndex0 = i + 1;
    } else
      lastIndex1 = i + 1;
  }

  lastIndex0 <= lastIndex1 ? cout << lastIndex0 << "\n"
                           : cout << lastIndex1 << "\n";

  return 0;
}