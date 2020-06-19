/**********************************************************************************************************
Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o
código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor
a ser pago.

Entrada

O  arquivo  de  entrada  contém  duas  linhas de dados. Em cada linha haverá 3 valores, respectivamente dois
inteiros e um valor com 2 casas decimais.

Saída

A  saída  deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os
dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.

**********************************************************************************************************/

#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    //codigo e quantidade
    int cod1, quant1, cod2, quant2;
    double preco1, preco2, total;
    
    cin >> cod1 >> quant1 >> preco1;
    
    cin >> cod2 >> quant2 >> preco2;
    
    total = quant1 * preco1 + quant2 * preco2;
    
    cout << fixed << setprecision (2) << "VALOR A PAGAR: R$ " << total << endl;
    
    return 0;
}
