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
    int a, b;
    cin >> a >> b;
    if ((min(a, b) * 2) < max(a, b)) {
      // cout << "this one: " << '\n';
      cout << pow(max(a, b), 2) << '\n';
    } else
      cout << pow(min(a, b) * 2, 2) << '\n';
  }
  return 0;
}