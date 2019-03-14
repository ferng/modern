/* Add a comment too */

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.05f / 9.0f)

int main(void)
{
  float fahrenheit, celcius;

  printf("Enter Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);

  celcius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

  printf("Celcius: %.1f\n", celcius);

  return 0;
}
