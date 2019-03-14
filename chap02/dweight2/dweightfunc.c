#include <stdio.h>
#include <dweight.h>

#define INCHES_PER_POUND 166

int func(void)
{
  int height, length, width, volume, weight;

  printf("Height: ");
  scanf("%d", &height);
  printf("Length: ");
  scanf("%d", &length);
  printf("Width: ");
  scanf("%d", &width);
  
  volume = height * length * width;
  weight = (volume + 165 -1) / INCHES_PER_POUND;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);

  return weight;
}
