#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> matrix[i][j];
      }
    }

    // for (int i = n - 1; i > -1; i--) {
    //   for (int j = 0; j < m; j++) {
    //     matrix[i][j];
    //   }
    //   cout << endl;
    // }

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (j < n - 1) {
          matrix[0][i] = (matrix[0][i] ^ matrix[j + 1][i]);
        }
      }
    }

    // for (size_t i = 0; i < m; i++) {
    //   cout << matrix[0][i] << "-";
    // }
    // cout << endl;

    int ans;
    for (int i = 0; i < m; i++) {
      if (i == 0) {
        ans = matrix[0][i] ^ matrix[0][i + 1];
        i++;
        continue;
      }
      ans = ans ^ matrix[0][i];
    }

    // cout << "ans: " << ans << endl;
    if (ans) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}