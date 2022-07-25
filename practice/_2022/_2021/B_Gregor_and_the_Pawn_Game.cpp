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
    int n, count = 0;
    cin >> n;
    string enemy, player;
    cin >> enemy >> player;
    for (int i = 0; i < n; i++) {
      if (player[i] != '0' && enemy[i] == '0') {
        count++;
        player[i] = '0';
        enemy[i] = '2';
      } else if (player[i] != '0') {
        if (i == 0) {
          if (enemy[i + 1] == '1') {
            count++;
            player[i] = '0';
            enemy[i + 1] == '2';
          }
        } else if (i == n - 1) {
          if (enemy[i - 1] == '1') {
            count++;
            player[i] = '0';
            enemy[i - 1] == '2';
          }
        } else if (enemy[i - 1] == '1') {
          count++;
          player[i] = '0';
          enemy[i - 1] = '2';
        } else if (enemy[i + 1] == '1') {
          count++;
          player[i] = '0';
          enemy[i + 1] - '2';
        }
      }
    }
    cout << count << "\n";
  }
  return 0;
}