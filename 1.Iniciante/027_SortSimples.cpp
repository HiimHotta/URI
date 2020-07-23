/******************************************************************************************************************
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha 
em branco e em seguida, os valores na sequência como foram lidos.


Entrada


A entrada contem três números inteiros.


Saída


Imprima a saída conforme foi especificado.

******************************************************************************************************************/

#include <iostream>
 
using namespace std;
 
int main() {
    
    int x, y, z;
    
    cin >> x >> y >> z;
    
    if (x < y) {
        if (x < z) {
            if (y < z)
                cout << x << endl << y << endl << z << endl;
            else
                cout << x << endl << z << endl << y << endl;
        }
        else 
            cout << z << endl << x << endl << y << endl;
    }
    
    else {
        if (x < z)
            cout << y << endl << x << endl << z << endl;
            
        else {
            if (y < z)
                cout << y << endl << z << endl << x << endl;
            else
                cout << z << endl << y << endl << x << endl;
        }
    }
    
    cout << endl << x << endl << y << endl << z << endl;
 
    return 0;
}
