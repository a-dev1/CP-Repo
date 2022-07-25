#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
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

// Print the queue
void showq(queue<int> gq) {
  vector<int> ans;
  queue<int> g = gq;
  while (!g.empty()) {
    // cout << '\t' << g.front();
    ans.push_back(g.front());
    g.pop();
  }
  for (int i = ans.size() - 1; i >= 0; i--) {
    cout << ans[i] << " ";
  }
  cout << '\n';
}

int main() {
  // int tc;
  // cin >> tc;
  // while (tc--) {
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (auto &i : arr) cin >> i;

  queue<int> q;
  map<int, int> m;
  int ans = 0;

  for (int i = 0; i < n; i++) {
    if (q.size() <= k - 1) {
      if (m.size() > 0 && m.count(arr[i])) {
        continue;
      }
      // cout << "push\n";
      q.push(arr[i]);
      m[arr[i]]++;
      ans++;
      // cout << "q.size():" << q.size() << endl;
    } else {
      if (m.count(arr[i])) {
        continue;
      }
      m.erase(q.front());
      q.pop();
      q.push(arr[i]);
      ans++;
      m[arr[i]]++;
    }
  }
  // cout << "size: " << q.size() << '\n';
  // reverse(q.begin(), q.end());
  cout << m.size() << '\n';
  showq(q);
  // }
  return 0;
}