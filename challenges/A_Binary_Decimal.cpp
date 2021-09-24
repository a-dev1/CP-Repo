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
    int max = 1;
    while (n > 0) {
      int temp = n % 10;
      if (temp > max) max = temp;
      n = n / 10;
    }
    cout << max << "\n";
  }
  return 0;
}