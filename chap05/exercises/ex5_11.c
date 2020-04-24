#include <stdio.h>

int main(void)
{
  int code;

  printf("Enter code: ");
  scanf("%d", &code);

  
  switch (code) {
    case 229:
      printf("Albany\n");
      break;
    case 404:
    case 470:
    case 678:
    case 770:
      printf("Atlanta\n");
      break;
    case 478:
      printf("Macon\n");
      break;
    case 706:
    case 762:
      printf("Columbus\n");
      break;
    case 912:
      printf("Savanah\n");
      break;
    default:
      printf("Not recognised\n");
      break;
  }

  return 0;
}
