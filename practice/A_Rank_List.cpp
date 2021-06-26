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

bool extra(pair<int, int> &a, pair<int, int> &b) {
  if (a.first == b.first) {
    return a.second < b.second;
  }
  return (a.first > b.first);
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i].first;
    cin >> arr[i].second;
  }

  sort(arr.begin(), arr.end(), extra);

  // cout << "---------\n";
  vector<int> result(n + 10, 0);

  int j = 0;
  for (int i = 0; i < n; i++) {
    // cout << arr[i].first << " " << arr[i].second << endl;
    if (i != n - 1) {
      if (arr[i].first == arr[i + 1].first &&
          arr[i].second == arr[i + 1].second) {
        result[j]++;
      } else {
        result[j]++;
        j++;
      }
    } else {
      if (arr[i].first == arr[i - 1].first &&
          arr[i].second == arr[i - 1].second) {
        result[j]++;
      } else {
        j++;
        result[j]++;
      }
    }
  }
  if (n == 1) {
    cout << 1;
  } else {
    int sum = 0;
    for (auto i : result) {
      sum += i;
      // cout << "i:" << i << endl;
      // cout << "sum:" << sum << endl;
      if (k <= sum) {
        cout << i;
        break;
      }
    }
  }
  return 0;
}