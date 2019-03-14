#include <stdio.h>

int main(void)
{
  float amount, rate, payment;
  float month_1, month_2, month_3;

  printf ("loan: ");
  scanf ("%f", &amount);
  printf ("rate: ");
  scanf ("%f", &rate);
  printf ("payment: ");
  scanf ("%f", &payment);

  rate = (rate / 100.0f) / 12.0f;
  printf("rate: %f\n", rate);
  month_1 = (amount - payment);
  month_1 = month_1 + (amount * rate);
  month_2 = (month_1 - payment);
  month_2 = month_2 + (month_1 * rate);
  month_3 = (month_2 - payment);
  month_3 = month_3 + (month_2 * rate);

  printf("month_1: %f\n", month_1);
  printf("month_2: %f\n", month_2);
  printf("month_3: %f\n", month_3);

  return 0;
}
