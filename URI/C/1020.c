#include <stdio.h>


int main()
{
	int dias, dia, mes, ano;

	scanf("%d", &dias);

	ano = dias / 365;
	mes = (dias % 365) / 30;
	dia = (dias % 365) % 30;

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

	return 0;
}
