#include <stdio.h>
#include <string.h>
#define MAX 100


int main()
{
	int QT, i = 0, N, M;
	char nome[2][100];
	char escolha[2][100];

	scanf("%d", &QT);

	while(i < QT)
	{
		int j = 0;

		for(j = 0; j < 2; j++)
		{
			scanf("%s", nome[j]);

			scanf("%s", escolha[j]);
		}


		scanf("%d", &N);
		scanf("%d", &M);


		int soma = N + M;
		int flag;
		if((soma % 2 == 0))
		{
			for(j = 0; j < 2; j++)
			{
				if(!strcmp(escolha[j], "PAR"))
				{
					flag = j;
				}
			}
		}
		else
		{
			for(j = 0; j < 2; j++)
			{
				if(!strcmp(escolha[j], "IMPAR"))
				{
					flag = j;
				}
			}
		}

		printf("%s\n", nome[flag]);
		i++;
	}


	return 0;
}
