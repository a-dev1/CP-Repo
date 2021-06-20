#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, ans = 0;
    cin >> n;
    // vector<int> arr(n);
    set<int> all;
    for (int i = 1; i <= n; i++) {
      int temp;
      cin >> temp;
      if (temp <= 7) all.insert(temp);
      ans = i;
      if (all.size() == 7) {
        ans = i;
        // cout << "it broked i: " << i << endl;
        break;
      }
    }
    cout << ans << endl;
  }
  return 0;
}