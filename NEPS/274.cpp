#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;


int mdc(int x, int y)
{
	if(y == 0)
	{
		return x;
	}

	return mdc(y, x % y);
}

int main()
{
	int n, x, valor = 0;

	cin >> n;

	for(int k = 1; k <= n; k++)
	{
		cin >> x;
		valor = mdc(valor, x);
	}

	cout << valor << endl;
	return 0;
}
