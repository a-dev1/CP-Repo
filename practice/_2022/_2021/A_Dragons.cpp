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

bool sortbysec(pair<int, int> &a, pair<int, int> &b) {
  // if (a.first != b.first) return a < b;
  return (a.second < b.second);
}
// bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) {
//   return (a.second < b.second);
// }

int main() {
  int s, n;
  cin >> s >> n;
  vector<pair<int, int>> arr(n);
  for (int i = 0; i < n; i++) cin >> arr[i].first >> arr[i].second;
  // for (auto i : arr) cin >> i.first >> i.second;

  sort(arr.begin(), arr.end(), sortbysec);

  bool ans = true;
  for (int i = 0; i < n; i++) {
    if (arr[i].first < s)
      s += arr[i].second;
    else
      ans = false;
    if (!ans) break;
  }

  if (ans)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}