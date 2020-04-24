#include <stdio.h>

int main(void)
{
  int speed;

  printf("Enter wind speed: ");
  scanf("%d", &speed);

  if (speed < 1)
    printf("calm\n");
  else if (speed < 4)
    printf("light air\n");
  else if (speed < 28)
    printf("breeze\n");
  else if (speed < 48)
    printf("gale\n");
  else if (speed < 64)
    printf("storm\n");
  else
    printf("hurricane\n");

  return 0;
}
