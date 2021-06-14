#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, querysize;
  vector<int> numbers;
  vector<int> prefixSum;
  vector<pair<int, int>> queries;
  cin >> n;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    sum += temp;
    numbers.push_back(temp);
    prefixSum.push_back(sum);
  }

  cin >> querysize;
  for (int i = 0; i < querysize; i++) {
    int l, r;
    cin >> l >> r;
    queries.push_back(make_pair(l, r));
  }

  int answer = 0;
  for (int i = 0; i < queries.size(); i++) {
    if (queries[i].first == 0) {
      answer = prefixSum[queries[i].second];
      cout << answer << endl;
    } else {
      answer = (prefixSum[queries[i].second] - prefixSum[queries[i].first - 1]);
      cout << answer << endl;
    }
  }

  return 0;
}