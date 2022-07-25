#include <algorithm>
#include <cmath>
#include <ext/pb_ds/assoc_container.hpp>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#define all(x) (x).begin(), (x).end()

using namespace __gnu_pbds;
using namespace std;

using ull = unsigned long long;
using ll = long long;
using ld = long double;
template <typename T>
using ordered_set =
    tree<T, null_type, less<>, rb_tree_tag, tree_order_statistics_node_update>;

const int mod = 1e9 + 7;
const int inf = INT_MAX;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int best = 0;
    for (int sum = 2; sum <= 2 * n; sum++) {
      int cur = 0;
      vector<bool> visited(n);

      for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
          if (!visited[i] and !visited[j] and a[i] + a[j] == sum) {
            visited[i] = visited[j] = true;
            cur++;
          }
        }
      }
      best = max(best, cur);
    }

    cout << best << "\n";
  }
  return 0;
}