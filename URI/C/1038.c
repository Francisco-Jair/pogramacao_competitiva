#include <stdio.h>
//by:jj

int main()
{
	int x, y;
	float z;

	scanf("%d%d", &x, &y);

	switch(x)
	{
	case 1:
		z = y * 4.00;
		break;
	case 2:
		z = y * 4.50;
		break;
	case 3:
		z = y * 5.00;
		break;
	case 4:
		z = y * 2.00;
		break;
	case 5:
		z = y * 1.50;
		break;
	}
	printf("Total: R$ %.2f\n", 
	z);




	return 0;
}
