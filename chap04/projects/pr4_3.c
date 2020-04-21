#include <stdio.h>

int main(void)
{
  int d1, d2, d3;
  printf("Enter three digit number: ");
  scanf("%1d%1d%1d", &d3, &d2, &d1);

  printf("Reversal: %d%d%d\n", d1, d2, d3);
  return 0;
}
