#include <stdio.h>
#define MAX 12

//Questão 1183 - URI

int main()
{
	float matriz[MAX][MAX], valor = 0;
	int i, j, aux = 0;
	char O;

	//pegas as posiçoes onde os valores de j seja maior que o de i, para pegar os valores acima da diagonal
	//pegas as posiçoes onde os valores de i seja menor que o de j, para pegar os valores abaixo da diagonal

	scanf(" %c", &O);

	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
		{
			scanf("%f", &matriz[i][j]);
			//matriz[i][j] = 1;
		}
	}

	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
		{
			if(j > i)
			{
				valor += matriz[i][j];
				aux++;
			}
		}
	}


	if(O == 'S')
	{
		printf("%.1f\n", valor);
	}
	else
	{
		if(O == 'M')
		{
			printf("%.1f\n", (valor / aux));
		}
	}

	return 0;
}
