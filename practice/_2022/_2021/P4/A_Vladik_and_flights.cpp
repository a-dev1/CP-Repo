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
  int n, a, b;
  cin >> n >> a >> b;
  string str;
  cin >> str;

  if (str[a - 1] == str[b - 1]) {
    cout << 0 << '\n';
    return 0;
  }

  cout << 1 << '\n';
  return 0;
}