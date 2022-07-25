#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>

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
      int x, n;
      cin >> x >> n;
      if (x%2 == 0 && n%2 != 0) {
        if(x>n) 
          cout << x - n << "\n";
        else  

      }
      else if(x%2 != 0 && n%2 != 0)
    }
    return 0;
}