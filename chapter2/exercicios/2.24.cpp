/* Escreva um programa que lê um inteiro e determina e imprime se ele é ímpar ou par. [Dica: Utilize o operador módulo. Um número par 
é um múltiplo de dois. Qualquer múltiplo de dois deixa um resto de zero quando dividido por 2. */

#include <iostream>

using std::cout;

int main() {

    int numero;

    cout << "Digite um numero: ";
    std::cin >> numero;

    if(numero % 2 == 0)
        cout << "Eh par" << std::endl;
    else   
        cout << "Eh impar" << std::endl;

    return 0;
}