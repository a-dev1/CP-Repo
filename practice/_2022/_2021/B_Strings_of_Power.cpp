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
  string s;
  cin >> s;
  string heavy = "heavy";
  string metal = "metal";
  int temp = 0;
  int heavyCount = 0, metalCount = 0, ans = 0;

  while (s.length() > 1) {
    size_t found;
    if (temp == 0) {
      found = s.find(heavy);
      if (found != string::npos) {
        heavyCount++;
      }
      temp = 1;
    } else {
      found = s.find(heavy, found + 1);
      if (found != string::npos) {
      }
    }
  }

  return 0;
}