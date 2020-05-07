#include <stdio.h>

int main(void)
{
	int month_len, down_in, dow=1, i;

	printf("Number of days in month: ");
	scanf("%d", &month_len);
	printf("Staring day of week (1=Sun, 7=Sat): ");
	scanf("%d", &down_in);
	
	for(i = 1; i <= month_len; i++, dow++) {
		if (dow < down_in) {
			printf("   ");
			i--;
		} else {
			printf("%3d", i);
		}
		if (dow % 7 == 0)
			printf("\n");
	}

	printf("\n");
	return 0;
}
