#include <iostream>

using namespace std;

int main(void)
{
	string option;
	int number;
	string res;
	cin >> option;
	if (option == "y")
	{
		//o programa roda aqui
		while (1)
		{
			cout << "adivinhe um número\n";
		}
	}
	else if (option == "n")
	{
		//o programa irá terminar
	}
	else
	{
		//o código se encerra
		cout << "erro (opção inválida)";
	}
}
