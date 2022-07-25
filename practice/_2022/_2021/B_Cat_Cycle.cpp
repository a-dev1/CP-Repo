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
    int n, k, A = 1, B;
    cin >> n >> k;
    B = n;
    while (k) {
      if (A == 1) {
        A = n;
      }
      else {
        A--;
      }
      if (B - 1 == A) {
        if(B == n) 
          B = ;

      }
    }
  }
  return 0;
}