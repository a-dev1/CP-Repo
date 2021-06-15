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
  for (int i = 0; i < input.length(); i++) {
    if (input[i] == '.')
      cout << 0;
    else if (input[i] == '-' && input[i + 1] == '.') {
      cout << 1;
      i++;
    } else if (input[i] == '-' && input[i + 1] == '-') {
      cout << 2;
      i++;
    }
  }

  return 0;
}