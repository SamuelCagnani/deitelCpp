/* Escreva um programa que insere três inteiros a partir do teclado e imprime a soma, a média, o produto, o menor e o maior desses números. 
O diálogo de tela deve se parecer com o seguinte:
Entre com três valores inteiros: 13 27 14
Soma: 54
Média: 18
Produto: 4914
O menor: 13
O maior: 27 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int a;
    int b;
    int c;
    int menor;
    int maior;

    cout << "Entre com tres valores inteiros: ";
    cin >> a >> b >> c;

    menor = a;
    if(b < menor)
        menor = b;
    if(c < menor) 
        menor = c;

    maior = a;
    if(b > maior)
        maior = b;
    if(c > maior)
        maior = c;

    cout << "Soma: " << a + b + c << endl;
    cout << "Media: " << (a + b + c) / 3 << endl;
    cout << "Menor: " << menor << endl; 
    cout << "Maior: " << maior << endl; 

    return 0;
}