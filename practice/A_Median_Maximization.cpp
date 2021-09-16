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
    int s, n;
    cin >> n >> s;
    int position = (n + 1) / 2;
    if (position > s) {
      cout << 0 << "\n";
    } else
      cout << s / (n - position + 1) << "\n";
  }
  return 0;
}