#include <stdio.h>

int main(void)
{
	int payments, i;
	float amount, rate, initial_payment;
	float monthly_payment, prev_payment;

	printf ("loan: ");
	scanf ("%f", &amount);
	printf ("rate: ");
	scanf ("%f", &rate);
	printf ("initial payment: ");
	scanf ("%f", &initial_payment);
	printf ("number of payments: ");
	scanf ("%d", &payments);

	rate = (rate / 100.0f) / 12.0f;
	printf("rate: %f\n", rate);

	prev_payment = amount;

	for(i = 0; i < payments; i++) {
		monthly_payment = (prev_payment - initial_payment);
		monthly_payment = monthly_payment + (prev_payment * rate);
		prev_payment = monthly_payment;

		printf("month: %.2f\n", monthly_payment);
	}

	return 0;
}
