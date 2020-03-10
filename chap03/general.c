#include <stdio.h>

int main(void)
{
  int i, j;
  float x, y;

  i=10;
  j=20;
  x=43.21342;
  y=5627.0;

  printf("%d, %-4d, %7.6f, %f\n", i, j, x, y);
  
  return 0;
}
