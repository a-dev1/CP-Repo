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

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) {
  return (a.second < b.second);
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n + 1);
    vector<pair<int, int>> p2(n + 1);
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
      int temp;
      cin >> temp;
      arr[i] = temp;
      p[i].first = i;
      p[i].second = temp;
      p2[i].first = i;
      p2[i].second = temp;
    }

    sort(p.begin(), p.end(), sortbysec);
    // for (int i = 1; i <= n; i++) {
    //   cout << "p[i].first:" << p[i].first << endl;
    //   cout << "p[i].second:" << p[i].second << endl;
    // }
    int ans = 0;
    int ptr1 = n, ptr2 = n - 1;
    while ((ptr2 != 1 || p[ptr2].second != 0) &&
           (ptr1 != 2 || p[ptr1].second != 0)) {
      // cout << "ptr1:" << ptr1 << endl;
      // cout << "ptr2:" << ptr2 << endl;
      // cout << "p[ptr1].second::" << p[ptr1].second << endl;
      // cout << "p[ptr2].second:" << p[ptr2].second << endl;
      int temp;
      // if (p[ptr1].second > p[ptr2].second) {
      if (p[ptr2].second > 0 && p[ptr1].second > 0) {
        // cout << "p[ptr1].second:" << p[ptr1].second << endl;
        // cout << "p[ptr2].second:" << p[ptr2].second << endl;
        temp = min(p[ptr1].second, p[ptr2].second);
        p[ptr1].second -= temp;
        p[ptr2].second -= temp;
        ans += temp;
        while (temp) {
          // cout << p[ptr2].first << " " << p[ptr1].first << "\n";
          temp--;
        }

      } else {
        if (ptr1 != 1)
          if (p[ptr1].second == 0) ptr1--;
        if (ptr2 != 1)
          if (p[ptr2].second == 0) ptr2--;
      }
    }
    cout << ans << endl;
    ptr1 = n, ptr2 = n - 1;
    while ((ptr2 != 1 || p2[ptr2].second != 0) &&
           (ptr1 != 2 || p2[ptr1].second != 0)) {
      // cout << "ptr1:" << ptr1 << endl;
      // cout << "ptr2:" << ptr2 << endl;
      // cout << "p[ptr1].second::" << p[ptr1].second << endl;
      // cout << "p[ptr2].second:" << p[ptr2].second << endl;
      int temp;
      // if (p[ptr1].second > p[ptr2].second) {
      if (p2[ptr2].second > 0 && p2[ptr1].second > 0) {
        // cout << "p[ptr1].second:" << p[ptr1].second << endl;
        // cout << "p[ptr2].second:" << p[ptr2].second << endl;
        temp = min(p2[ptr1].second, p2[ptr2].second);
        p2[ptr1].second -= temp;
        p2[ptr2].second -= temp;
        ans += temp;
        while (temp) {
          cout << p2[ptr2].first << " " << p2[ptr1].first << "\n";
          temp--;
        }

      } else {
        if (ptr1 != 1)
          if (p2[ptr1].second == 0) ptr1--;
        if (ptr2 != 1)
          if (p2[ptr2].second == 0) ptr2--;
      }
    }
    // for (int i = n; i > 0; i++) {
    //   if (p[i + 1].second != 0 && i != n) i++;
    //   for (int j = i - 1; j > 0; j++) {
    //     if (n != 1) {
    //       int temp;
    //       temp = p[i].second - p[j].second;
    //       ans += temp;
    //       while (temp) {
    //         cout << p[i].first << " " << p[j].first << "\n";
    //         temp--;
    //       }
    //     }
    //   }
    // }
  }
  return 0;
}