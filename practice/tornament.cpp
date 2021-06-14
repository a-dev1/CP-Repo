#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, i;
  cin >> n;
  vector<int> numbers(n + 1, 0);
  vector<pair<int, int>> matches;

  for (i = 0; i < ((n * (n - 1)) / 2) - 1; i++) {
    int a, b;
    cin >> a >> b;
    numbers[a] += 1;
    numbers[b] += 1;
    if (a) matches.push_back(make_pair(a, b));
  }

  vector<int> winner;

  for (i = 1; i <= n; i++) {
    if (numbers[i] == n - 2) {
      winner.push_back(i);
    }
  }
  int aWinCount = 0, bWindCount = 0;

  for (i = 0; i < ((n * (n - 1)) / 2) - 1; i++) {
    if (matches[i].first == winner[0]) {
      aWinCount++;
    } else if (matches[i].first == winner[1]) {
      bWindCount++;
    }
  }

  aWinCount == bWindCount  ? cout << winner[0] << " " << winner[1]
  : aWinCount > bWindCount ? cout << winner[0] << " " << winner[1]
                           : cout << winner[1] << " " << winner[0];

  return 0;
}