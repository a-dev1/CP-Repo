#include <conio.h>
#include <stdio.h>

int main() {
  int n, temp = 1;
  scanf("%d", &n);

  for (int i = 1; i <= n / 5; i++) {
    if (i % 2 != 0) {
      for (int j = 1; j <= 5; j++) {
        printf("%d ", temp);
        temp++;
      }
    } else {
      temp += 4;
      for (int j = 1; j <= 5; j++) {
        printf("%d ", temp);
        temp--;
      }
      temp += 6;
    }
    printf("\n");
  }

  return 0;
}