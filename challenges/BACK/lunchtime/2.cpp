#include <algorithm>
#include <cmath>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int N, K, i;
    int chef = 0, other = 0;
    vector<int> gifts;

    cin >> N >> K;
    for (i = 0; i < N; i++) {
      int temp;
      cin >> temp;
      gifts.push_back(temp);
    }

    sort(begin(gifts), end(gifts), greater<int>());

    for (i = 1; i <= (2 * K); i++) {
      if (i % 2 == 0) {
        other += gifts[i - 1];
        if (i == (2 * K) && ((gifts.size()) > (2 * K))) {
          other += gifts[i];
        }
      } else {
        chef += gifts[i - 1];
      }
    }

    cout << (max(chef, other)) << endl;
  }
  return 0;
}