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

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// // Sort by first no.
// bool sortPair(pair<int, int>& a, pair<int, int>& b) {
//   if (a.first != b.first) return a < b;
//   return a.second < b.second;
// }

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i].first >> arr[i].second;
  sort(arr.begin(), arr.end(), sortPair);

  for (auto i : arr) cout << i.first << " " << i.second << endl;
  return 0;
}