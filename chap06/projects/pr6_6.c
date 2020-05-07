#include <stdio.h>

int main(void)
{
  int in, i, square;

  printf("Enter number: ");
  scanf("%d", &in);

  for (i=1, square=0; square < in; i++) {
    square = i * i;
    if (square % 2 == 0)
      printf("%10d%10d\n", i, square);
  }
}
