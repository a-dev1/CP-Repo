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
    int n;
    cin >> n;
    vector<string> sentence;

    for (int i = 0; i < n; i++) {
      string temp;
      cin >> temp;
      sentence.push_back(temp);
    }
    int main_answer = 0;
    int count = 1;

    // Loop Through each Word
    for (auto word : sentence) {
      if (!count) break;
      int lang = (word[0] >= 91) ? 1 : 2;
      char start = word[0];

      // LOOp Through each character
      for (int c : word) {
        if ((c >= 91 && c <= 109) || (c >= 78 && c <= 90)) {
          if (c != start) {
            int cd = (c >= 91) ? 1 : 2;
            if (cd != lang) {
              cout << "NO" << endl;
              main_answer = 0;

              count = 0;
              break;
            } else {
              main_answer = 1;
            }
          } else {
            if ((word.length()) == 1) {
              main_answer = 1;
              break;
            }
          }
        } else {
          cout << "NO" << endl;
          main_answer = 0;
          count = 0;
          break;
        }
      }
    }

    if (main_answer) cout << "YES" << endl;
  }
  return 0;
}
