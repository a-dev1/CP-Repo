#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

signed main() {
  map<int, int> m;
  m[1] = 10;
  m[2] = 20;
  m[3] = 30;
  m[4] = 40;
  for (auto [key, value] : m)
    cout << "key: " << key << '\n' << "value: " << value << '\n';
  return 0;
}