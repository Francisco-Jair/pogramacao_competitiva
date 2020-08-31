#include <stdio.h>
#include <string.h>


int main()
{
	int nAbas, qAcoes, i;
	char acao[10];
	scanf("%d%d", &nAbas, &qAcoes);

	for(i = 0; i < qAcoes; i++)
	{
		scanf("%s", acao);
		if(!strcmp(acao, "clicou"))
		{
			nAbas = nAbas - 1;
		}

		if(!strcmp(acao, "fechou"))
		{
			nAbas = nAbas + 1;
		}
	}

	printf("%d\n", nAbas);

	return 0;
}
