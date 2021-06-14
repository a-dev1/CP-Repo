#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int N, M;
    cin >> N >> M;
    vector<int> cities(N), passengers(M);
    vector<int> rightTrains, leftTrains;

    for (int i = 1; i <= N; i++) {  // O(n)
      cin >> cities[i];
      if (cities[i] == 1)
        rightTrains.push_back(i);
      else if (cities[i] == 2)
        leftTrains.push_back(i);
    }

    // for (auto i : rightTrains) cout << "ri:" << i << endl;
    // for (auto i : leftTrains) cout << "li:" << i << endl;

    for (int i = 1; i <= M; i++) {  // O(M)
      cin >> passengers[i];
      int n = passengers[i];
      int leftTime, rightTime;
      // Checking for Right Trains
      if (rightTrains.size() >= 1) {
        auto rightPointer =
            lower_bound(rightTrains.begin(), rightTrains.end(), n);  // nlogN
        if (rightPointer == rightTrains.end()) {
          auto it = rightTrains.end();
          it--;
          rightTime = abs(*it - n);
        } else if (*rightPointer == n) {
          rightTime = 0;
        } else if (*rightPointer > n) {
          if (rightTrains.size() == 1)
            rightTime = -1;
          else {
            rightPointer--;
            rightTime = abs(*rightPointer - n);
          }
        }
      } else {
        rightTime = -1;
      }
      // checking for Left Trains
      auto leftpointer =
          lower_bound(leftTrains.begin(), leftTrains.end(), n);  // nlogN
      if (leftpointer == leftTrains.end())
        leftTime = -1;
      else {
        leftTime = abs(*leftpointer - n);
      }

      // cout << "rightTime: " << rightTime << endl;
      // cout << "leftTime: " << leftTime << endl;
      // output
      if (leftTime == -1 && rightTime == -1)
        cout << -1 << " ";
      else if (leftTime == 0 || rightTime == 0)
        cout << 0 << " ";
      else if (leftTime == -1)
        cout << rightTime << " ";
      else if (rightTime == -1)
        cout << leftTime << " ";
      else if (leftTime > rightTime)
        cout << rightTime << " ";
      else
        cout << leftTime << " ";
    }
    cout << endl;
  }
  return 0;
}