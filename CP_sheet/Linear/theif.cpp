#include <iostream>

using namespace std;

int main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    long sum = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x < 0) {
        x = sum / i;
      }
      sum += x;
      cout << x << ' ';
    }
    cout << '\n';
  }
  return 0;
}