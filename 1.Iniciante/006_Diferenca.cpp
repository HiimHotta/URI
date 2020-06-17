/***********************************************************************************************************
Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo
produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Saída
Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco
antes e depois da igualdade.

***********************************************************************************************************/

#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int a, b, c, d, dif;
     
     cin >> a >> b >> c >> d;
     
     dif = a * b - c * d;
     
     cout << "DIFERENCA = " << dif << endl;
 
    return 0;
}
