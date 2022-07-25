#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
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
  int n;
  cin >> n;
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    m[temp]++;
  }
  int commonSum = 0;
  for (auto i : m) {
    commonSum += i.second;
  }

  commonSum -= m.size();
  cout << "commonSum:" << commonSum << endl;
  cout << "m.size():" << m.size() << endl;
  cout << (pow(2, m.size()) - 1) + (commonSum * m.size());
  return 0;
}