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
    int h, w;
    cin >> h >> w;
    vector<vector<int>> arr(h, vector<int>(w, 0));

    for (int i = 1; i <= h; i++) {
      bool temp = true, dec = false;
      int count = w;
      if (h % 2 == 0) dec = true;

      if (i == 1 || (i == h)) {
        while (count) {
          cout << temp;
          count--;
          temp = !temp;
        }
        cout << "\n";
      } else if (i % 2 == 0 || (i == h - 1 && dec)) {
        while (count) {
          cout << 0;
          count--;
        }
        cout << "\n";
      } else {
        cout << 1;
        count -= 2;
        while (count) {
          cout << 0;
          count--;
        }
        cout << 1;
        cout << "\n";
      }
    }
    cout << "\n";
  }
  return 0;
}