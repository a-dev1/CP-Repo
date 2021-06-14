#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, m, i;
  cin >> n >> m;

  vector<string> lecture;
  vector<pair<string, string>> dict;

  for (i = 0; i < m; i++) {
    string one, two;
    cin >> one >> two;
    dict.push_back(make_pair(one, two));
  }

  for (int i = 0; i < n; i++) {
    string temp;
    cin >> temp;
    lecture.push_back(temp);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (dict[j].first == lecture[i] || dict[j].second == lecture[i]) {
        if (dict[j].first.length() == dict[j].second.length()) {
          lecture[i] = dict[j].first;
        } else if (dict[j].first.length() < dict[j].second.length()) {
          lecture[i] = dict[j].first;
        } else if (dict[j].first.length() > dict[j].second.length()) {
          lecture[i] = dict[j].second;
        }
      }
    }
  }
  for (auto i : lecture) cout << i << " ";
  return 0;
}