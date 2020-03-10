#include <stdio.h>

int main(void)
{
  int gs1, group, publisher, number, check;
  
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &number, &check);

  printf("GS1: %d\n", gs1);
  printf("group: %d\n", group);
  printf("publisher: %d\n", publisher);
  printf("number: %d\n", number);
  printf("check: %d\n", check);

  return 0;

}
