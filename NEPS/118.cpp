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
	Este construtor de stringpega um iterador inicial e final e cria a string a partir dos caracteres entre esses dois iteradores. Uma vez que rbegin()� o final da string e increment�-lo vai para tr�s atrav�s da string, a string que criamos ter� os caracteres de inputadicionados a ela ao contr�rio, invertendo a string.

	Ent�o voc� apenas compara inpute se eles forem iguais, � um pal�ndromo.

	Isso n�o leva em considera��o a capitaliza��o ou os espa�os, ent�o voc� mesmo ter� que melhorar.
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
