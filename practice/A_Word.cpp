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
  string input;
  int lowerCount = 0, upperCount = 0;
  cin >> input;
  for (auto c : input) {
    if (isupper(c))
      upperCount++;
    else
      lowerCount++;
  }
  if (upperCount > lowerCount) {
    for (char c : input) {
      if (isupper(c))
        cout << c;
      else
        cout << (char)(c - 32);
    }
  } else {
    for (char c : input) {
      if (isupper(c))
        cout << (char)(c + 32);
      else
        cout << c;
    }
  }
  return 0;
}