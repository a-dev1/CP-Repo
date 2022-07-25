#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  int first, second;
  cin >> n;
  first = abs(n % 10);
  second = abs((n / 10) % 10);

  if (n < 0) {
    if (first > second)
      cout << n / 10;
    else {
      cout << ((n / 100) * 10) + (-first);
    }
  } else {
    cout << n;
  }
  if (n == 0) cout << 0;

  return 0;
}
