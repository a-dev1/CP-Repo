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
  int n, sum = 0;
  cin >> n;
  vector<int> heroes(n);
  for (auto &i : heroes) {
    cin >> i;
    sum += i;
  }

  sort(heroes.begin(), heroes.end());

  int m;
  cin >> m;
  vector<int> strength(m);
  vector<int> attack(m);

  for (int i = 0; i < m; i++) {
    cin >> strength[i];
    cin >> attack[i];
    // cout << strength[i] << " " << attack[i] << "\n";
  }

  for (int i = 0; i < m; i++) {
    int coin = 0;
    int a_hero = -1;

    for (int j = 0; j < n; j++) {
      if (heroes[j] == strength[i]) {
        a_hero = heroes[j];
        break;
      } else if (heroes[j] > strength[i]) {
        if (abs(heroes[j] - strength[i]) <= abs(heroes[j - 1] - strength[i])) {
          a_hero = heroes[j];

        } else {
          a_hero = heroes[j - 1];
          coin += strength[i] - heroes[j - 1];
        }
        break;
      }
    }

    bool isChoose = false;
    if (a_hero == -1) {
      a_hero = heroes[n - 1];
      isChoose = true;
    }

    isChoose ? coin += abs(strength[i] - a_hero) : coin = coin;
    // cout << "coin:" << coin << endl;

    if ((sum - a_hero) < attack[i]) {
      coin += attack[i] - (sum - a_hero);
      // cout << "COIN:" << coin << endl;
    }
    cout << coin << "\n";
  }

  return 0;
}