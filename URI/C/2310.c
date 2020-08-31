#include <stdio.h>

typedef struct
{
	int  s , b, a, ts, tb, ta;
	char name[10];

} Jogador;

int main()
{
	int n, i = 0;
	Jogador gemer;
	gemer.s = 0;
	gemer.b = 0;
	gemer.a = 0;
	gemer.ts = 0;
	gemer.tb = 0;
	gemer.ta = 0;
	scanf("%d", &n);

	while(i < n)
	{
		Jogador vetJogador[n];

		scanf("%s", vetJogador[i].name);
		scanf("%d%d%d", &vetJogador[i].s, &vetJogador[i].b, &vetJogador[i].a);
		scanf("%d%d%d", &vetJogador[i].ts, &vetJogador[i].tb, &vetJogador[i].ta);

		//Valores totais dos times
		gemer.s = vetJogador[i].s + gemer.s;
		gemer.b = vetJogador[i].b + gemer.b;
		gemer.a = vetJogador[i].a + gemer.a;
		gemer.ts = vetJogador[i].ts + gemer.ts;
		gemer.tb = vetJogador[i].tb + gemer.tb;
		gemer.ta = vetJogador[i].ta + gemer.ta;


		i++;
	}


	printf("Pontos de Saque: %.2lf %%.\n", (gemer.ts / (double)gemer.s) * 100);
	printf("Pontos de Bloqueio: %.2lf %%.\n", (gemer.tb / (double)gemer.b) * 100);
	printf("Pontos de Ataque: %.2lf %%.\n", (gemer.ta / (double)gemer.a) * 100);
	return 0;
}
