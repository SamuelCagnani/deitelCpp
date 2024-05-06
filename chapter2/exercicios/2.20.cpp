/* Escreva um programa que lê o raio de um círculo como um inteiro e imprime o diâmetro, a circunferência e a área do círculo. Utilize o 
valor constante 3,14159 para π. Faça todos os cálculos em instruções de saída. [Nota: Neste capítulo, discutimos apenas as constantes e 
variáveis de inteiro. No Capítulo 4, discutimos números de ponto flutuante, isto é, valores que podem ter pontos de fração decimal.] */

#include <iostream>
#include <iomanip>

#define pi 3.14159

using std::cout;
using std::cin;
using std::endl;

int main() {

    int raio;

    cout << std::fixed << std::setprecision(4);

    cout << "Raio: ";
    cin >> raio;

    cout << "Diametro: " << (2 * raio) << endl;
    cout << "Circunferencia: " << (2 * pi * raio) << endl;
    cout << "Area: " << (pi * (raio * raio)) << endl;

    return 0;
}