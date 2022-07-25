#include <stdio.h>
void main()
{
  int b = 37;
  b += b++ + ++b + b;
  printf("%d", b);
}