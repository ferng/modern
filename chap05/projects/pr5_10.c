#include <stdio.h>

int main(void)
{
  int score, tens;

  printf("Enter score: ");
  scanf("%d", &score);

  if (score > 100 || score < 0) {
    tens = 12;
  } else {
    tens = score / 10;
  }

  switch (tens) {
    case 10:
    case 9:
      printf("Grade: A\n");
      break;
    case 8:
      printf("Grade: B\n");
      break;
    case 7:
      printf("Grade: C\n");
      break;
    case 6:
      printf("Grade: D\n");
      break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      printf("Grade: F\n");
      break;
    default:
      printf("Number no good!!\n");
  }

  return 0;
}
