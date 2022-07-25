#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  vector<int> number;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    number.push_back(temp);
  }

  // int prev = numbers[i];
  int start = 0, end = 0;
  for (int i = 0; i < n; i++) {
    if (i != n - 1) {
      if (number[i] < number[i + 1]) {
      } else {
        start = i;
        // cout << "Start" << start << endl;
        break;
      }
    }
  }

  for (int i = n - 1; i >= 0; i--) {
    // cout << "i:" << i << endl;
    if (number[i] > number[i - 1]) {
    } else {
      end = i;
      break;
    }
  }

  int a = start, b = end;
  while (start < end) {
    int temp = number[start];
    number[start] = number[end];
    number[end] = temp;
    start++;
    end--;
  }

  bool toggle = true;

  for (int i = 0; i < n; i++) {
    if (i != n - 1) {
      if (number[i] < number[i + 1]) {
        toggle = true;
      } else {
        // cout << "faile" << number[i] << endl;
        toggle = false;
        break;
      }
    }
  }

  toggle ? cout << "yes" << endl : cout << "no";

  (toggle) ? cout << (a + 1) << " " << (b + 1) : cout << "";
  return 0;
}
