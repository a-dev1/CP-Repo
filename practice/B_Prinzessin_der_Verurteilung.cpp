#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int length;
    bool temp = false;
    bool some = false;
    cin >> length;
    string s;
    s.reserve(length);
    cin >> s;

    for (auto i = 'a'; i <= 'z'; i++) {
      size_t found = s.find(i);
      if (found == string::npos) {
        cout << i << endl;
        some = true;
        temp = true;
        break;
      }
    }

    if (!some) {
      for (auto i = 'a'; i <= 'z'; i++) {
        if (temp) break;
        string subString = "";
        subString += i;

        for (auto j = 'a'; j <= 'z'; j++) {
          if (temp) break;
          subString = "";
          subString += i;
          subString += j;
          size_t fo = s.find(subString);
          if (fo == string::npos) {
            cout << subString << endl;
            temp = true;
            break;
          }
        }
      }
    }

    if (!temp) {
      bool iB = false, jB = false, kB = false;
      for (auto i = 'a'; i <= 'z'; i++) {
        if (iB) break;
        for (auto j = 'a'; j <= 'z'; j++) {
          if (jB) break;
          for (auto k = 'a'; k <= 'z'; k++) {
            if (kB) break;
            string substr = "";
            substr += i;
            substr += j;
            substr += k;
            // cout << substr << " ";
            size_t fo = s.find(substr);
            if (fo == string::npos) {
              cout << substr << endl;
              iB = true;
              jB = true;
              kB = true;
              break;
            }
          }
        }
      }
    }
  }

  return 0;
}