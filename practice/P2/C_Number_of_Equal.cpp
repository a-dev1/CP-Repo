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
  ll n, m;
  cin >> n >> m;
  vector<ll> arr1(n);
  vector<ll> arr2(m);
  for (auto &i : arr1) cin >> i;
  for (auto &i : arr2) cin >> i;

  ll i = 0, j = 0, sum = 0;
  ll temp = 0;
  while (i < m) {
    if (i != 0 && i < m && arr2[i] == arr2[i - 1]) {
      sum += temp;
      i++;
      continue;
    }
    temp = 0;
    while (i < m && j < n && arr1[j] <= arr2[i]) {
      if (arr1[j] == arr2[i]) {
        sum += 1;
        temp += 1;
      }
      j++;
    }
    i++;
  }
  cout << sum << '\n';
  return 0;
}