#include <stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main(void)
{
  int m1, d1, y1, m2, d2, y2;
  BOOL first_is_first;  

  printf("Enter first date: ");
  scanf("%d/%d/%d", &m1, &d1, &y1);
  
  printf("Enter second date: ");
  scanf("%d/%d/%d", &m2, &d2, &y2);

  if (y1 < y2) {
    first_is_first = TRUE;
  } else if (y1 == y2 && m1 < m2) {
    first_is_first = TRUE;
  } else if (m1 == m2 && d1 < d2) {
    first_is_first = TRUE;
  } else {
    first_is_first = FALSE;
  }

  if (first_is_first) {
    printf ("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2, y2 );
  } else {
    printf ("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2, d2, y2, m1, d1, y1 );
  }

  return 0;
}
