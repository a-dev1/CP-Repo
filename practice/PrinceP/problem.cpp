// #include <algorithm>
// #include <cmath>
#include <math.h>

#include <iostream>

int main() {
  int n, digit, rem = 0, count = 0, temp, ans;
  scanf("%d", &n);
  temp = n;
  scanf("%d", &digit);

  while (temp != 0) {
    int rr;
    rr = temp % 10;
    if (rr == digit) {
      ans = (int)pow(10, count) - rem;
      printf("Ans: %d", ans);
    }
    rem += (int)pow(10, count) * rr;

    count++;
    temp /= 10;
  }

  return 0;
}