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

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  ll n;
  cin >> n;
  string str;
  cin >> str;
  stack<int> stack;

  for (int i = 0; i < str.length(); i++) {
    if (stack.size() == 0) {
      stack.push(str[i]);
      continue;
    }
    if (str[i] == ')' && stack.top() == '(')
      stack.pop();
    else
      stack.push(str[i]);
  }

  if (stack.size() == 0)
    cout << "Yes\n";
  else if (stack.size() == 2) {
    int st1, st2;
    st1 = stack.top();
    stack.pop();
    st2 = stack.top();
    stack.pop();
    if (st1 == st2)
      cout << "No\n";
    else
      cout << "Yes\n";
  } else
    cout << "No\n";

  return 0;
}