#include <stdio.h>

int main(void)
{
  int in, remainder;
  printf("Enter a number: ");
  scanf("%d", &in);
  
  do {
    remainder = in % 10;
    printf("%d", remainder);
    in /= 10 ;
  } while (in > 0);

  printf("\n");
  return 0;
}
