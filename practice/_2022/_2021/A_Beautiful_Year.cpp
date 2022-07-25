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
  for (int i = n + 1; i <= 9123; i++) {
    int temp = i;
    int a = temp % 10;
    temp = temp / 10;
    int b = temp % 10;
    temp = temp / 10;

    int c = temp % 10;
    temp = temp / 10;

    int d = temp % 10;
    temp = temp / 10;

    if ((a != b && a != c && a != d) && (b != c && b != d) && (c != d)) {
      cout << d << c << b << a << endl;
      break;
    }
  }
  return 0;
}