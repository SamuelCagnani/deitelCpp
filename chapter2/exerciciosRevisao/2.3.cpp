#include <iostream>

int main() {

    // Escreva uma única instrução C++ para realizar cada uma das seguintes tarefas (suponha que as declarações using não foram utilizadas):

    // a) Declare as variáveis c, thisIsAVariable, q76354 e number como sendo do tipo int.
    int c, thisIsAVariable, q76354, number;
    
    /* b) Solicite que o usuário insira um inteiro. Termine sua mensagem de solicitação com dois-pontos (:) seguido por um espaço e deixe o 
    cursor posicionado depois do espaço. */
    std::cout << "Insira um numero inteiro: ";

    // c) Leia um inteiro do usuário no teclado e armazene o valor inserido na variável do tipo inteiro number.
    std::cin >> number;

    // d) Se a variável number não for igual a 7, imprima “The variable number is not equal to 7”.
    if(number != 7)
        std::cout << "The variable number is not equal to 7\n";

    // e) Imprima a mensagem “This is a C++ program” em uma linha.
    std::cout << "This is a C++ program\n";

    // f) Imprima a mensagem “This is a C++ program” em duas linhas. Termine a primeira linha com C++.
    std::cout << "This is a C++\nprogram\n";

    // g) Imprima a mensagem “This is a C++ program” com cada palavra em uma linha separada.
    std::cout << "This\nis\na\nC++\nprogram\n";

    // h) Imprima a mensagem “This is a C++ program” com cada palavra separada da palavra seguinte por uma tabulação.
    std::cout << "This\nis\na\nC++\nprogram\n";
    
}