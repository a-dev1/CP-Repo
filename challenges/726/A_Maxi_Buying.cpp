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
  cin >> n;
  int answer = n * 1.08;
  if (answer < 206) {
    cout << "Yay!";
  } else if (answer == 206) {
    cout << "so-so";
  } else {
    cout << ":(";
  }
  return 0;
}