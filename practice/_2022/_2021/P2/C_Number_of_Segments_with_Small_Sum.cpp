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
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long s;
  cin >> n >> s;

  vector<int> a(n);
  for (auto &x : a) cin >> x;

  long long ans = a[0] <= s, sum = a[0];
  for (int i = 1, j = 0; i < n; i++) {
    sum += a[i];
    while (j < i && sum > s) {
      sum -= a[j++];
    }
    if (sum <= s) {
      ans += i - j + 1;
      cout << "i:" << i << endl;
      cout << "(i-j+1):" << (i - j + 1) << endl;
      cout << "ans:" << ans << endl;
    }
  }
  cout << ans << '\n';
  return 0;
}
// #include <algorithm>
// #include <cmath>
// #include <iostream>
// #include <map>
// #include <set>
// #include <string>
// #include <unordered_map>
// #include <unordered_set>
// #include <vector>

// using namespace std;

// #define ar array
// #define ll long long

// const ll MAX_N = 1e5 + 1;
// const ll MOD = 1e9 + 7;
// const ll INF = 1e9;

// int main() {
// ll n, s;
// cin >> n >> s;
// vector<ll> arr(n);
//   for (auto &i : arr) cin >> i;
//   ll l = 0, sum = 0, first = 0, firstCnt = 0, cnt = 0;
//   for (ll i = 0; i < n; i++) {
//     sum += arr[i];
//     while (sum > s) {
//       sum -= arr[l];
//       l++;
//       if (first == 0) {
//         // cout << "i:" << i << endl;
//         cnt += ((i) * (i + 1)) / 2;
//         firstCnt = i;
//         // cout << "cnt in:" << cnt << endl;
//         first++;
//       }
//       // cout << "sum now:" << sum << endl;
//     }
//     if (first) cnt += ((i - l + 1) - 1);
//     // cout << "cnt ((i - l +1) - 1):" << ((i - l + 1) - 1) << endl;
//   }
//   // cout << "first:" << first << endl;
//   if (first)
//     cout << cnt + (n - firstCnt) << '\n';
//   else
//     cout << (n * (n + 1)) / 2 << '\n';
//   return 0;
// }