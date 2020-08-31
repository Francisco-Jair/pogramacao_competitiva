#include <stdio.h>
#include <stdlib.h>


int main()
{
	int m, n, i, j, L = 0, C = 0;

	scanf("%d %d", &n, &m);

	int matriz[n][m];

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			scanf("%d", &matriz[i][j]);
		}
	}

	//A Linha vai verificar se tem 7 na frente e atras
	//A Coluna vai verificar se tem 7 na encima e embaixo

	for(i = 1; i < n - 1; i++)
	{
		for(j = 1; j < m - 1; j++)
		{
			if(matriz[i][j] == 42)
			{
				//Confere encima primeiro
				if(matriz[i - 1][j - 1] == 7 && matriz[i - 1][j] == 7 && matriz[i - 1][j + 1] == 7)
				{
					//confere a segunda linha
					if(matriz[i][j - 1] == 7 && matriz[i][j + 1] == 7)
					{
						//confere a linha de baixo
						if(matriz[i + 1][j - 1] == 7 && matriz[i + 1][j] == 7 && matriz[i + 1][j + 1] == 7)
						{
							L = i + 1;
							C = j + 1;
						}
					}
				}
			}
		}
	}

	printf("%d %d\n", L, C);

	return 0;
}



