#include <stdio.h>

int main(void)
{
  int in, d1, d2;
  printf("Enter two digit number: ");
  scanf("%d", &in);
  d1 = in / 10;
  d2 = in % 10;

  printf("Reversal: %d%d\n", d1, d2);
  return 0;
}
