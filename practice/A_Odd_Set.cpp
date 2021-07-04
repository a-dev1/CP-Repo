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
    ll oddct = 0, evenct = 0;
    vector<ll> arr(n * 2);
    for (ll i = 0; i < n * 2; i++) {
      cin >> arr[i];
      if (arr[i] % 2 == 0) {
        evenct++;
      } else {
        oddct++;
      }
    }
    if (evenct == n && oddct == n)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}