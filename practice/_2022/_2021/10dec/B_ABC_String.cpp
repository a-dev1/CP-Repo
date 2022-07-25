#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

bool checkValidity(string str) {
  stack<char> s;
  for (auto i : str) {
    if (i == '(')
      s.push(i);
    else {
      if (s.empty())
        return false;

      else {
        if (i == ')' && s.top() != '(')
          return false;

        else
          s.pop();
      }
    }
  }
  return s.empty();
}

signed main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int len = s.length();

    if (s[0] == s[len - 1])
      cout << "NO\n";
    else {
      string s1, s2;
      char op = s[0];
      char cl = s[len - 1];

      for (int i = 0; i < len; i++) {
        if (s[i] == op) {
          s1.push_back('(');
          s2.push_back('(');
        } else if (s[i] == cl) {
          s1.push_back(')');
          s2.push_back(')');
        } else {
          s1.push_back(')');
          s2.push_back('(');
        }
      }

      // cout << s1 << '\n';
      // cout << s2 << '\n';

      if (checkValidity(s1) || checkValidity(s2))
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }

  return 0;
}