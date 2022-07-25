#include <stdio.h>

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  // crewx123---------------------------------------------------<START>
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, x;
    cin >> n >> x;
    x = min(x, 26);
    string str = "";
    if (x == 1) {
      for (int i = 0; i < n; i++) cout << 'a';
    } else if (x > n)
      cout << -1;
    else {
      int ascii_value = 67;
      for (int i = 0; i < (n / 2); i++) {
        str = str + char(ascii_value);
        ascii_value++;
      }
      string temp = str;
      reverse(temp.begin(), temp.end());

      // string str_rev = reverse(str.begin(), str.end());
      if (n % 2 != 0) {
        str = str + 'z' + str_rev;
      } else {
        str = str + str_rev;
      }
      if (str == reverse(str.begin(), str.end()))
        cout << str;
      else
        cout << -1;
    }
    cout << endl;
  }
  return 0;
}