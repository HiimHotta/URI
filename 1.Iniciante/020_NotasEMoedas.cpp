/*********************************************************************************************************

Leia  um  valor  de  ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A
seguir,  calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas
consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A
seguir mostre a relação de notas necessárias.


Entrada


O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).


Saída


Imprima  a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo
fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.

*********************************************************************************************************/
#include <iostream>
 
using namespace std;
 
int main() {
    
    int nota, notaAux = 0, notas[] = {100, 50, 20, 10, 5, 2};
    
    int moeda, moedaAux, moedas[] = {100, 50, 25, 10, 5, 1};
    
    double n;
    
    cin >> n;
    
    nota = int (n);
    
    moeda = (n - nota) * 100;
    
    cout << "NOTAS:" << endl;
    
    for (int i : notas) {
        notaAux = nota / i;
        cout << notaAux << " nota(s) de R$ " << i << ".00" << endl;
        nota -= notaAux * i;
    }
    
    moeda += nota * 100;
    
    cout.precision (2);
    
    cout << "MOEDAS:" << endl;
    
    for (int i : moedas) {
        
        double aux = i / 100.0;
        
        moedaAux = moeda / i;
        
        cout << moedaAux << " moeda(s) de R$ " << fixed << aux << endl;
        moeda -= moedaAux * i;
    }
    
    return 0;
}
