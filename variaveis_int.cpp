#include <iostream>
#include <tchar.h>

int main (){
	_tsetlocale(LC_ALL, _T("Portuguese"));

	int numero;

	numero = 250;
	std::cout << "Numero: " << numero << std::endl;
	std::cout << "Tamanho do numero: " << sizeof(numero) << " bytes" << std::endl;
	std::cout << "Endereço do numero: " << &numero << std::endl;

	int numero1 = 10;
	int numero2 = 15;
	int soma;

	soma = numero1 + numero2;

	std::cout << "Soma: "<< soma << std::endl;

	system("PAUSE");
}