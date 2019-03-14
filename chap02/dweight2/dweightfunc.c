#include <stdio.h>
#include <dweight.h>

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
  weight = (volume + 165) / 166;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);

  return weight;
}
