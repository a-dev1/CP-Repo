#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

signed main() {
  multiset<int> m;
  for (int i = 0; i < 8; i++) {
    int temp;
    cin >> temp;
    m.insert(temp);
  }
  // cout << "5 occurances: " << m.count(5);
  // m.erase(5);

  // To erase in a range
  //.erase(starting Reference, Ending Reference)
  m.erase(m.begin(), m.find(99));

  for (auto i : m) cout << i << " ";
  return 0;
}
