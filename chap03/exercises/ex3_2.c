#include <stdio.h>

int main(void)
{
  float x = 1233.45365468;

  printf("|%-8.1e|\n", x);
  printf("|%10.6e|\n", x);
  printf("|%-8.3f|\n", x);
  printf("|%6.f|\n", x);
}
