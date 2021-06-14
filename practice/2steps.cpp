#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int min = (n / 2) + (n % 2);
  int max = n;
  bool temp = true;

  for (int i = min; i <= max; i++) {
    if (i % m == 0) {
      cout << i;
      temp = false;
      break;
    }
  }
  if (temp) cout << -1;
  return 0;
}