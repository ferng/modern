#include <stdio.h>

int main(void)
{
  int area, exchange, number;

  printf("Enter number: ");
  scanf("(%d) %d-%d", &area, &exchange, &number);

  printf("%d.%d.%d\n", area, exchange, number);
}
