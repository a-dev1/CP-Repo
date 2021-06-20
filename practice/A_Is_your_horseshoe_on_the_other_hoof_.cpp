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
  map<int, int> m;
  for (int i = 0; i < 4; i++) {
    int n;
    cin >> n;
    ++m[n];
  }
  int ans = 0;
  for (auto i : m) {
    if (i.second != 0) ans += i.second - 1;
  }
  cout << ans;
  return 0;
}