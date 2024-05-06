/* Exiba o seguinte padrão de tabuleiro com oito instruções de saída e, em seguida, exiba o mesmo padrão utilizando o menor número de 
instruções possível. */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    cout << "* * * * * * *" << endl;
    cout << " * * * * * * *" << endl;
    cout << "* * * * * * *" << endl;
    cout << " * * * * * * *" << endl;
    cout << "* * * * * * *" << endl;
    cout << " * * * * * * *" << endl;
    cout << "* * * * * * *" << endl;
    cout << " * * * * * * *" << endl;

    cout << "\n\n";

    for(int i = 0; i < 4; i++) {
        cout << "* * * * * * *" << endl;
        cout << " * * * * * * *" << endl; 
    }

    return 0;
}