#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	int forca, caso;
	char name[10];
	int i;

	scanf("%d", &caso);

	for(i = 0; i < caso; i++)
	{
		scanf("%s", name);
		scanf("%d", &forca);
		if(!strcmp("Thor", name))
		{
			printf("Y\n");
		}
		else
		{
			printf("N\n");
		}
	}


	return 0;
}
