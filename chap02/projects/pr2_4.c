#include <stdio.h>

int main(void)
{
  float pre_tax, total;

  printf ("pre_tax: ");
  scanf ("%f", &pre_tax);

  total = pre_tax + (pre_tax * 0.05);

  printf("Answer: %.2f\n", total);

  return 0;
}
