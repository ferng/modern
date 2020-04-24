#include <stdio.h>

int main(void)
{
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, given_check, first_sum, second_sum, calc_check;

  printf("Enter UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12, &given_check);

  first_sum = d2 + d4 + d6 + d8 + d10 + d12; 
  second_sum = d1 + d3 + d5 + d7 + d9 + d11;
  calc_check = 9 - ((((3 * first_sum) + second_sum) - 1 ) % 10);

  printf("Valid check digit: %d\n", calc_check);
  printf("Given check digit: %d\n", given_check);

  if (calc_check == given_check) {
    printf("VALID\n");
  } else {
    printf("INVALID\n");
  }

  return 0;
}
