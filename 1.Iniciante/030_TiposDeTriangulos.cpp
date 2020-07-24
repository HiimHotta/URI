/******************************************************************************************************************

Leia  3  valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o 
maior  dos  3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes
casos, sempre escrevendo uma mensagem adequada:

-se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
-se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
-se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
-se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
-se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
-se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

Entrada
A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
Imprima todas as classificações do triângulo especificado na entrada.

******************************************************************************************************************/


#include <iostream>
#include <bits/stdc++.h> 
 
using namespace std;
 
int main() {
    
    //a, b, c criados para facilitar visualizacao
    double a, b, c, side[3], aux;
    
    cin >> side[0] >> side[1] >> side[2];
    
    sort (side, side + 3);
    
    a = side[2]; b = side[1]; c = side[0];
    
    if (a >= b + c)
        cout << "NAO FORMA TRIANGULO" << endl;
    
    else if (a * a == b * b + c * c)
        cout << "TRIANGULO RETANGULO" << endl;
        
    else if (a * a > b * b + c * c)
        cout << "TRIANGULO OBTUSANGULO" << endl;
        
    else if (a * a < b * b + c * c)
        cout << "TRIANGULO ACUTANGULO" << endl;
    
    if (a == b && b == c)
        cout << "TRIANGULO EQUILATERO" << endl;
        
    else if (a == b || b == c || a == c)
        cout << "TRIANGULO ISOSCELES" << endl;
    
    return 0;
}
