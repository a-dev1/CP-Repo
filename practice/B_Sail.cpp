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
  int t, x1, y1, fx, fy, answer = 0;
  cin >> t >> x1 >> y1 >> fx >> fy;
  string input;
  cin >> input;
  for (auto c : input) {
    if (x1 == fx && y1 == fy) break;
    if (fx > x1 && c == 'E') {
      x1++;
    } else if (fx < x1 && c == 'W')
      x1--;
    else if (fy > y1 && c == 'N')
      y1++;
    else if (fy < y1 && c == 'S')
      y1--;
    answer++;
  }

  if (x1 == fx && y1 == fy) {
    cout << answer;
  } else {
    cout << -1;
  }

  return 0;
}