#include <iostream>

using namespace std;

int stack[1000], n, top = -1;

void push(int x) {
  if (top >= n - 1)
    cout << "StackOverFlow." << endl;
  else {
    top++;
    stack[top] = x;
  }
}

void pop() {
  if (top <= -1)
    cout << "StackUnderflow" << endl;
  else {
    cout << "Popped Element:" << stack[top] << endl;
    top--;
  }
}

void printStack() {
  if (top >= 0) {
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) cout << stack[i] << " ";
    cout << endl;
  } else
    cout << "Stack is empty";
}

int main() {
  int ch, val;
  cout << "Enter Size of Stack: ";
  cin >> n;
  cout << "1 -> Push Element" << endl;
  cout << "2 -> Pop Element" << endl;
  cout << "3 -> PrintStack" << endl;
  cout << "4 -> Exiting...." << endl;

  do {
    cout << "Enter choice: ";
    cin >> ch;
    switch (ch) {
      case 1: {
        cout << "Enter value:";
        cin >> val;
        push(val);
        break;
      }
      case 2: {
        pop();
        break;
      }
      case 3: {
        printStack();
        break;
      }
      case 4: {
        cout << "Exit" << endl;
        break;
      }
      default: {
        cout << "Invalid Choice" << endl;
      }
    }
  } while (ch != 4);
  return 0;
}