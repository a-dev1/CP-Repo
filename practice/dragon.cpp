#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main() {
  int s, n;
  cin >> s >> n;
  bool check = true;
  vector<pair<int, int>> v;
  while (n--) {
    int xi, yi;
    cin >> xi >> yi;
    v.push_back({xi, yi});
  }
  sort(v.begin(), v.end());
  for (auto x : v) {
    if (x.first < s) {
      s += x.second;
    } else {
      check = false;
    }
  }

  check == true ? cout << "YES\n" : cout << "NO\n";
}