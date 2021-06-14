#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int a, b, atotal, btotal, total;
    cin >> a >> b >> atotal >> btotal;
    total = (atotal / a) + (btotal / b);
    cout << total << endl;
  }
  return 0;
}