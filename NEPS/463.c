#include <stdio.h>


int main()
{
	int a, b , c, v;

	scanf("%d %d %d", &a, &b, &c);
	v = a - (b + c);

	if(b > c && b > v)
	{
		printf("%d\n", b);
	}
	else if(c > b && c > v)
	{
		printf("%d\n", c);
	}
	else if(v > b && v > c)
	{
		printf("%d\n", v);
	}

	return 0;
}
