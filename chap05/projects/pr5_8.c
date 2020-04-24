#include <stdio.h>

int main(void)
{
  int t1, t2, t3, t4, t5, t6, t7, t8, hh, mm, user_time, prev_diff;

  t1 = 8 * 60;
  t2 = (9 * 60) + 43;
  t3 = (11 * 60) + 19;
  t4 = (12 * 60) + 47;
  t5 = (14 * 60);
  t6 = (15 * 60) + 45;
  t7 = (19 * 60);
  t8 = (21 * 60) + 45;

  printf("%d, %d, %d, %d, %d, %d, %d, %d\n", t1, t2, t3, t4, t5, t6, t7, t8);

  printf("Enter departure time: ");
  scanf("%d:%d", &hh, &mm);
  user_time = (hh * 60) + mm;


  printf("You wanted to leave at %d:%d (%d), but the closest departure time is:\n", hh, mm, user_time);

  if ((user_time < t1) || ((user_time - t1 < t2 - user_time) && user_time < t2)) {
    printf("8:00am, arriving at 10:16am\n");
  } else if ((user_time - t2 < t3 - user_time) && user_time < t3) {
    printf("9:43am, arriving at 11:52am\n");
  } else if ((user_time - t3 < t4 - user_time) && user_time < t4) {
    printf("11:19am, arriving at 1:31pm\n");
  } else if ((user_time - t4 < t5 - user_time) && user_time < t5) {
    printf("12:47pm, arriving at 3:00pm\n");
  } else if ((user_time - t5 < t6 - user_time) && user_time < t6) {
    printf("2:00pm, arriving at 4:08pm\n");
  } else if ((user_time - t6 < t7 - user_time) && user_time < t7) {
    printf("3:45pm, arriving at 5:55pm\n");
  } else if ((user_time - t7 < t8 - user_time) && user_time < t8) {
    printf("7:00pm, arriving at 9:20pm\n");
  } else {
    printf("9:45pm, arriving at 11:58pm\n");
  }

  return 0;

}
