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
  string num1, num2;
  cin >> num1 >> num2;
  for (int i = 0; i < num1.length(); i++) {
    cout << ((int)num1[i] ^ (int)num2[i]);
  }
  // cout << ((int)'0' ^ (int)'0');
  return 0;
}