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
  int x1, x2, y1, y2, x3, y3, x4, y4;

  cin >> x1 >> y1 >> x2 >> y2;

  int diffX, diffY;
  diffX = x2 - x1;
  diffY = y2 - y1;

  if (abs(diffX) == abs(diffY)) {
    x3 = x1;
    y3 = y2;
    x4 = x2;
    y4 = y1;
    cout << x3 << " " << y3 << " " << x4 << " " << y4;
  } else if (diffX == 0) {
    x3 = x1 + diffY;
    y3 = y1;
    x4 = x2 + diffY;
    y4 = y2;
    cout << x3 << " " << y3 << " " << x4 << " " << y4;
  } else if (diffY == 0) {
    x3 = x2;
    y3 = y1 + diffX;
    x4 = x1;
    y4 = y1 + diffX;
    cout << x3 << " " << y3 << " " << x4 << " " << y4;
  } else {
    cout << -1;
  }
  return 0;
}