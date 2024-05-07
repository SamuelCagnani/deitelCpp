// Figura 3.1: fig03_01.cpp
// Define uma classe GradeBook com uma função membro displayMessage()
// Cria um objeto do tipo GradeBook e chama sua função displayMessage()

#include <iostream>
using std::cout;
using std::endl;

// Definição da classe GradeBook
class GradeBook
{
public: // rótulo especificador de acesso public:
    // função que exibe a mensagem de boas-vindas ao usuário do GradeBook
    void displayMessage()
    {
        cout << "Welcome to the Grade Book!" << endl;
    } // fim da função displayMessage
}; // fim da classe GradeBook

int main() {

    GradeBook firstGradeBook; // Cria um objeto do tipo GradeBook chamado firstGradeBook
    firstGradeBook.displayMessage(); // chama a função membro displayMessage do GradeBook específico

    return 0;
}