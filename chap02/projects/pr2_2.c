#include <stdio.h>

#define RADIUS 10.0f

int main(void)
{
  float volume;

  volume = (4.0f / 3.0f) * 3.14 * (RADIUS * RADIUS * RADIUS);
  printf("Answer (float): %.4f\n", volume);

  volume = (4 / 3) * 3.14 * (RADIUS * RADIUS * RADIUS);
  printf("Answer (int): %.4f\n", volume);

  return 0;
}
