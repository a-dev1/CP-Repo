#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
#define ll long long
bool is_possible(vector<ll>& v, double mid, ll n, ll rope) {
  ll count = 0;
  for (int i = 0; i < n; i++) {
    ll res = v[i] / mid;
    count += res;
  }
  return count >= rope;
}
int main() {
  ll n, rope;
  cin >> n >> rope;
  vector<ll> v(n);
  for (auto& x : v) cin >> x;
  double a = *max_element(v.begin(), v.end());
  double low = 0, high = a, ans = 0;

  for (int i = 0; i < 100; i++) {
    double mid = low + (high - low) / 2;
    if (is_possible(v, mid, n, rope)) {
      ans = mid;
      low = mid;
    } else {
      high = mid;
    }
  }

  cout << fixed << setprecision(1);
  cout << ans << '\n';
  return 0;
}