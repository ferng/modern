#include <stdio.h>

int main(void)
{
  int number, count;

  printf("Enter number: ");
  scanf("%d", &number);

  if (number < 10) {
    count = 1;
  } else if (number < 100) {
    count = 2;
  } else if (number < 1000) {
    count = 3;
  } else {
    count = 4;
  }

  printf ("%d has %d digits\n", number, count);

  return 0;
}
