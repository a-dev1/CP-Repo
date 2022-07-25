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
    jump = t / x;
    // cout << "Jump" << jump << endl;
    cout << "bpi" << ((jump * (jump + 1)) / 2) << endl;
    cout << ((n - jump) * jump) + jump << endl;
  }
  return 0;
}