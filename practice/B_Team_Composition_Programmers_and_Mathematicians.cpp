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
    int a, b, sum, less;
    cin >> a >> b;
    if (a > b)
      less = b;
    else
      less = a;

    int maximum = (a + b) / 4;
    // cout << "maximum:" << maximum << endl;
    // cout << "less:" << less << endl;
    cout << min(maximum, less) << '\n';
  }
  return 0;
}