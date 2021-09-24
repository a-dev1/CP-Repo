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
    string s, t;
    int count = 0;
    cin >> s >> t;

    // size_t starter[k];
    size_t found = s.find(t[count]);

    bool isActivated = false, ans = true;

    int rept = 0;
    vector<int> starter;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == t[0]) {
        starter.push_back(i);
        rept++;
      }
    }

    if (found == string::npos) {
      cout << "NO\n";
      continue;
    } else {
      for (int k = 0; k < starter.size(); k++) {
        isActivated = false, ans = true;

        count = 1;
        // Search right and then left
        for (int i = starter[k] + 1; i < s.length(); i++) {
          if (s[i] != t[count]) {
            isActivated = true;

            for (int j = starter[k] - 1; j > -1; j--) {
              if (s[j] != t[count]) {
                if (count > t.length() - 1)
                  break;
                else {
                  ans = false;
                  break;
                }
              } else
                count++;
            }
          } else {
            starter[k]++;
            count++;
          }
        }

        if (!isActivated) {
          // cout << "Activated:";
          for (int j = starter[k] - 1; j > -1; j--) {
            if (s[j] != t[count]) {
              if (count > t.length() - 1) {
                break;
              } else {
                ans = false;
                break;
              }
            } else
              count++;
          }
          if (count <= t.length() - 1) ans = false;
        }
        if (ans == true) break;
      }
      if (ans)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }

  return 0;
}