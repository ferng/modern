#include <stdio.h>

int main(void)
{
  int i, j;

  for (i = 1; i <= 128; i *= 2)
    printf("%d ", i);
  printf("\n");
  
  i = 1;
  while (i <= 128) {
    printf("%d ", i);
    i *= 2;
  }
  printf("\n");



  for (i = 9384; i > 0; i /= 10)
    printf("%d ", i);
  printf("\n");

  i = 9384;
  do {
    printf("%d ", i);
    i /= 10;
  } while (i > 0);
  printf("\n");



  for (i = 10; i > 1; i /= 2)
    printf("%d ", i++);
  printf("\n");

  i = 10;
  while (i > 1){
    printf("%d ", i++);
    i /= 2;
  }
  printf("\n");

  return 0;
}
