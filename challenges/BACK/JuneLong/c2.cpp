#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<int> numbers(n);
    vector<int> answer;

    for (int i = 0; i < n; i++) {
      cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
      if (numbers[i] % 2 == 0) answer.push_back(numbers[i]);
    }

    for (int i = 0; i < n; i++) {
      if (numbers[i] % 2 == 1) answer.push_back(numbers[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (j != n) {
          if (__gcd(answer[i], (2 * answer[j])) > 1) {
            count++;
          }
        }
      }
    }

    cout << count << endl;
  }
  return 0;
}