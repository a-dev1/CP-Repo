#include <algorithm>
#include <cmath>
#include <iostream>
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
  int temp = n;
  int maxeven = 0, count = 0, idx;
  while (temp) {
    if ((temp % 10) % 2 == 0) {
      maxeven = max(temp % 10, maxeven);
      idx = count;
    }
    temp /= 10;
    count++;
  }

  cout << maxeven << endl;
  if (maxeven == 0)
    cout << -1 << endl;
  else {
  }

  cout << "count:" << count << endl;
  cout << "tempind:" << idx << endl;
  cout << "idx: " << count - (idx + 1);

  int rem, lastrem, temp_num, last_length, temp_rem;
  last_length = (count - idx);
  int maxxx = pow(10, last_length);
  temp_rem = n % maxxx;

  return 0;
}