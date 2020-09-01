#include <bits/stdc++.h>


using namespace std;



int main()
{
	string word = "", palavra;

	cin >> palavra;

	for(int i = 0; i < int(palavra.length()); i++)
	{
		if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
		{
			word = word + palavra[i];
		}
	}

	/*
	Este construtor de stringpega um iterador inicial e final e cria a string a partir dos caracteres entre esses dois iteradores. Uma vez que rbegin()é o final da string e incrementá-lo vai para trás através da string, a string que criamos terá os caracteres de inputadicionados a ela ao contrário, invertendo a string.

	Então você apenas compara inpute se eles forem iguais, é um palíndromo.

	Isso não leva em consideração a capitalização ou os espaços, então você mesmo terá que melhorar.
	*/

	if (word == string(word.rbegin(), word.rend()))
	{
		cout << "S" << endl;
	}
	else
	{
		cout << "N" << endl;
	}

	return 0;
}
