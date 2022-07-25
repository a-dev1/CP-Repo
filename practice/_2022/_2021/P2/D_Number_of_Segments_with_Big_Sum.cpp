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
  ll n, s;
  cin >> n >> s;
  vector<ll> arr(n);
  for (auto &i : arr) cin >> i;

  ll l = 0, cnt = 0, sum = 0, first = 0;
  for (ll i = 0; i < n; i++) {
    sum += arr[i];
    while (sum >= s && l < i) {
      cnt += (n - i + 1);
      cout << "(n-i+1):" << (n - i + 1) << endl;
      l++;
      // sum = 0;
      // sum += arr[i];
    }
  }
  cout << "l:" << l << endl;
  // if (l == n - 1)
  //   cout << cnt + 1 << endl;
  // else
  cout << cnt << endl;
  return 0;
}