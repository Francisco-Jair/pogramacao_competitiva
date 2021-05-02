#include <stdio.h>

/*
1 - Para funcionar o vetor tem que está ordenando.
2 - A busca funcina sempre eleminando metado do vetor
3 - A complexidade do algoritmo é O(log n)

*/


int binary_search(int vet[], int search, int tam_vet)
{
	int meio, begin = 0, end = tam_vet;


	while(begin + end != 0)
	{
		meio = (begin + end) / 2;

		if(vet[meio] == search)
		{
			return meio;
		}
		else
		{
			if(search > vet[meio])
			{
				begin = meio + 1;
			}
			else
			{
				end = meio - 1;
			}
		}

	}

	return -1;

}


int binary_search_recursive(int vet[], int search, int begin, int end)
{
	int m ;

	if(begin <= end)
	{
		m = (begin + end) / 2;

		if(vet[m] == search)
		{
			return m;
		}
		else
		{
			if(search < vet[m])
			{
				return binary_search_recursive(vet, search, begin, m - 1);
			}
			else
			{
				return binary_search_recursive(vet, search, m + 1, end);
			}
		}
	}

	return -1;
}


int main()
{
	int vet[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

	// int local = binary_search_recursive(vet, 40, 0, 9 - 1);
	int local2 = binary_search(vet, 90, 9 - 1);
	printf("%d\n", local2);

	return 0;
}
