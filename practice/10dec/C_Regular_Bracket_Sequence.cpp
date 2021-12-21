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

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    string str;
    cin >> str;
    stack<char> stack;

    for (int i = 0; i < str.length(); i++) {
      // cout << "stack.size():" << stack.size() << endl;

      if (str[i] == '(') {
        stack.push('(');
      } else if (str[i] == ')') {
        if (!stack.empty() && stack.top() == '(') {
          stack.pop();
        } else
          stack.push(')');
      } else if (str[i] == '?') {
        if (!stack.empty() && stack.top() == '?') {
          stack.pop();
        } else
          stack.push('?');
      }
    }

    int StackSize = stack.size();
    cout << "StackSize:" << StackSize << endl;
    // cout << "StackData: ";
    bool ok = false;
    bool open = false, close = false;
    while (!stack.empty()) {
      if (stack.top() == '(') {
        if (close == false) {
          cout << "NO\n";
          ok = true;
          break;
        }
      }
      if (stack.top() == ')') close = true;
      // cout << stack.top() << " ";
      stack.pop();
    }

    if (ok) continue;
    if (str[0] == ')') {
      cout << "NO\n";
      continue;
    }
    if (StackSize % 2 == 0 || stack.empty())
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}