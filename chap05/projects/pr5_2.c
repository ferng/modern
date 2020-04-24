#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main(void)
{
  int hh, mm;
  BOOL am;

  printf("Enter time: ");
  scanf("%2d:%2d", &hh, &mm);

  if (hh > 12) {
    am = FALSE;
  } else {
    am = TRUE;
  }

  printf("12 hour time is: ");
  
  if (am) {
    printf("%d:%.2d AM\n", hh, mm);
  } else {
    printf("%d:%.2d PM\n", hh-12, mm);
  }

}
