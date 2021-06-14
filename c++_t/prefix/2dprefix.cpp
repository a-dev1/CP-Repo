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
const int N = 1e3 + 10;
ll pf[N][N];

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      int temp;
      cin >> temp;
      pf[i][j] = temp + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << pf[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}