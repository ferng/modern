#include <stdio.h>

int main(void)
{
  int n, m, remainder, numerator, denominator;

  printf("Enter fraction: ");
  scanf("%d/%d", &n, &m);
  numerator = n;
  denominator = m;

  while (n > 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("Greatest common divisor: %d\n", m);
  printf("In lowest terms: %d/%d\n", numerator / m, denominator /m);
}
