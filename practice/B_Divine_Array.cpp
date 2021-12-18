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

const long long MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  long long tc;
  cin >> tc;
  while (tc--) {
    long long n;
    map<long long, long long> m;
    cin >> n;
    vector<long long> arr(n);
    for (auto &i : arr) {
      cin >> i;
    }

    long long q;
    cin >> q;

    while (q--) {
      long long x, k;  // kth step Transformation
      cin >> x >> k;

      long long temp = min(k, n);

      while (temp--) {
        m.clear();

        for (auto i : arr) m[i]++;

        for (long long i = 0; i < n; i++) {
          arr[i] = m[arr[i]];
        }
      }

      for (auto i : arr) cout << i << " ";
      cout << "\n";
      cout << arr[--x] << '\n';
    }
  }
  return 0;
}