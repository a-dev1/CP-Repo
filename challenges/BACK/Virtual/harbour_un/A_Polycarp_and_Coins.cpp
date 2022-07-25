#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define ar array
#define ll long double

const ll MAX_N = 1e9 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  ll tc;
  cin >> tc;
  while (tc--) {
    ll n;
    long long a, b;
    cin >> n;

    b = round(n / 3);
    a = n - 2 * b;

    cout << a << " " << b << "\n";
  }
  return 0;
}