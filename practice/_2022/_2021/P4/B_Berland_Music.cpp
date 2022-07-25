#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int>> a(n);
  string str;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first, a[i].second = i;
  }
  cin >> str;

  sort(a.begin(), a.end());

  int cnt = n;

  for (int i = n - 1; i >= 0; i--) {
    if (str[a[i].second] == '1') {
      a[i].first = cnt;
      cnt--;
    }
  }

  for (int i = n - 1; i >= 0; i--) {
    if (str[a[i].second] == '0') {
      a[i].first = cnt;
      cnt--;
    }
  }

  for (int i = n - 1; i >= 0; i--) {
    swap(a[i].first, a[i].second);
  }

  sort(a.begin(), a.end());

  for (int i = 0; i < n; i++) {
    cout << a[i].second << " ";
  }
  cout << endl;
}

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}