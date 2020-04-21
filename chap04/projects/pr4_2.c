#include <stdio.h>

int main(void)
{
  int in, d1, d2, d3;
  printf("Enter three digit number: ");
  scanf("%d", &in);
  d1 = in % 10;
  d2 = (in / 10) % 10;
  d3 = in / 100;

  printf("Reversal: %d%d%d\n", d1, d2, d3);
  return 0;
}
