#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  string boxes;
  cin >> boxes;
  int length = boxes.length();
  // vector<int> number;
  vector<int> answer(length, 0);

  for (int i = 0; i < length; i++) {
    for (int j = i + 1; j < length; j++) {
      if (boxes[j] == '1') {
        answer[i] += j - i;
        // cout << "boxes[" << j << "] " << boxes[j] << endl;
      }
    }
  }

  reverse(boxes.begin(), boxes.end());
  int order = length - 1;
  // cout << boxes;
  for (int i = 0; i < length; i++) {
    for (int j = i + 1; j < length; j++) {
      if (boxes[j] == '1') {
        answer[order] += j - i;
        // cout << "boxes[" << j << "] " << boxes[j] << endl;
      }
    }
    order--;
  }

  // return answer;

  // for (auto i : answer) cout << i << " ";

  return 0;
}