#include <stdio.h>



int main()
{
	int t, i, b, ai, di, li, a, d, l;
	double v1, v2;

	scanf("%d", &t);

	for(i = 0; i < t; i++)
	{
		scanf("%d", &b);
		scanf("%d %d %d", &ai, &di, &li);

		if(li % 2 == 0)
		{
			v1 = ((ai + di) / 2) + b;
		}
		else
		{
			v1 = ((ai + di) / 2);
		}

		scanf("%d %d %d", &a, &d, &l);
		if(l % 2 == 0)
		{
			v2 = ((a + d) / 2) + b;
		}
		else
		{
			v2 = ((a + d) / 2);
		}

		if(v1 > v2)
		{
			printf("Dabriel\n");
		}
		else
		{
			if(v2 > v1)
			{
				printf("Guarte\n");
			}
			else
			{
				if(v1 == v2)
				{
					printf("Empate\n");
				}
			}
		}
	}

	return 0;
}
