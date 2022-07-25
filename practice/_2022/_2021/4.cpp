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
  int n = 7;
  vector<int> arr{3, 1, 2, 1};

  for (auto i : arr) {
    cout << i << " ";
  }
  // 1 1 2 2 3 3 4
  // size(4) 3 1 2 1 (print unique)
  // 1 1 1 2 2 2 3 (not so easy math)
  // 10 stairs
  // allowed (1step , 2step, 3step) 
  return 0;
}