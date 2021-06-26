#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const ll MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  ll n, store = 0;
  cin >> n;
  vector<int> arr(n);
  bool isPossible = true;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int cnt25 = 0, cnt50 = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 25) {
      cnt25++;
    } else if (arr[i] == 50) {
      if (cnt25) {
        cnt25--;
        cnt50++;
      } else {
        cout << "NO";
        break;
      }
    } else {
      if (cnt25 && cnt50) {
        cnt50 += 2;
        cnt50--;
        cnt25--;
      } else if (cnt25 > 3) {
        cnt25 -= 25;
        cnt50 += 2;
      } else {
        cout << "NO";
        break;
      }
    }
  }
  cout << "YES";
  return 0;
}