/*********************************************************************************************************

Leia  um  valor  inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e
informe-o expresso no formato horas:minutos:segundos.


Entrada


O arquivo de entrada contém um valor inteiro N.


Saída


Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme 
exemplo fornecido.

*********************************************************************************************************/

#include <iostream>
 
using namespace std;
 
int main() {
    
    int n, aux;
    
    cin >> n;
    
    //Hour
    aux = n / 3600;
    cout << aux << ":";
    
    n -= 3600 * aux;
    
    //Minutes
    aux = n / 60;
    cout << aux << ":";
    
    n -= 60 * aux;
    
    //Seconds
    cout << n << endl;
    
    return 0;
}
