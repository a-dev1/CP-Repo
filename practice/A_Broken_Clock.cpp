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
  int format;
  cin >> format;
  string s;
  cin >> s;
  if (format == 24) {
    if (s[0] == '2' && s[1] > '3') {
      s[0] = '0';
    }
    if (s[0] > '2') {
      s[0] = '0';
    }
    if (s[3] >= '7') {
      s[3] = '0';
    } else if (s[3] == '6' && s[4] > '0') {
      // cout << "here" << endl;
      s[3] = '0';
    }
    cout << s;
  } else {
    if (s[0] == '0' && s[1] == '0') {
      // cout << "here" << endl;
      s[1] = '1';
    }
    if (s[1] > '2') {
      s[0] = '0';
    }
    if (s[0] > '1') {
      s[0] = '1';
    }
    if (s[3] >= '7') {
      // cout << "here" << endl;
      s[3] = '0';
    } else if (s[3] == '6' && s[4] > '0') {
      s[3] = '0';
    }
    cout << s;
  }
  return 0;
}