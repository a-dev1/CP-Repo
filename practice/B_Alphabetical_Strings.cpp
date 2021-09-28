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
    string str;
    cin >> str;
    int L, R, pos;
    size_t pos = str.find('a');
    if (pos == string::npos) {
      cout << "NO\n";
      continue;
    }
    L = R = pos;
    for (int i = 1; i < n; i++) {
      pos = str.find((char)(97 + i));
      if (pos == string::npos) {
        cout << "NO\n";
        break;
      }
      if (pos == L - 1) {
        L = L - 1;
      } else if (pos == R + 1) {
        R = R + 1;
      }
      else 
    }

    return 0;
  }