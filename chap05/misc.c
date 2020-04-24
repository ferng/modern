#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main(void)
{
  int j = 55;
  printf("%d, %d\n", j, !j);

  BOOL flag;
  flag = TRUE;
  
  if (flag) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  return 0;
}
