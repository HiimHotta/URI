/******************************************************************************************************************
Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável
PROD. A seguir mostre a variável PROD com mensagem correspondente.   

Entrada
O arquivo de entrada contém 2 valores inteiros.

Saída
Imprima  a  mensagem  "PROD"  e a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois da
igualdade.  Não  esqueça  de  imprimir  o  fim  de linha após o produto, caso contrário seu programa apresentará a
mensagem: “Presentation Error”.

******************************************************************************************************************/

#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
     int a, b, prod;
     
     cin >> a; cin >> b;
     
     prod = a * b;
     
     cout << "PROD = " << prod << endl;
 
    return 0;
}
