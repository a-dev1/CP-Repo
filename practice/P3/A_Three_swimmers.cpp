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
    int p, a, b, c;
    cin >> p >> a >> b >> c;
    vector<int> arr(3);
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    sort(arr.begin(), arr.end());
    if (p % a == 0 || p % b == 0 || p % c == 0) {
      cout << 0 << '\n';
    } else {
      int minA = min(a, (min(b, c)));
      int maxA = max(a, (max(b, c)));
      if (minA > p)
        cout << minA - p << '\n';
      else {
        for (int i = 0; i < 3; i++) {
          if (arr[i] > p) {
            cout << arr[i] - p << '\n';
            cout << "breaked" << endl;
            break;
          }
        }
        if (a < p && b < p && c < p) {
          cout << (p / a) * p << '\n';
        }
      }
    }
  }
  return 0;
}