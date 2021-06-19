#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {}

int main() {
  int n;
  cin >> n;
  set<int> nums;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    nums.insert(temp);
  }

  // for (auto i : nums) {
  //   cout << i << " ";
  // }
  // cout << endl;
  int s = nums.size();
  cout << "Nmms: size " << s;
  if (s == 2) {
    cout << 1;
  } else if(nums.size() == n){
    cout << (s * (s - 1)) / 2;
  }
  return 0;
}