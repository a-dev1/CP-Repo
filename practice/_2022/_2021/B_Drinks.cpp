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
  double n, sum = 0.0;
  cin >> n;
  vector<double> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i] / 100;
  }
  cout << (sum / n) * 100;

  return 0;
}