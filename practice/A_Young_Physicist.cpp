#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  int n, ans1 = 0, ans2 = 0, ans3 = 0;
  cin >> n;
  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    ans1 += a;
    ans2 += b;
    ans3 += c;
  }
  // cout << "ans:" << ans << endl;
  if (ans1 == 0 && ans2 == 0 && ans3 == 0)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}