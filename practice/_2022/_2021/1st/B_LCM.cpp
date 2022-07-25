#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  long long n;
  cin >> n;
  int cnt = 0;
  for (long long i = 1; i * i <= n; ++i)
    if (n % i == 0) {
      cnt++;
      if (i * i < n) cnt++;
    }
  cout << cnt << '\n';
}