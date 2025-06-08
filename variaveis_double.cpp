#include <iostream>
#include <iomanip> 
#include <cmath>

int main (){
    double numero1 = 4.3;
    double numero2 = 7.19;

    std::cout << "Numero 1: " << numero1 <<std::endl;
    std::cout << "Tamanho do numero 1: " << sizeof(numero1) << " bytes" << std::endl;

    std::cout << "Numero 2: " << numero2 <<std::endl;
    std::cout << "Tamanho do numero 2: " << sizeof(numero2) << " bytes" << std::endl;

    float divisao;
    divisao = numero1 / numero2;
    std::cout << "Divisao de dois termos: " <<
    std::fixed << 
    std::setprecision(2) << 
    divisao <<
    std::endl;

    float multiplicacao;
    multiplicacao = numero1 * numero2;
    std::cout << "Multiplicao: " <<
    std::fixed << 
    std::setprecision(2) << 
    multiplicacao <<
    std::endl;

    float exponenciacao;
    exponenciacao = pow(numero1, numero2);
    std::cout << "Exponenciacao: " <<
    std::fixed << 
    std::setprecision(2) << 
    exponenciacao <<
    std::endl;

    return 0;
}