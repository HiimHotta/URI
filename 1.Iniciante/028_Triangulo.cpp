  
/******************************************************************************************************************

Leia  3  valores  reais  (A,  B  e  C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o 
perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X


Entrada
A entrada contém três valores reais.


Saída
O resultado deve ser apresentado com uma casa decimal.
  
******************************************************************************************************************/

#include <iostream>
 
using namespace std;
 
int main() {
    
    double a, b, c;
    
    cin >> a >> b >> c;
    
    cout.precision (1);
    
    if (a + b > c && a + c > b && b + c > a)
        cout << "Perimetro = " << fixed << a + b + c << endl;
    
    else
        cout << "Area = " << fixed << c * (a + b) / 2 << endl;
    
 
    return 0;
}
