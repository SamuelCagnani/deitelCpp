/* Escreva um programa que insere um inteiro de cinco dígitos, separa o inteiro em seus dígitos individuais e imprime os dígitos separados 
entre si por três espaços cada. [Dica: Utilize operadores de divisão de inteiros e módulo.]  */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int numero;
    int digito1, digito2, digito3, digito4, digito5;

    cout << "Digite um numero: ";
    cin >> numero;

    digito1 = numero / 10000;
    numero %= 10000; 
    digito2 = numero / 1000;
    numero %= 1000; 
    digito3 = numero / 100;
    numero %= 100;
    digito4 = numero / 10;
    numero %= 10; 
    digito5 = numero;

    cout << digito1 << " " << digito2 << " " << digito3 << " " << digito4 << " " << digito5 << endl;

    return 0;
}