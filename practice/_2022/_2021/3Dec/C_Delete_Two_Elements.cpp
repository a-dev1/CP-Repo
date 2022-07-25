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
const ll INF = 1e5;

ll arr[INF];

int main() {
  ll tc;
  cin >> tc;
  while (tc--) {
    ll n, sum = 0, ans = 0;
    map<ll, ll> m;
    cin >> n;
    arr[n];
    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      sum += temp;
      m[temp]++;
      arr[i] = temp;
    }
    if (sum * 2 % n != 0) {
      cout << 0 << "\n";
      continue;
    }
    ll required = (2 * sum) / n;
    // cout << "required:" << required << endl;

    // for (auto i : m) cout << i.first << " " << i.second << "\n";

    for (int i = 0; i < n; ++i) {
      int a1 = arr[i];
      int a2 = required - a1;
      if (m.count(a2)) ans += m[a2];
      if (a1 == a2) ans -= 1;
    }
    cout << ans / 2 << endl;
  }
  return 0;
}

///////////////////////////////
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//   int t;
//   scanf("%d", &t);
//   while (t--) {
//     int n;
//     scanf("%d", &n);
//     vector<int> a(n);
//     map<int, int> m;
//     for (auto &x : a) {
//       scanf("%d", &x);
//       m[x] += 1;
//     }
//     long long sum = accumulate(a.begin(), a.end(), 0LL);
//     if ((2 * sum) % n != 0) {
//       puts("0");
//       continue;
//     }
//     long long need = (2 * sum) / n;
//     long long ans = 0;
//     for (int i = 0; i < n; ++i) {
//       int a1 = a[i];
//       int a2 = need - a1;
//       if (m.count(a2)) ans += m[a2];
//       if (a1 == a2) ans -= 1;
//     }
//     printf("%lld\n", ans / 2);
//   }
// }