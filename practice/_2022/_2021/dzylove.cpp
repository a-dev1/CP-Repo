#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string input;
  vector<int> alphabats;
  int k, max = 0, i;
  cin >> input;
  cin >> k;

  for (i = 0; i < 26; i++) {
    int temp;
    cin >> temp;
    temp > max ? max = temp : temp = temp;
    alphabats.push_back(temp);
  }

  int count = 1;
  int sum = 0;
  for (auto c : input) {
    sum += alphabats[abs((int)c - 97)] * count;
    count++;
  }

  for (i = (input.length() + 1); i <= (input.length() + k); i++) {
    sum += (i * max);
  }

  cout << sum << endl;
  return 0;
}