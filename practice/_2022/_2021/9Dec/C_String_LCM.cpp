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

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

int foc(string str, string findMe, int nth) {
  // if (nth == 1) {
  //   if (str[0] == findMe[0]) return 0;
  // }
  size_t pos = 0;
  bool ok = false;
  int cnt = 0;

  while (cnt != nth) {
    if (ok) pos += 1;
    pos = str.find(findMe, pos);
    if (pos == string::npos) return cnt;
    cnt++;
    ok = true;
  }
  cout << "cnt:" << cnt << endl;
  return pos;
}

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> m;
    map<char, int> m2;
    for (auto i : s1) m[i]++;
    for (auto i : s2) m2[i]++;
    if (m.size() == 1 && m2.size() == 1) {
      int bigger, smaller;
      if (s1.size() >= s2.size()) {
        bigger = s1.size();
        smaller = s2.size();
      } else {
        bigger = s2.size();
        smaller = s1.size();
      }
      int lcm = bigger * 2;
      // cout << "lcm:" << lcm << endl;
      while (lcm--) {
        cout << s1[0];
      }
      cout << '\n';
      continue;
    }

    int mul = (s1.length() > s2.length()) ? foc(s1, s2, s1.length())
                                          : foc(s2, s1, s2.length());

    if (s1.size() > s2.size()) {
      if (mul * s2.size() == s1.size()) {
        while (mul--) {
          cout << s2;
        }
        cout << '\n';
        continue;
      }
    } else {
      if (mul * s1.size() == s2.size()) {
        while (mul--) {
          cout << s1;
        }
        cout << '\n';
        continue;
      }
    }
    // cout << "mul:" << mul << endl;
    cout << -1 << '\n';
  }
  return 0;
}