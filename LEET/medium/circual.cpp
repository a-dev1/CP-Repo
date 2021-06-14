#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
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
  set<int> players;
  int n;
  int k = 5;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    players.insert(i);
  }

  for (auto i : players) cout << "i:" << i << endl;

  int initial_count = k;
  // players.erase(initial_count);
  // initial_count += 1;

  while (true) {
    if (players.size() = 2) break;
    int count = 5;
    cout << "size:" << players.size() << endl;
    cout << "Infinite otter" << endl;
    auto start = players.begin();
    while (count) {
      count--;
      cout << "count:" << count << endl;
      auto last = players.begin();
      advance(last, players.size());
      cout << "last:" << *last << endl;

      if (*last == *start) {
        start = players.begin();
        cout << "last = start:" << endl;
      } else {
        if (count == 1) {
          auto temp = ++start;
          players.erase(*start);
          start = temp;
        } else {
          start++;
        }
      }
    }
  }

  for (auto j : players) cout << "i:" << j << endl;

  return 0;
}