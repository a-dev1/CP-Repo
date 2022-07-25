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
  int n, m;
  cin >> n >> m;
  vector<vector<char>> matrix(n, vector<char>(m, ' '));
  vector<vector<char>> answer(n, vector<char>(m, ' '));

  bool temp = true;
  for (int i = 0; i < n; i++) {
    // if (m != 1 && i != 0) 
    temp = !temp;
    for (int j = 0; j < m; j++) {
      cin >> matrix[i][j];
      answer[i][j] = (temp) ? 'W' : 'B';
      temp = !temp;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (matrix[i][j] == '.')
        cout << answer[i][j];
      else
        cout << matrix[i][j];
    }
    cout << endl;
  }

  return 0;
}