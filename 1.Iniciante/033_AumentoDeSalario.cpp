/******************************************************************************************************************
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

Salário	Percentual de Reajuste
0 - 400.00          |   15%
400.01 - 800.00     |   12%
800.01 - 1200.00    |   10%
1200.01 - 2000.00   |   07%
Acima de 2000.00    |   04%

Leia  o  salário  do  funcionário  e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice
reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo.
******************************************************************************************************************/


#include <iostream>
 
using namespace std;
 
int main() {

	// _h -> horas, _min ->minutos, ini -> inicio
	// fim -> final, res -> resultado
    double ini, fim, reajuste; 

    int percentual;

    int tabela [5] = {15, 12, 10, 7, 4};

    cout.precision (2);
    
    cin >> ini;

    if (ini < 0)
    	return 1;

    if (ini <= 400)
    	percentual = tabela [0];

    else if (ini <= 800)
    	percentual = tabela [1];

    else if (ini <= 1200) 
    	percentual = tabela [2];

    else if (ini <= 2000) 
    	percentual = tabela [3];

    else
    	percentual = tabela [4];

    reajuste = ini * percentual / 100;

    cout << "Novo salario: " << fixed << ini + reajuste << endl;

    cout << "Reajuste ganho: " << fixed << reajuste << endl;

    cout << "Em percentual: " << percentual << " %" << endl;
    
    return 0;
}
