#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  int n;
  cin >> n;
  map<int, int> leftMap;
  map<int, int> rightMap;
  for (int i = 0; i < n; i++) {
    int left, right;
    cin >> left >> right;
    ++leftMap[left];
    ++rightMap[right];
  }
  // for (auto i : leftMap) cout << i.first << i.second << endl;
  // for (auto i : rightMap) cout << i.first << i.second << endl;

  int ans = 0;
  if (leftMap[0] < leftMap[1])
    ans += leftMap[0];
  else
    ans += leftMap[1];

  if (rightMap[0] < rightMap[1])
    ans += rightMap[0];
  else
    ans += rightMap[1];

  cout << ans;
  return 0;
}