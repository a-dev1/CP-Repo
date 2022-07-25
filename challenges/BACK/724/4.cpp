
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
    // cout << s << endl;

    // if (s.length() == 1) {
    //   char c = s.back();
    //   cout << (char)(((int)c) + 1) << endl;
    // } else {
    for (auto i = 'a'; i <= 'z'; i++) {
      size_t found = s.find(i);
      if (found == string::npos) {
        cout << i << endl;
        some = true;
        break;
      }
    }

    if (!some) {
      for (auto i = 'a'; i <= 'z'; i++) {
        if (temp) break;
        // Print the alphabet
        // cout << i << " ";
        string subString = "";
        subString += i;

        // cout << "i:" << i << endl;
        for (auto j = 'a'; j <= 'z'; j++) {
          subString = "";
          subString += i;
          subString += j;
          // cout << subString << " ";
          size_t fo = s.find(subString);
          if (fo == string::npos) {
            cout << subString << endl;
            temp = true;
            break;
          }
        }
      }
    }
    // }
  }

  return 0;
}