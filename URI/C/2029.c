#include <stdio.h>
#define PI 3.14


int main()
{
	double volume, diamentro;

	while(scanf("%lf", &volume) != EOF && scanf("%lf", &diamentro))
	{
		double raio = (diamentro / 2);
		double area = PI * raio * raio;
		double haltura = volume / area;

		printf("ALTURA = %.2lf\n", haltura);
		printf("AREA = %.2lf\n", area);
	}

	return 0;
}
