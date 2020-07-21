/*********************************************************************************************************

Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode
ser  decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a
relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima  o  valor  lido  e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o
exemplo  fornecido.  Não  esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa 
apresentará a mensagem: “Presentation Error”.

*********************************************************************************************************/

#include <iostream>
 
using namespace std;
 
int main() {
    
    int val, tmp;
    
    cin >> val;
    
    cout << val << endl;
    
    tmp = val / 100;
    if (tmp > 0) {
        val = val % 100;
    }
    cout << tmp << " nota(s) de R$ 100,00" << endl;
        
    tmp = val / 50;
    if (tmp > 0) {
        val = val % 50;
    }
    cout << tmp << " nota(s) de R$ 50,00" << endl;
    
    tmp = val / 20;
    if (tmp > 0) {
        val = val % 20;
    }
    cout << tmp << " nota(s) de R$ 20,00" << endl;
    
    tmp = val / 10;
    if (tmp > 0) {
        val = val % 10;
    }
    cout << tmp << " nota(s) de R$ 10,00" << endl;
    
    tmp = val / 5;
    if (tmp > 0) {
        val = val % 5;
    }
    cout << tmp << " nota(s) de R$ 5,00" << endl;
    
    tmp = val / 2;
    if (tmp > 0) {
        val = val % 2;
    }
    cout << tmp << " nota(s) de R$ 2,00" << endl;
    
    cout << val << " nota(s) de R$ 1,00" << endl;
    
    return 0;
}
