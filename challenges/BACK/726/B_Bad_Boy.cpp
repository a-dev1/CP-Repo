#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long
#define int long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

signed main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, m, i, j;
    cin >> m >> n >> i >> j;
    int ans1, ans2, ans3, ans4;
    vector<int> answers;
    map<pair<int, int>, int> vis;
    ans1 = abs(i - 1) + abs(j - 1);
    ans2 = abs(i - m) + abs(j - n);
    ans3 = abs(i - m) + abs(j - 1);
    ans4 = abs(i - 1) + abs(j - n);
    vis[{1, 1}] = ans1;
    vis[{m, n}] = ans2;
    vis[{m, 1}] = ans3;
    vis[{1, n}] = ans4;
    answers.push_back(ans1);
    answers.push_back(ans2);
    answers.push_back(ans3);
    answers.push_back(ans4);
    sort(answers.begin(), answers.end());
    // cout << "ans1:" << ans1 << endl;
    // cout << "ans2:" << ans2 << endl;
    // cout << "ans3:" << ans3 << endl;
    // cout << "ans4:" << ans4 << endl;
    int biggest, bigger;

    biggest = answers[3];
    bigger = answers[2];

    // cout << "biggest" << biggest << endl;
    // cout << "Bigger" << bigger << endl;

    // m = rows, n = coumns
    if (n == 1) {
      cout << 1 << " " << 1 << " " << m << " " << 1;
    } else if (m == 1) {
      cout << 1 << " " << 1 << " " << 1 << " " << n;
    } else {
      // if(biggest == bigger)
      for (auto a : vis) {
        if (a.second == biggest)
          cout << a.first.first << " " << a.first.second << " ";
        else if (a.second == bigger)
          cout << a.first.first << " " << a.first.second << " ";
      }
    }
  }
  return 0;
}