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
    int D, d, P, Q, total = 0, lastTerm = 0, k;
    cin >> D >> d >> P >> Q;

    k = (D / d) - 1;
    // cout << "k:" << k << endl;
    if (D % d != 0) {
      // lastTerm = ((k + 1) * Q * d) / 2;
      lastTerm = (k + 1) * Q;
    }
    // cout << "lastTerm:" << lastTerm << endl;
    total = (D * P) + (Q * d) * ((k * (k + 1)) / 2);
    // cout << "total:" << total << endl;
    cout << (total + lastTerm) << endl;
  }
  return 0;
}