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
    int n;
    cin >> n;
    if (n % 11 == 0 || n % 111 == 0) {
      cout << "YES\n";
    } else {
      n -= 111;
      while (n > 0) {
        if (n % 11 == 0) {
          cout << "YES\n";
          break;
        }
        n -= 111;
      }
      (n < 0) ? cout << "NO\n" : cout << "";
    }
  }
  return 0;
}