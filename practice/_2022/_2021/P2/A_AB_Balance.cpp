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
    int ab = 0, ba = 0;
    cin >> str;

    if (str[0] != str[str.length() - 1]) {
      str[str.length() - 1] = str[0];
    }
    cout << str << '\n';
    // cout << temp << endl;
  }
  return 0;
}