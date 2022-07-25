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
    ll order, n;
    cin >> n;
    for (ll i = 1; i <= 100000; i++) {
      if (n <= i * i) {
        order = i;
        break;
      }
    }

    ll start, end;
    start = pow((order - 1), 2) + 1;
    end = order * order;

    // ll bignumber = 1000000000;
    // cout << "bignumber:" << bignumber << endl;
    // cout << "order:" << order << endl;
    // cout << "start:" << start << endl;
    // cout << "end:" << end << endl;

    if ((start + order - 1) - n >= 0) {
      cout << abs(start - n) + 1 << " " << order << "\n";
    } else {
      cout << order << " " << (order * order) - n + 1 << "\n";
    }
  }
  return 0;
}