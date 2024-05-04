/* Escreva um programa que imprime os números 1 a 4 na mesma linha com cada par de números adjacentes separados por um espaço. Faça 
isso de várias maneiras: */

#include <iostream>

int main() {

    // a) Utilizando uma instrução com um operador de inserção de fluxo.
    std::cout << "1 2 3 4" << std::endl;

    // b) Utilizando uma instrução com quatro operadores de inserção de fluxo.
    std::cout << "1 " << "2 " << "3 " << "4" << std::endl;

    // c) Utilizando quatro instruções.
    std::cout << "1 ";
    std::cout << "2 ";
    std::cout << "3 ";
    std::cout << "4" << std::endl;

    return 0;
}