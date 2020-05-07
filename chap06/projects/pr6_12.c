#include <stdio.h>

int main(void)
{
	int i;
	float e=0.0f, factorial=1.0f, epsilon, fac_result;

	printf("Enter epsilon: ");
	scanf("%f", &epsilon);

	for (i=0; i < 1000; i++) {
		if (i < 2)
			factorial = 1;
		else 
			factorial *= i;
		fac_result = 1.0f/factorial;
		e += fac_result;
		printf("%f\n", fac_result);
		if (fac_result < epsilon)
			break;
	}
	printf("%.20f\n", e);

	return 0;
}
