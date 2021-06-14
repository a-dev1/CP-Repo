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

void solve(string input, string output) {
  if (input == "") {
    // cout << input;
    cout << output << endl;
  } else {
    char temp;
    temp = input.back();
    input.pop_back();
    solve(input, output);
    output.push_back(temp);
    solve(input, output);
  }
}

int main() {
  string input;
  cin >> input;
  // cout << input.back();
  solve(input, "");
  return 0;
}