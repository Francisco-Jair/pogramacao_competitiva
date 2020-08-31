#include <stdio.h>
#include <math.h>


int main()
{
	int N;
	double fib, fib2, fibf, aux, aux2;

	scanf("%d", &N);

	aux = (1 + sqrt(5)) / 2;
	aux2 = (1 - sqrt(5)) / 2;

	fib = pow(aux, N);
	fib2 = pow(aux2, N);

	fibf = (fib - fib2) / sqrt(5);


	printf("%.1f\n", fibf);

	return 0;
}
