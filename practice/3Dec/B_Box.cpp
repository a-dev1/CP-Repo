#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
#define int long long
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    std::vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      mp[v[i]] = 1;
    }

    queue<int> q;
    for (int i = 1; i <= v[n - 1]; i++) {
      if (mp[i]) continue;
      q.push(i);
    }

    vector<int> ans;
    int prev = -1;
    for (int i = 0; i < n; i++) {
      if (i == 0) {
        ans.push_back(v[i]);
        prev = v[i];
        continue;
      } else if (v[i] == prev) {
        bool ok = true;
        if (!q.empty() and prev <= q.front()) ok = false;
        if (ok == false or q.empty()) {
          cout << "-1\n";
          return;
        }
        if (!q.empty())
          ;
        ans.push_back(q.front());
        q.pop();
      } else {
        prev = v[i];
        ans.push_back(v[i]);
      }
    }

    for (auto x : ans) {
      cout << x << " ";
    }
    cout << "\n";
  }
  return 0;
}

// signed main() {
//   int tt;
//   cin >> tt;
//   while (tt--) {
//     solve();
//   }
// }
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

// const int MAX_N = 1e5 + 1;
// const ll MOD = 1e9 + 7;
// const ll INF = 1e9;

// int main() {
//   int tc;
//   cin >> tc;
//   while (tc--) {
//     int n;
//     cin >> n;
//     map<int, int> m;
//     map<int, int> notPresent;
//     vector<int> arr(n);
//     vector<int> ans;
//     for (auto &i : arr) {
//       cin >> i;
//     }

//     m[arr[0]];
//     ans.push_back(arr[0]);
//     for (int i = 1; i < n; i++) {
//       int diff = arr[i] - arr[i - 1];
//       if (diff == 0) {
//         // int temp = 1;

//         // while (arr[i]) {
//         //   if (arr[i] >) }
//         diff = arr[i];
//         while (notPresent.begin()->first <= diff) {
//           diff--;
//           if (notPresent.find(diff) != notPresent.end()) {
//             cout << "notPresent.size():" << notPresent.size() << endl;
//             ans.push_back(diff);
//             notPresent.erase(diff);
//             cout << "notPresent.size():" << notPresent.size() << endl;
//             break;
//           }
//         }
//       } else {
//         ans.push_back(arr[i]);
//         m[arr[i]]++;
//         while (1 < diff) {
//           notPresent[diff]++;
//           diff--;
//         }
//       }
//     }
//     // cout << "Not present: " << notPresent.size() << '\n';
//     if (notPresent.size() > 0) {
//       cout << "not possible: " << -1 << '\n';
//     } else {
//       for (auto i : ans) cout << "I:" << i << " ";
//       cout << '\n';
//     }
//   }
//   return 0;
// }