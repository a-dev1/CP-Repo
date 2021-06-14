#include <algorithm>
#include <climits>
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
  cin >> n;

  for (int i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    numbers.push_back(temp);
  }

  ll positiveSum = 0, negativeBig = LLONG_MIN;
  int pcount = 0;

  for (int i = 0; i < n; i++) {
    if (numbers[i] > 0) {
      positiveSum += numbers[i];
      pcount++;
    } else {
      if (negativeBig < numbers[i]) {
        negativeBig = numbers[i];
      }
    }
  }

  if (pcount == 0 && negativeBig != LLONG_MIN) {
    cout << negativeBig << " " << 1;
  } else if (pcount != 0) {
    cout << positiveSum << " " << pcount;
  }

  return 0;
}