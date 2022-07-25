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
  ll tc;
  cin >> tc;
  while (tc--) {
    ll n, x, t, sum = 0, jump = 0;
    cin >> n >> x >> t;
    jump = min((t / x), n);
    cout << ((n - jump) * jump) + (((jump - 1) * (jump)) / 2) << endl;
  }
  return 0;
}