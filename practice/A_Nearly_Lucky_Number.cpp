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
  cin >> input;
  int count = 0;
  for (char c : input) {
    if (c == '7' || c == '4') count++;
  }
  if (count == 7 || count == 4)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}