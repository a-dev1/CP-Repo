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
  int count = 0, size;
  cin >> size;
  string input;
  cin >> input;
  for (int i = 0; i < input.size(); i++) {
    if (i != input.size() - 1) {
      if (input[i] == input[i + 1]) count++;
    }
  }
  cout << count;

  return 0;
}