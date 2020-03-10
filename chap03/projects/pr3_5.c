#include <stdio.h>

int main()
{
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;
  int row1, row2, row3, row4;
  int col1, col2, col3, col4;
  int diag1, diag2;

  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
      &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

  row1 = n1 + n2 + n3 + n4;
  row2 = n5 + n6 + n7 + n8;
  row3 = n9 + n10 + n11 + n12;
  row4 = n13 + n14 + n15 + n16;

  col1 = n1 + n5 + n9 + n13;
  col2 = n2 + n6 + n10 + n14;
  col3 = n3 + n7 + n11 + n15;
  col4 = n4 + n8 + n12 + n16;

  diag1 = n1 + n6 + n11 + n16;
  diag2 = n4 + n7 + n10 + n13;

  printf("%2d %2d %2d %2d\n", n1, n2, n3 ,n4);
  printf("%2d %2d %2d %2d\n", n5, n6, n7, n8);
  printf("%2d %2d %2d %2d\n", n9, n10, n11, n12);
  printf("%2d %2d %2d %2d\n", n13, n14, n15, n16);

  printf ("Rows: %d %d %d %d\n", row1, row2, row3, row4);
  printf ("Cols: %d %d %d %d\n", col1, col2, col3, col4);
  printf ("Diags: %d %d\n", diag1, diag2);

  return 0;
}
