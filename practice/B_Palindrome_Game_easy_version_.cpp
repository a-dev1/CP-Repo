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
    int len, count0 = 0, alice = 0, bob = 0;
    string s;
    cin >> len;
    len--;
    cin >> s;
    for (int i = 0; i < len; i++) {
      if (s[i] == '0') count0++;
    }
    alice = count0;
    if (len == 0 && s[0] == '0') {
      cout << "BOB\n";
    } else {
      if (bob < alice)
        cout << "BOB\n";
      else if (bob == alice)
        cout << "DRAW\n";
      else
        cout << "ALICE\n";
    }
    // bob < alice ? cout << "BOB\n" : cout << "ALICE\n";
  }
  return 0;
}