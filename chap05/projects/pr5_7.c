#include <stdio.h>

int main(void)
{
  int i1, i2, i3, i4, large, small, large2, small2;

  printf("Enter four ints: ");
  scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

  if (i1 > i2) {
    large = i1;
    small = i2;
  } else {
    large = i2;
    small = i1;
  }

  if (i3 > i4) {
    large2 = i3;
    small2 = i4;
  } else {
    large2 = i4;
    small2 = i3;
  }

  if (large < large2) {
    large = large2;
  }

  if (small > small2) {
    small = small2;
  }

  printf ("Large: %d, Small: %d\n", large, small);

  return 0;

}
