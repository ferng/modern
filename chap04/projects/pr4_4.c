#include <stdio.h>

int main(void) 
{
  int in, working, o1, o2, o3, o4, o5;
  o1 = o2 = o3 = o4 = o5 = 0;

  printf("Input: ");
  scanf("%d", &in);

  o5 = in % 8;
  working = in / 8;
  o4 = (working) % 8;
  working = working / 8;
  o3 = (working) % 8;
  working = working / 8;
  o2 = (working) % 8;
  working = working / 8;
  o1 = (working) % 8;

  printf("%d%d%d%d%d", o1, o2, o3, o4, o5);
}
