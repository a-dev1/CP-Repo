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
  int n, m, nextPrime = 0;
  cin >> n >> m;
  n++;
  while (true) {
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      nextPrime = n;
      break;
    }
    n++;
  }
  if (nextPrime == m)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}