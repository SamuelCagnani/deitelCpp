/* Utilizando apenas as técnicas aprendidas neste capítulo, escreva um programa que calcula os quadrados e cubos dos inteiros de 0 a 10 e 
usa tabulações para imprimir as seguintes tabelas de valores, elegantemente formatadas: */

#include <iostream>

using std::cout;
using std::endl;

int main() {

    int numero = 0;

    cout << "inteiro\tquadrado\tcubo" << endl;
    cout << numero << "\t" << (numero * numero) << "\t\t" << (numero * numero * numero) << endl;
    numero++;
    cout << numero << "\t" << (numero * numero) << "\t\t" << (numero * numero * numero) << endl;
    numero++;
    cout << numero << "\t" << (numero * numero) << "\t\t" << (numero * numero * numero) << endl;
    numero++;
    cout << numero << "\t" << (numero * numero) << "\t\t" << (numero * numero * numero) << endl;
    numero++;
    cout << numero << "\t" << (numero * numero) << "\t\t" << (numero * numero * numero) << endl;
    numero++;
    cout << numero << "\t" << (numero * numero) << "\t\t" << (numero * numero * numero) << endl;
    numero++;
    cout << numero << "\t" << (numero * numero) << "\t\t" << (numero * numero * numero) << endl;
    numero++;
    cout << numero << "\t" << (numero * numero) << "\t\t" << (numero * numero * numero) << endl;
    numero++;
    cout << numero << "\t" << (numero * numero) << "\t\t" << (numero * numero * numero) << endl;
    numero++;
    cout << numero << "\t" << (numero * numero) << "\t\t" << (numero * numero * numero) << endl;
    numero++;
    cout << numero << "\t" << (numero * numero) << "\t\t" << (numero * numero * numero) << endl;

    return 0;
}