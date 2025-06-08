#include <iostream>


int main() {

    bool bVar;

    bVar = 1;
    std::cout << "Valor de bVar -- (" << bVar  << ")" << std::endl;
    bVar = 0;
    std::cout << "Valor de bVar -- (" << bVar << ")" << std::endl;
    bVar = false;
    std::cout << "Valor de bVar -- (" << bVar << ")" << std::endl;
    bVar = true;
    std::cout << "Valor de bVar -- (" << bVar << ")" << std::endl;
    bVar = "ASKANNSJ"; /*Qualquer valor booleano diferente de 0 em c++ é verdadeiro*/
    std::cout << "Valor de bVar -- (" << bVar << ")" << std::endl << std::endl;

    return 0;
}