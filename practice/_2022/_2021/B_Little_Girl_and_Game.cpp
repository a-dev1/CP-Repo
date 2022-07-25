#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  string input;
  unordered_map<char, int> m;
  int count = 0;
  cin >> input;
  for (char c : input) {
    m[c]++;
  }

  for (auto i : m) {
    if (i.second % 2 != 0) count++;
  }

  if (count == 1 || count == 0) {
    cout << "First";
    return 0;
  }
  count--;
  if (count % 2 == 0)
    cout << "First" << endl;
  else
    cout << "Second" << endl;
  return 0;
}