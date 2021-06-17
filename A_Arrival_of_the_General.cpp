#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  int n;
  int mi = MAX_N, ma = -1, miIndex, maIndex;
  cin >> n;
  vector<int> nums(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> nums[i];
    if (nums[i] > ma) {
      ma = nums[i];
      maIndex = i;
    }
    if (nums[i] <= mi) {
      mi = nums[i];
      miIndex = i;
    }
  }
  // cout << "miIndex:" << miIndex << endl;
  // cout << "maIndex:" << maIndex << endl;
  if (miIndex < maIndex) {
    maIndex--;
    cout << (n - miIndex) + (maIndex - 1);
  } else {
    // cout << "else " << endl;
    cout << (maIndex - 1) + (n - miIndex);
  }

  return 0;
}