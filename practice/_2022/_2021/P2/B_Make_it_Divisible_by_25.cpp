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

struct comp {
  template <typename T>

  // Comparator function
  bool operator()(const T& l, const T& r) const {
    if (l.second != r.second) {
      return l.second < r.second;
    }
    return l.first < r.first;
  }
};

void sorttt(map<char, int>& M) {
  // Declare set of pairs and insert
  // pairs according to the comparator
  // function comp()
  set<pair<char, int>, comp> S(M.begin(), M.end());

  // Print the sorted value
  for (auto& it : S) {
    cout << it.first << ' ' << it.second << endl;
  }
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    string str;
    cin >> str;
    // 25 50 75
    // 100000, 20000000
    // 71345
    // 50555
    // string s_25, s_50, s_75;
    map<char, int> m;

    for (int i = ((int)str.length() - 1); i > 0; i--) {
      // cout << "str[i]:" << str[i] << endl;
      if ((str[i] == '5' || str[i] == '7' || str[i] == '2') &&
          !m.count(str[i])) {
        // cout << "pushed at:" << i << endl;
        m[str[i]] = i;
      }
    }

    if (!m.count(str[0])) {
      m[str[0]] = 0;
    }

    sorttt(m);

    for (auto i = m.begin(); i != m.end(); i++) {
      cout << "i->first:" << i->first << endl;
      cout << "i->second:" << i->second << endl;
    }

    // cout << deleted << '\n';
  }
  return 0;
}