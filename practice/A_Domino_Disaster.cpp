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

  #define ar array
  #define ll long long

  const int MAX_N = 1e5 + 1;
  const ll MOD = 1e9 + 7;
  const ll INF = 1e9;

  int main() {
    int tc;
    cin >> tc;
    while (tc--) {
      int n;
      cin >> n;
      string input;
      cin >> input;
      int len = input.length();
      // cout << "len:" << len << endl;
      for (int i = 0; i < len; i++) {
        if (input[i] == 'U') {
          cout << "D";
        } else if (input[i] == 'D') {
          cout << "U";
        } else if (input[i] == 'L' && input[i + 1] == 'R') {
          cout << "L"
              << "R";
          i++;
        }
      }
      cout << "\n";
    }
    return 0;
  }