#include <iostream>
using namespace std;

long long factorial(long long n) {
  if (n == 1) return 1;
  return n * factorial(n - 1);
}
int main() {
  int n;
  cin >> n;
  cout << factorial(n);
  return 0;
}
// with this method we can output at max 20!