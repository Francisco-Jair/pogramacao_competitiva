#include <stdio.h>
#include <math.h>


void eh_primo(int num)
{
	int i;

	if(num == 1)
	{
		printf("N\n");
		return;
	}

	int root = sqrt(num);

	for(i = 2; i <= root; i++)
	{
		if(num % i == 0)
		{
			printf("N\n");
			return ;
		}
	}

	printf("S\n");
	return;
}


int main()
{
	long int num;
	scanf("%ld", &num);

	eh_primo(num);

	return 0;
}
