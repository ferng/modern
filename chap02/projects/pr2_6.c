#include <stdio.h>

int main(void)
{
  float x, total;

  printf ("x: ");
  scanf ("%f", &x);

  total = (3 * (x*x*x*x*x)) + (2 * (x*x*x*x)) - (5 * (x*x*x)) - (x*x) + (7 * x) - 6;
  total = (((((3 * x) +2) * (x - 5)) * (x - 1)) * (x * 7)) - 6;

  printf("Answer: %.4f\n", total);

  return 0;
}
