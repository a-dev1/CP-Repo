#include <bits/stdc++.h>

using namespace std;

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int num;
    cin >> num;
    vector<int> numbers(num);
    for (auto &i : numbers) cin >> i;
    sort(numbers.begin(), numbers.end());
    int ans = 0;
    for (int i = 1; i < num; i++) {
      ans += numbers[i];
    }
    cout << ans << '\n';
  }
  return 0;
}