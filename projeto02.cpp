#include <iostream>
#include <locale>

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "portuguese");
	string option;
	int number;
	int res;
	cout << "Digite 'y' para jogar e 'n' para sair\n";
	cin >> option;
	if (option == "y")
	{
		//o programa roda aqui
			cout << "adivinhe um número\n";
			cout << "o número deve ser um número entre 0 e 1000\n";
			number = rand() % 1001;
			while (1)
			{
				cout << "? ";
				cin >> res;
				if (res < number)
				{
					cout << "O número é um número maior do que esse.\nTente denovo:\n";
				}else if (res > number)
				{
					cout << "O número é um número menor do que esse.\nTente denovo:\n";
				}else if (res == number)
				{
					cout << "Parabéns! você acertou";
					return 1;
				}
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
