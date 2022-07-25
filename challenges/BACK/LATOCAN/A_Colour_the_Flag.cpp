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
    bool ans = true;
    int n, m;
    cin >> n >> m;
    vector<vector<char>> matrix(n, vector<char>(m, '.'));
    vector<vector<char>> ans1(n, vector<char>(m, '.'));
    vector<vector<char>> ans2(n, vector<char>(m, '.'));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> matrix[i][j];
      }
    }

    bool temp = true, temp1 = true, temp2 = true;
    for (int i = 0; i < n; i++) {
      if (m != 1) {
        temp = !temp;
      }
      for (int j = 0; j < m; j++) {
        ans1[i][j] = (temp) ? 'R' : 'W';
        ans2[i][j] = (temp) ? 'W' : 'R';
        temp = !temp;
      }
    }

    // cout << "Ans1:" << endl;
    // for (int i = 0; i < n; i++) {
    //   for (int j = 0; j < m; j++) {
    //     cout << ans1[i][j];
    //   }
    //   cout << endl;
    // }
    // cout << "Ans2:" << endl;
    // for (int i = 0; i < n; i++) {
    //   for (int j = 0; j < m; j++) {
    //     cout << ans2[i][j];
    //   }
    //   cout << endl;
    // }

    int answer = 0;
    for (int i = 0; i < n; i++) {
      if (!temp1) break;
      for (int j = 0; j < m; j++) {
        if (matrix[i][j] != '.' && (matrix[i][j] == ans1[i][j])) {
          answer = 1;
        } else if (matrix[i][j] != '.' && (matrix[i][j] != ans1[i][j])) {
          answer = 0;
          temp1 = false;
          break;
        }
      }
    }
    if (answer == 0) {
      for (int i = 0; i < n; i++) {
        if (!temp2) break;
        for (int j = 0; j < m; j++) {
          if (matrix[i][j] != '.' && (matrix[i][j] == ans2[i][j])) {
            answer = 2;
          } else if (matrix[i][j] != '.' && (matrix[i][j] != ans2[i][j])) {
            answer = 0;
            temp2 = false;
            break;
          }
        }
      }
    }

    if (answer == 0)
      cout << "NO" << endl;
    else if (answer == 1) {
      cout << "YES" << endl;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          cout << ans1[i][j];
        }
        cout << endl;
      }
    } else {
      cout << "YES" << endl;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          cout << ans2[i][j];
        }
        cout << endl;
      }
    }

    // if (ans) {

    // }
  }

  return 0;
}