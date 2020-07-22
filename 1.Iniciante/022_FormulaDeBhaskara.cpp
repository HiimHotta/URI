
/******************************************************************************************************************
Leia  3  valores  de  ponto  flutuante  e  efetue o cálculo das raízes da equação de Bhaskara. Se não for possível
calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de
numero negativo.


Entrada


Leia três valores de ponto flutuante (double) A, B e C.


Saída


Se  não  houver  possibilidade  de  calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário,
imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. 
Imprima sempre o final de linha após cada mensagem.

******************************************************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
    
    double a, b, c, delta, res;
    
    cin >> a >> b >> c;
    
    if (a  == 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    
    delta = b * b - 4 * a * c;
    
    if (delta < 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    
    cout.precision (5);
    
    cout << "R1 = " << fixed << (-b + sqrt (delta)) / (2 * a) << endl;
    
    cout << "R2 = " << fixed << (-b - sqrt (delta)) / (2 * a) << endl;
    
    return 0;
}
