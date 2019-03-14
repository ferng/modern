#include <stdio.h>

int main(void)
{
  float radius, volume;

  printf ("Radius: ");
  scanf ("%f", &radius);

  volume = (4.0f / 3.0f) * 3.14 * (radius * radius * radius);

  printf("Answer: %.4f\n", volume);

  return 0;
}
