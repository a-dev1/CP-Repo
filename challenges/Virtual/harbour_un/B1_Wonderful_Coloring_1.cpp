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

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    unordered_map<int, int> mp;

    for (int i = 0; i < str.length(); i++) {
      mp[str[i]]++;
    }

    // Traverse through map and print frequencies
    int count = 0;
    for (auto x : mp) {
      if (x.second >= 2)
        count += 2;
      else
        count++;
    }

    cout << count / 2 << "\n";
  }
  return 0;
}