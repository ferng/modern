#include <stdio.h>

int main(void)
{
  int y, m, d;
  int item;
  float price;

  printf("Enter date: ");
  scanf("%d/%d/%d", &m, &d, &y);

  printf("Enter item: ");
  scanf("%d", &item);

  printf("Enter price: ");
  scanf("%f", &price);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t%d/%.2d/%.2d\n", item, price, y, m, d);

  return 0;
}
