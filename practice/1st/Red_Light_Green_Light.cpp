#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n, zz;
    cin >> n >> zz;
    vector<int> numbers(n);
    for (auto &i : numbers) cin >> i;

    int mmm = 0;
    for (int i = 0; i < n; i++) {
      if (numbers[i] > zz) mmm++;
    }
    cout << mmm << '\n';
  }
  return 0;
}