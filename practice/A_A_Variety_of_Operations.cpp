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
    int a, b;
    cin >> a >> b;
    int diff = abs(a - b);
    if(a == 0 && b == 0) {
      cout << 0 << "\n";
    }
    else if(diff == 0) 
      cout << 1 << "\n";
    else if(diff % 2 == 0) {
      cout << 2 << "\n";
    }
    else {
      cout << -1 << "\n";
    }
  }
  return 0;
}