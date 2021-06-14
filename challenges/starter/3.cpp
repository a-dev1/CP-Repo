#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int N, M, K, i;
    vector<int> L;
    vector<int> cheaters;

    cin >> N >> M >> K;

    for (i = 0; i < K; i++) {
      int temp;
      cin >> temp;
      L.push_back(temp);
    }

    sort(begin(L), end(L));

    if (L.size() > 1) {
      int prev = L[0];
      for (i = 1; i < K; i++) {
        if (L[i] >= (N + 1)) {
        } else {
          if (L[i] == prev) {
            cheaters.push_back(L[i]);
          } else {
            prev = L[i];
          }
        }
      }

      if (cheaters.size() > 1) {
        // counting all the cheaters
        int prev_cheat = cheaters[0];
        int count = 0;
        for (i = 1; i < cheaters.size(); i++) {
          if (cheaters[i] != prev_cheat) {
            count++;
            prev_cheat = cheaters[i];
          }
        };

        // printing all cheaters if there are some
        cout << count + 1 << " ";
        int prev_print = cheaters[0];
        cout << prev_print << " ";
        for (i = 1; i < cheaters.size(); i++) {
          if (cheaters[i] != prev_print) {
            cout << cheaters[i] << " ";
            prev_print = cheaters[i];
          }
        };
      } else {
        if (cheaters.size() != 0) {
          cout << 1 << " " << cheaters[0];
        } else {
          cout << 0;
        }
      }
    } else {
      cout << 0;
    }
    cout << endl;
  }
  return 0;
}

// 3
// 1 1 1
// 1
// 1 1 2
// 1 1
// 5 5 10
// 2 5 2 5 2 4 10 10 10 10