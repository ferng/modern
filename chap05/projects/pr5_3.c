#include <stdio.h>

int main()
{
  int shares;
  float price, value, commission, rival_comm;

  printf("Number of shares: ");
  scanf("%d", &shares);
  printf("Price: ");
  scanf("%f", &price);

  value = price * shares;

  if (value < 2000.00f)
    rival_comm = 33.00f + (shares * 0.03f);
  else
    rival_comm = 33.00f + (shares * 0.02f);


  if (value < 2500.00f)
    commission = 30.00f + 0.17f * value;
  else if (value < 6250.00f)
    commission = 56.00f + 0.0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + 0.0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + 0.0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + 0.0011f * value;
  else
    commission = 255.00f + .0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;

  printf("Commission $%.2f\n", commission);
  printf("Rival commission $%.2f\n", rival_comm);

  return 0;
}
