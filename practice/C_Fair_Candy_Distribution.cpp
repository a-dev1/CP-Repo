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
  ll n, k;
  cin >> n >> k;
  vector<ll> arr(n);
  map<ll, ll> m;

  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
    m[arr[i]] = 0;
  }

  for(int i = 0; i < n; i++) {
    if(i % 3 == 0) {
      cout << arr[i] << "\n";
    }
  }

  int mat1[][];
  int mat2[][];

  for(int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for(int k = 0; k < 3; k++) {
        
      }
      cout << sum << "\n";
    }
  }
  return 0;
}