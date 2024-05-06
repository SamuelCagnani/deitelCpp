/* Escreva um programa que lê cinco inteiros e determina e imprime o maior e o menor inteiro no grupo. Utilize somente as técnicas de 
programação que você aprendeu neste capítulo. */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int numero1, numero2, numero3, numero4, numero5;
    int menor;
    int maior;

    cin >> numero1;

    menor = numero1;
    maior = numero1;

    cin >> numero2;

    if(numero2 < menor) 
        menor = numero2;
    if(numero2 > maior)
        maior = numero2;
    
    cin >> numero3;

    if(numero3 < menor) 
        menor = numero3;
    if(numero3 > maior)
        maior = numero3;

    cin >> numero4;

    if(numero4 < menor) 
        menor = numero4;
    if(numero4 > maior)
        maior = numero4;

    cin >> numero5;

    if(numero5 < menor) 
        menor = numero5;
    if(numero5 > maior)
        maior = numero5;

    cout << "Menor: " << menor << endl;
    cout << "Maior: " << maior << endl;

    return 0;
}