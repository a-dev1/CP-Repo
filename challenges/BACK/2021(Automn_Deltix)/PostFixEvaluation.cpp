#include <math.h>

#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {
  int len;
  cout << "Postfix len: ";
  cin >> len;

  vector<string> arr(len);
  for (string &i : arr) cin >> i;

  stack<int> stack;

  for (int i = 0; i < len; i++) {
    int operand1, operand2;

    if (arr[i] == "+" || arr[i] == "-" || arr[i] == "/" || arr[i] == "%" ||
        arr[i] == "^" || arr[i] == "*") {
      operand1 = stack.top();
      stack.pop();
      operand2 = stack.top();
      stack.pop();

      if (arr[i] == "+")
        stack.push(operand1 + operand2);
      else if (arr[i] == "-")
        stack.push(operand1 - operand2);
      else if (arr[i] == "/")
        stack.push(operand1 / operand2);
      else if (arr[i] == "*")
        stack.push(operand1 * operand2);
      else if (arr[i] == "%")
        stack.push(operand1 % operand2);
      else if (arr[i] == "^")
        stack.push(pow(operand1, operand2));

    } else {
      int num = stoi(arr[i]);
      stack.push(num);
    }
  }

  cout << "Final Answer: " << stack.top();

  return 0;
}