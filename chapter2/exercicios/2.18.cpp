/* Escreva um programa que pede para o usuário inserir dois inteiros, obtém os números do usuário, e então imprime o maior número seguido 
pelas palavras “é o maior”. Se os números forem iguais, imprime a mensagem “Estes números são iguais” */

#include <iostream>

using std::cout;
using std::endl;

int main() {

    int a;
    int b;

    cout << "Digite dois inteiros: ";
    std::cin >> a >> b;

    if(a > b)
        cout << a << "eh o maior" << endl;
    else if(a < b)
        cout << b << "eh o maior" << endl;
    else
        cout << "Estes numeros sao iguais" << endl;

    return 0;
}