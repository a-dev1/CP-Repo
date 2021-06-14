#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, m;
  bool toggle = false;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    int setter = 0;
    for (int j = 1; j <= m; j++) {
      if (i % 2 != 0) {
        cout << "#";
      } else {
        if (setter == 0) {
          if (j == 1 && toggle) {
            cout << "#";
            toggle = false;
            setter++;
          } else if (j == m && (!toggle)) {
            cout << "#";
            toggle = true;
            setter++;
          } else {
            cout << ".";
          }
        } else {
          cout << ".";
        }
      }
    }
    cout << endl;
  }
  return 0;
}

// 10 6 8 11
