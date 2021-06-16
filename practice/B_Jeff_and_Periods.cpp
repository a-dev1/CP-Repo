#include <algorithm>
#include <cmath>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n + 1);
  unordered_map<int, pair<int, int>> m;
  // unordered_map<int, pair<int, int>> answer;

  // auto ptr = collection.begin();

  for (int i = 1; i <= n; i++) {
    cin >> nums[i];
    int num = nums[i];
    // first => preIndex, second = diff
    if (m.find(num) == m.end()) {
      m[num].first = i;
      m[num].second = -1;
    } else {
      if (m[num].second == -1) {
        m[num].second = i - m[num].first;
      } else {
        if (m[num].second != abs(i - m[num].second)) {
          m[num].second = -2;
        }
      }
    }
  }

  for (auto i : m) {
    cout << i.first << " " << i.second.first << " " << i.second.second;
    cout << endl;
  }

  return 0;
}