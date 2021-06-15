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
  if (isupper(input[0]))
    cout << input[0];
  else
    cout << (char)(input[0] - 32);
  for (int i = 1; i < input.length(); i++) {
    cout << input[i];
  }
  cout << endl;
  return 0;
}