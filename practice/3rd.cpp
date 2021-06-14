#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, m, b;
  float a;

  cin >> n >> m >> a >> b;

  if (a > (b / m)) {
    int amount;
    amount = (n / m) * b;
    amount += (n % m) * a;
    cout << amount;
  } else {
    cout << (n * a);
  }
  return 0;
}

// 6 3 2 3
// 10 3 5 1