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
  vector<int> numbers;
  int count1 = 0, count2 = 0, count3 = 0;
  vector<int> cat1, cat2, cat3;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    int temp;
    cin >> temp;
    numbers.push_back(temp);
  }

  // for (auto k : numbers) cout << "k:" << k << endl;

  for (int i = 1; i <= n; i++) {
    if (numbers[i] == 1) {
      cat1.push_back(i);
      count1++;
    } else if (numbers[i] == 2) {
      cat2.push_back(i);
      count2++;
    } else if (numbers[i] == 3) {
      cat3.push_back(i);
      count3++;
    }
  }

  int teamCount = min(min(count1, count2), count3);

  // for (auto k : cat1) cout << "k:" << k << endl;
  cout << teamCount << endl;
  for (int i = 0; i < teamCount; i++) {
    cout << cat1[i] << " " << cat2[i] << " " << cat3[i] << endl;
  }
  return 0;
}