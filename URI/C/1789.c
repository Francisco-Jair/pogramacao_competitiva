#include <stdio.h>


int main()
{

	int quantidade, velocidade = 0, maiorV = -1, i;


	//fim do arquivo aqui
	while(scanf("%d", &quantidade) != EOF)
	{
		maiorV = -1;


		for(i = 0; i < quantidade; i++)
		{
			scanf("%d", &velocidade);

			if(velocidade > maiorV)
			{
				maiorV = velocidade;
			}
		}

		if(maiorV < 10)
		{
			printf("1\n");
		}
		if(maiorV >= 10 && maiorV < 20)
		{
			printf("2\n");
		}
		if(maiorV >= 20)
		{
			printf("3\n");
		}

	}

	return 0;
}
