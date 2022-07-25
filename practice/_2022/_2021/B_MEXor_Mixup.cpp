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

// Function that convert Decimal to binary
int decimalToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}
int main() {
  int tc;
  // cin >> tc;
  // while (tc--) {
  //   signed int a, b;
  //   // cin >> a >> b;
  //   // cout << (a << b) << "\n";
  //   // cout << (a >> b) << "\n";
  //   // a = 1;
  //   // cout << (~a) << "\n";
  //   // int x = -99999999;
  //   // unsigned int y = x;
  //   // cout << x << "\n";  // -43
  //   // cout << y << "\n";  // 4294967253
  //   // cout << (2 << 3);
  //   string name = "abcd";
  //   for (int i = 0; i < pow(2, 4); i++) {
  //     for (int j = 31; j >= 0; j--) {
  //       if (i & (1 << j)) {
  //         cout << 1;
  //         // cout << name[j];
  //       } else
  //         cout << 0;
  //     }
  //     cout << "\n";
  //   }
  // }
  decimalToBinary(1);
  return 0;
}