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
    int n, temp = 0, level = 0;
    cin >> n;
    temp = n;
    while (temp > 0) {
      level++;
      temp = temp / 10;
    }
    if (level == 1) {
      cout << n << "\n";
    } else {
      temp = level;
      string s;
      // cout << "temp:" << temp << endl;
      while (temp) {
        s += '1';
        temp--;
      }
      // cout << s << "\n";
      cout << (level - 1) * 9 + (n / stoi(s)) << "\n";
    }
  }
  return 0;
}