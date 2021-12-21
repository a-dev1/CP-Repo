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

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    if (n % k == 0) {
      cout << n / k << '\n';
      continue;
    }

    vector<int> arr2;
    arr2 = primeFactors(n);
    if (arr2.size() == 1) {
      cout << n;
      cout << "   :this one\n";
      for (auto i : arr2) cout << i << " ";
      cout << '\n';
      continue;
    } else {
      cout << "Doing It";
    }
    // cout << "\narr2.size():" << arr2.size() << endl;
    // cout << "Prime factor of : " << n << " : ";

    cout << '\n';
  }

  return 0;
}