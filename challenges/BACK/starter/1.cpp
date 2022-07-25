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
    int x, m, d;

    cin >> x >> m >> d;
    cout << min((x * m), (x + d)) << endl;
  }
  return 0;
}