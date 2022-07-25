#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int n = s.length() - 1;
    char c = s[0];
    char ch = s[n];
    char d = s[1];
    bool flag = false;
    if (c != '<' || ch != '>' || d != '/') {
      flag = true;
    }

    if (n == 2) {
      cout << "Error" << endl;
    } else {
      for (int i = 2; i <= n - 1; i++) {
        if (isalpha(s[i])) {
          if (islower(s[i]))
            continue;
          else {
            flag = true;
            break;
          }
        } else {
          if (isdigit(s[i]))
            continue;
          else {
            flag = true;
            break;
          }
        }
      }

      flag == true ? cout << "Error\n" : cout << "Success\n";
    }
  }
}