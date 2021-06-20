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
  int n, sum = 0, max;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int enter, exit;
    cin >> exit >> enter;
    if (i == 0) {
      max = enter;
      sum += enter;
    } else {
      sum += (enter - exit);
      if (sum > max) max = sum;
    }
  }
  cout << max;

  return 0;
}