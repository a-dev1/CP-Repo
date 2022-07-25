#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    string s, t;
    cin >> s >> t;
    map<char, int> m1;

    for (int i = 0; i < s.size(); i++) {
      m1[s[i]]++;
    }

    if (m1['a'] == 0 or m1['b'] == 0 or m1['c'] == 0) {
      sort(s.begin(), s.end());
      cout << s << "\n";
      continue;
    }

    if (t.length() > s.length() || m1.size() < 3) {
      cout << s << '\n';
      continue;
    }

    int tsize = m1.size();

    if (t[1] != 'b') {
      sort(s.begin(), s.end());
      cout << s << "\n";
      continue;
    } else {
      int prevBCount = 0;
      for (auto i = m1.begin(); i != m1.end(); i++) {
        if (i->first == 'b') {
          prevBCount = i->second;
          continue;
        }
        int temp = i->second;
        while (temp--) {
          cout << i->first;
        }
        if (i->first == 'c') {
          while (prevBCount--) {
            cout << 'b';
          }
        }
      }
    }
    cout << '\n';
  }

  return 0;
}