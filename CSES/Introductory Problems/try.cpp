#include <cstring>
#include <iostream>
using namespace std;

int main() {
  int t, d, check = 0, rem;
  string n;
  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> d;
    cin >> n;

    for (int j = 0; j < d; j++) {
      if (n[j] == '5' || n[j] == '0') {
        check = 1;
        cout << "Yes" << endl;
        break;
      }
    }
    if (check == 0) {
      cout << "No" << endl;
    }
    check = 0;
  }
  return 0;
}
