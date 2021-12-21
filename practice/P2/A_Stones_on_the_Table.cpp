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
  int n;
  cin >> n;
  string str;
  cin >> str;
  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    if (str[i] == str[i + 1]) {
      ans += 1;
    }
  }
  cout << ans << "\n";
  return 0;
}