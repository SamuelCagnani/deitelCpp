/* Eis uma pequena antecipação do que está por vir. Neste capítulo, você aprendeu sobre inteiros e o tipo int. 
O C++ também pode representar letras maiúsculas, minúsculas e uma variedade considerável de símbolos especiais. O C++ utiliza inteiros pequenos internamente 
para representar cada caractere diferente. O conjunto de caracteres que um computador utiliza e das correspondentes representações na 
forma de inteiro desses caracteres é chamado conjunto de caracteres desse computador. Você pode imprimir um caractere colocando 
esse caractere entre aspas simples, como em
cout << ‘A’; // imprime um A maiúsculo
 Você pode imprimir o equivalente inteiro de um caractere utilizando static_cast da seguinte maneira:
cout << static_cast< int >( ‘A’ ); // imprime 'A' como um inteiro
 Isso é chamado de operação de coerção (introduzimos formalmente as coerções no Capítulo 4). Quando a instrução precedente executar, 
ela imprimirá o valor 65 (em sistemas que utilizam o conjunto de caracteres ASCII). Escreva um programa que imprime o número 
inteiro equivalente de um caractere digitado no teclado. Teste seu programa várias vezes utilizando letras maiúsculas, minúsculas, dígitos 
e caracteres especiais (como $). */

#include <iostream>

int main() {

    char caractere;

    std::cout << "Digite um caractere: ";
    std::cin >> caractere;

    std::cout << static_cast <int>(caractere) << std::endl;

    return 0;
}