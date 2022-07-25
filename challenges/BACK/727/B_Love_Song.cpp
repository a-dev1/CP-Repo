#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  int n, q;
  string s;
  cin >> n >> q;
  cin >> s;
  while (q--) {
    int l, r;
    unordered_map<char, int> m;
    cin >> l >> r;
    for (int i = l - 1; i < r; i++) {
      ++m[s[i]];
    }
    int ans = 0;
    for (auto i : m) {
      ans += abs(96 - (int)(i.first)) * i.second;
    }
    cout << ans << endl;
  }
  return 0;
}