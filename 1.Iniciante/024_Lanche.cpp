
/*************************************************************************************************************************

Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e
mostre o valor da conta a pagar.

https://www.urionlinejudge.com.br/judge/pt/problems/view/1038


Entrada


O  arquivo  de  entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela
acima.


Saída


O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.

*************************************************************************************************************************/

#include <iostream>
 
using namespace std;
 
int main() {
    
    int cod, quant;
    
    // se fossem valores fornecidos no input faria diferente,
    // contudo, irei fazer um "abuso" da entrada.
    double preco[] = {4.0, 4.5, 5.0, 2.0, 1.5};
    
    cin >> cod >> quant;
    
    cout.precision (2);
    
    cout << "Total: R$ " << fixed << quant * preco[cod - 1] << endl;
    
    return 0;
}
