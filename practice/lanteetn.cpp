#include <stdio.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const double MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  double n, i, l;
  vector<double> num;
  cin >> n;
  cin >> l;
  for (i = 0; i < n; i++) {
    double temp;
    cin >> temp;
    num.push_back(temp);
  }

  double majordiff = 0;

  sort(begin(num), end(num));

  double diff = 0;
  double startdiff = num[0];
  double enddiff = l - num[n - 1];
  for (i = 0; i < n; i++) {
    if (i != n - 1) {
      diff = num[i + 1] - num[i];
      // cout << "diff:" << diff << endl;
      diff > majordiff ? majordiff = diff : diff = diff;
    }
  }

  majordiff = majordiff / (double)2.0;
  // cout << majordiff;

  if (startdiff > majordiff) {
    printf("%0.9lf\n", startdiff);
  } else if (enddiff > majordiff) {
    printf("%0.9lf\n", enddiff);
  } else {
    printf("%0.9lf\n", majordiff);
  }

  return 0;
}