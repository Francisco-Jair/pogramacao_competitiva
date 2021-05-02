#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int i, j;
	
	*returnSize = 2;
	
	int *element = (int*)malloc(sizeof(int) * 2);

	for(i = 0; i < numsSize; i++)
	{
		for(j = 0; j < numsSize && j != i; j++)
		{
			if(nums[i] + nums[j] == target)
			{
				
				element[0] = i;
				element[1] = j;
				return element;
			}
		}
	}

	return NULL;
}

int main()
{
	int soma[] = {2, 7, 11, 15};
	int *tam;
	int *vetor = twoSum(soma, 4, 9, tam);



	printf("%d %d", vetor[0], vetor[1]);

	return 0;
}
