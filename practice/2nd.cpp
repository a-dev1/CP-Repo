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
  if (input.length() < 10) {
    cout << input;
  } else {
    cout << input[0] << (input.length() - 2) << input[input.length() - 1];
  }
  // cout << input[0];
  return 0;
}