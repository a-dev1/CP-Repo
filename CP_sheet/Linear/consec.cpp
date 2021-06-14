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
  int tc;
  cin >> tc;
  while (tc--) {
    string input;
    bool oneStart = false;
    int count = 0;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
      if (i != input.length() - 2) {
        if (input[i] == '1') {
          // cout << "i:" << i << endl;
          oneStart = true;
          // count++;
        } else if (oneStart == true &&
                   (input[i] == '0' && input[i + 1] == '1')) {
          // cout << "in:" << i << endl;
          // cout << "input[i]:" << input[i] << endl;
          oneStart = false;
          break;
        }
      } else {
        if (input[i] == '1') {
          count++;
          // cout << "count:" << count << endl;
        }
      }
    }

    if (count == 1) {
      cout << "YES" << endl;
    } else {
      oneStart ? cout << "YES" << endl : cout << "NO" << endl;
    }
  }
  return 0;
}