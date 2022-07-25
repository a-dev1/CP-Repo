#include <iostream>
using namespace std;
int main() {
  int t;
  int dsa, toc, dm, total;
  int dsa2, toc2, dm2, total2;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> dsa >> toc >> dm;
    cin >> dsa2 >> toc2 >> dm2;
    total = dsa + toc + dm;
    total2 = dsa2 + toc2 + dm2;

    if (total > total2) {
      cout << "DRAGON";
    } else if (total2 > total) {
      cout << "SLOTH";
    } else if (dsa > dsa2) {
      cout << "DRAGON";
    } else if (dsa < dsa2) {
      cout << "SLOTH";
    } else if (toc > toc2) {
      cout << "DRAGON";
    } else if (toc < toc2) {
      cout << "SLOTH";
    } else {
      cout << "TIE";
    }
    cout << endl;
  }
  return 0;
}