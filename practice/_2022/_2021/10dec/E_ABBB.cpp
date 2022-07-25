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
    stack<int> stack;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
      if (stack.empty()) {
        stack.push(str[i]);
      } else if (stack.top() == 'A' && str[i] == 'B') {
        stack.pop();
      } else if (stack.top() == 'B' && str[i] == 'B') {
        stack.pop();
      } else
        stack.push(str[i]);
    }
    cout << stack.size() << '\n';
  }
  return 0;
}