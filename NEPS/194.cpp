#include <bits/stdc++.h>
#define MAX 10

using namespace std;


int main()
{
	int vet[MAX];

	for(int i = 0; i < MAX; i++)
	{
		cin >> vet[i];
	}

	for(int i = 0; i < MAX; i++)
	{
		if(vet[i] % 2 == 0)
		{
			cout << vet[i] << " ";
		}
	}

	cout << endl;

	for(int i = 0; i < MAX; i++)
	{
		if(vet[i] % 2 != 0)
		{
			cout << vet[i] << " ";
		}
	}

	cout << endl;

	return 0;
}
