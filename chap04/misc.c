#include <stdio.h>

int main (void)
{
  int a, b, c;
  a = 5;
  c = (b = a + 2) - (a = 1);

  printf("%d, %d, %d", a, b, c);
  return 0;
}
