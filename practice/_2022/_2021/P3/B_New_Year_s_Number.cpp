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
#define ll long long

const ll MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  ll tc;
  cin >> tc;
  while (tc--) {
    ll n;
    cin >> n;
    if (n % 2021ll == 0ll || n % 2020ll == 0ll) {
      cout << "YESs\n";
      continue;
    }
    ll a_2020 = (n / 2020);
    cout << "a_2020:" << a_2020 << endl;
    ll a_2021 = (n - (a_2020 * 2020));
    if (a_2021 % 2021 == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
    // cout << a_2021 << '\n';
  }
  return 0;
}