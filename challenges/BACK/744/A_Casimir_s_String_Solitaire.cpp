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

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    string s;
    cin >> s;
    map<char, int> m;
    for (auto i : s) {
      m[i]++;
    }
    // for (auto i : m) {
    //   co
    // }
    if ((m['B'] - m['A'] - m['C']) == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}