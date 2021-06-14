#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

bool tellMeUniquenessOfFrequency(vector<int> arr) {
  map<int, int> m;  // O(no. of Unique elements) worst case = arr.size()
  set<int> s;       // O(same as upper one)

  for (auto i : arr) ++m[i];  //

  for (auto i : m) {
    if (!s.insert(i.second).second) return false;
  }

  for (auto i : m) cout << i.first << " " << i.second << endl;
  for (auto i : s) cout << "i:" << i << endl;
  return m.size() == s.size();
}

int main() {
  vector<int> arr = {3, 3, 3, 2, 1, 1, 3};
  cout << "answer: " << tellMeUniquenessOfFrequency(arr);
  return 0;
}