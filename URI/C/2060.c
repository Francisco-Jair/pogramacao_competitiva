#include <stdio.h>

int main()
{
	int N, L, i, aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0;

	scanf("%d", &N);

	for(i = 0; i < N; i++)
	{
		scanf("%d", &L);

		if(L % 2 == 0)
		{
			aux1++;
		}

		if(L % 3 == 0)
		{
			aux2++;
		}

		if(L % 4 == 0)
		{
			aux3++;
		}

		if(L % 5 == 0)
		{
			aux4++;
		}
	}

	printf("%d Multiplo(s) de 2\n", aux1);
	printf("%d Multiplo(s) de 3\n", aux2);
	printf("%d Multiplo(s) de 4\n", aux3);
	printf("%d Multiplo(s) de 5\n", aux4);


	return 0;
}
