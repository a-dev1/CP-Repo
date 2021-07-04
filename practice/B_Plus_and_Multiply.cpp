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
    ll n, a, b;
    cin >> n >> a >> b;

    if (n % a == 0 || n % b == 0) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }

    // ans ? cout << "Yes\n" : cout << "No\n";
    // for (auto it = s.begin(); it != s.end(); it++) cout << *it << " ";
  }
  return 0;
}