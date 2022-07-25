#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;

void solve() {}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, minimum = MAX_N, maximum = -1, btwDistance, index1, index2;
    cin >> n;
    vector<int> num(n + 1);
    // cout << "array size: " << num.size() << endl;1
    for (int i = 1; i <= n; i++) {
      cin >> num[i];
      if (num[i] < minimum) {
        minimum = num[i];
        index1 = i;
      }
      if (num[i] > maximum) {
        maximum = num[i];
        index2 = i;
      }
    }

    int minIndex, maxIndex;
    minIndex = min(index1, index2);
    maxIndex = max(index1, index2);
    int abetween = abs(maxIndex - minIndex);
    int ans1, ans2, ans3;
    ans1 = maxIndex;
    ans2 = abs(n - maxIndex + 1) + abetween;
    ans3 = abs(n - maxIndex + 1) + minIndex;

    cout << min(ans1, min(ans2, ans3)) << endl;
  }
  return 0;
}