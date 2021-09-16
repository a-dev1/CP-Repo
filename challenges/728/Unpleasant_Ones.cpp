#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    queue<int> odd;
    queue<int> even;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] & 1)
        odd.push(a[i]);
      else
        even.push(a[i]);
    }

    if (odd.size() > even.size()) {
      while (!even.empty()) {
        int x = odd.front();
        int y = even.front();
        odd.pop();
        even.pop();

        cout << x << " " << y << " ";
      }

      while (!odd.empty()) {
        cout << odd.front() << " ";
        odd.pop();
      }
    } else if (odd.size() == even.size()) {
      while (!even.empty()) {
        int x = odd.front();
        int y = even.front();
        odd.pop();
        even.pop();

        cout << y << " " << x << " ";
      }

      while (!odd.empty()) {
        cout << odd.front() << " ";
        odd.pop();
      }
    } else {
      while (!even.empty()) {
        int y = even.front();
        even.pop();

        cout << y << " ";
      }

      while (!odd.empty()) {
        cout << odd.front() << " ";
        odd.pop();
      }
    }

    cout << "\n";
  }
}