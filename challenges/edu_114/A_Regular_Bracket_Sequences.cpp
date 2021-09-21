#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, temp;
    cin >> n;
    temp = n;
    while (temp) {
      cout << "()";
      temp--;
    }
    cout << "\n";
    temp = n;
    if (temp > 1) {
      while (temp) {
        cout << "(";
        temp--;
      }
      temp = n;
      while (temp) {
        cout << ")";
        temp--;
      }
      cout << "\n";
    }

    for (int i = 1; i <= n - 2; i++) {
      temp = i;
      while (temp) {
        cout << "()";
        temp--;
      }
      temp = n - i;
      while (temp) {
        cout << "(";
        temp--;
      }
      temp = n - i;
      while (temp) {
        cout << ")";
        temp--;
      }
      cout << "\n";
    }
  }
  return 0;
}