#include <stdio.h>

int main(void)
{
  int income;
  float base, percent, total;

  printf("Enter income: ");
  scanf("%d", &income);

  if (income < 750) {
    base = 0.00f;
    percent = 1.00f;
  } else if (income < 2250) {
    base = 7.50f;
    percent = 2.00;
  } else if (income < 3750) {
    base = 37.50f;
    percent = 3.00f;
  } else if (income < 5250) {
    base = 82.50f;
    percent = 4.00f;
  } else if (income < 7000) {
    base = 142.50f;
    percent = 5.00f;
  } else {
    base = 230.00f;
    percent = 6.00f;
  }

  total = base + (income * (percent/100));
  printf ("Total taxes: %.2f\n", total);

  return 0;
}
