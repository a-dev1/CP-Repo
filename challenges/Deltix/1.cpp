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
    int n, m, i;
    string input, op;
    cin >> n >> m;
    cin >> input;
    op = input;

    for (int j = 0; j < m; j++) {
      if (input[1] == '1') {
        op[0] = '1';
      }
      if (input[n - 2] == '1') {
        op[n - 1] = '1';
      }

      for (i = 1; i < (n - 1); i++) {
        if (input[i] != '1') {
          if (input[i + 1] == '1' && input[i - 1] == '1') {
          } else if (input[i + 1] == '1') {
            op[i] = '1';
          } else if (input[i - 1] == '1') {
            op[i] = '1';
          }
        }
      }
      input = op;
    }

    cout << input << endl;
  }
  return 0;
}

// 01000000001->11111001111 0110100101 -> 1110111101 10101 -> 10101