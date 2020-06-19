/****************************************************************************************************
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem
“eh o maior”. Utilize a fórmula:

MaiorAB = (a + b + abs (a - b)) / 2;

Obs.:  a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é 
necessário para chegar no resultado esperado.

Entrada

O arquivo de entrada contém três valores inteiros.

Saída

Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".


#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
    
    int a, b, c, m; //m de maior
    
    cin >> a >> b >> c;
    
    m = (a + b + abs (a - b)) / 2;
    
    m = (m + c + abs (m - c)) / 2;
    
    cout << m << " eh o maior" << endl;
 
    return 0;
}
