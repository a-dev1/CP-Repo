#include <algorithm>
#include <cmath>
#include <iostream>
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
  vector<vector<int>> matrix(5, vector<int>(5, 0));
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
      int a;
      cin >> a;
      if (a == 1) {
        cout << abs(3 - j) + abs(3 - i);
      }
    }
  }

  return 0;
}