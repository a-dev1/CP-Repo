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
    vector<int> arr(n * 4);
    map<int, int> m;
    for (int i = 0; i < (4 * n); i++) {
      int temp;
      cin >> temp;
      arr[i] = temp;
      m[i]++;
    }

    

  }
  return 0;
}