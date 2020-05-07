#include <stdio.h>

int main(void)
{
  int n = 0, sum = 0, num;

  while(n < 10) {
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num == 0)
      continue;

    sum += num;
    n++;
  }

  printf("Total of 10 non-zero numbers is: %d\n", sum);

  return 0;
}
