// Calcula  o produto de três inteiros

#include <iostream> // Permite a utilização de objetos de entrada e saída

using std::cout; // O prOgrama utiliza cout
using std::cin; // o programa utiliza cin
using std::endl; // O programa utiliza enl;

// Função que inicia o programa
int main() {

    int x; // Declaração do primeiro inteiro    
    int y; // Declaração do segundo inteiro
    int z; // Declaração do terceiro inteiro
    int result; // Declaração da variável que armazenará o produto dos inteiros

    cout << "Enter three integers: "; // Pede dados ao usuário
    cin >> x >> y >> z; // Lê os dados e insere nas três variáveis

    result = x * y * z; // Atribui o produto dos três valores a variável result

    cout << "The product is " << result << endl; // Exibe ao usuário o resultado

    return 0; // Retorna ao computador que o programa foi um sucesso
} // Fim da função main