#include <stdio.h>

int main(void)
{
  float largest = 0.0f, in;

  do {
    printf ("Number!!: ");
    scanf("%f", &in);
    largest = in > largest ? in : largest;
  } while (in > 0);

  printf ("Largest: %.2f\n", largest);

}
