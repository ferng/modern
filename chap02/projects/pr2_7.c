#include <stdio.h>

int main(void)
{
  int dollars, dol_20, dol_10, dol_5, dol_1;

  printf ("dollar amount: ");
  scanf ("%d", &dollars);

  dol_20 = dollars / 20;
  dol_10 = (dollars - (dol_20 * 20)) / 10;
  dol_5 = (dollars - (dol_20 * 20) - (dol_10 * 10)) / 5;
  dol_1 = (dollars - (dol_20 * 20) - (dol_10 * 10) - (dol_5 * 5));

  printf("$20: %d\n", dol_20);
  printf("$10: %d\n", dol_10);
  printf("$ 5: %d\n", dol_5);
  printf("$ 1: %d\n", dol_1);

  return 0;
}
