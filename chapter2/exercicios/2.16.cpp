/* Escreva um programa que solicita ao usuário inserir dois números, obtém os dois números do usuário e imprime a soma, produto, diferença 
e quociente dos dois números */

#include <iostream>

int main() {

    int a = 0;
    int b = 0;

    std::cout << "Insira dois numeros: ";
    std::cin >> a >> b;
    std::cout << "Soma: " << a + b << std::endl;
    std::cout << "Produto: " << a * b << std::endl;
    std::cout << "Diferenca: " << a - b << std::endl;
    std::cout << "Quociente: " << a / b << std::endl;

    return 0;
}