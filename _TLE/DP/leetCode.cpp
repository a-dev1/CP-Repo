// C++ program to count number of arrays
// of size n such that every element is
// in range [1, m] and adjacent are
// divisible
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

int numofArray(int n, int m) {
  int dp[MAX][MAX];

  // For storing factors.
  vector<int> di[MAX];

  // For storing multiples.
  vector<int> mu[MAX];

  memset(dp, 0, sizeof dp);
  memset(di, 0, sizeof di);
  memset(mu, 0, sizeof mu);

  // calculating the factors and multiples
  // of elements [1...m].
  for (int i = 1; i <= m; i++) {
    for (int j = 2 * i; j <= m; j += i) {
      di[j].push_back(i);
      mu[i].push_back(j);
    }
    di[i].push_back(i);
  }

  // Initialising for size 1 array for
  // each i <= m.
  for (int i = 1; i <= m; i++) dp[1][i] = 1;

  // Calculating the number of array possible
  // of size i and starting with j.
  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      dp[i][j] = 0;

      // For all previous possible values.
      // Adding number of factors.
      for (auto x : di[j]) dp[i][j] += dp[i - 1][x];

      // Adding number of multiple.
      for (auto x : mu[j]) dp[i][j] += dp[i - 1][x];
    }
  }

  // Calculating the total count of array
  // which start from [1...m].
  int ans = 0;
  for (int i = 1; i <= m; i++) {
    ans += dp[n][i];
    di[i].clear();
    mu[i].clear();
  }

  return ans;
}

// Driven Program
int main() {
  int n = 3, m = 3;
  cout << numofArray(n, m) << "\n";
  return 0;
}