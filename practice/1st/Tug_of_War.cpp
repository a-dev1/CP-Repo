#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

bool solve() {
  // base condition
  int somethingBig, somethingsmall;
}

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> arr2(m);
    for (auto &i : arr) cin >> i;
    for (auto &i : arr2) cin >> i;

    int maxq = -1, maxqi, afterq = -1, afterqi;

    for (int i = 0; i < n; i++) {
      if (arr[i] > maxq) {
        maxq = arr[i];
        maxqi = i;
      }
    }

    for (int i = maxqi + 1; i < n; i++) {
      if (arr[i] > afterq) {
        afterq = arr[i];
        afterqi = i;
      }
    }

    sort(all(arr2));

    int mymax = arr2[m - 1];
    int secondLargest = arr2[m - 2];
    // cout << "mymax:" << mymax << endl;
    // cout << "maxq:" << maxq << endl;

    if (mymax < maxq) {
      cout << "NO\n";
      continue;
    }

    int required = (n - maxqi);

    if (arr2.size() < required) {
      cout << "NO\n";
      continue;
    }

    if (secondLargest < afterq) {
      cout << "NO\n";
      continue;
    }

    cout << "YES\n";

    for (int i = 0; i != maxqi; i++) {
      cout << arr2[i] << " ";
    }

    cout << mymax << " ";

    for (int i = m - 2; i > maxqi; i--) {
      cout << arr2[i] << " ";
    }
    cout << '\n';
  }
  return 0;
}