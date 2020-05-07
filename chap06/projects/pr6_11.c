#include <stdio.h>

int main(void)
{
	int i, places;
	float e=0.0f, factorial=1.0f;

	printf("Enter number of places: ");
	scanf("%d", &places);

	for (i=0; i < places; i++) {
		if (i < 2){
			factorial = 1;
		} else {

			factorial *= i;
		}
		e += (1.0f/factorial);
		printf("%f\n", factorial);
	}
	printf("%.20f\n", e);

	return 0;
}
