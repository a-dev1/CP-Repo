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
    int a, b, c, m;
    cin >> a >> b >> c >> m;

    vector<int> arr{a, b, c};
    sort(arr.begin(), arr.end());

    int min, max;
    max = a + b + c - 3;
    min = arr[2] - arr[1] - arr[0] - 1;

    if (m <= max && m >= min)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}