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
  int tc;
  cin >> tc;
  while (tc--) {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    if (min(s1, s2) > max(s3, s4)) {
      cout << "NO" << endl;
    } else if (max(s1, s2) < min(s3, s4))
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
  return 0;
}