/* Escreva um programa que lê dois inteiros e determina e imprime se o primeiro é um múltiplo do segundo. [Dica: Utilize o operador 
módulo.] */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int numero1, numero2;

    cout << "Digite dois inteiros: ";
    cin >> numero1 >> numero2;

    if(numero1 % numero2 == 0)
        cout << "Eh multiplo" << endl;
    else 
        cout << "Nao eh multiplo" << endl;

    return 0;
}