/******************************************************************************************************************
Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

Entrada
Quatro números inteiros representando a hora de início e fim do jogo.

Saída
Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .
******************************************************************************************************************/


#include <iostream>
 
using namespace std;
 
int main() {

	// _h -> horas, _min ->minutos, ini -> inicio
	// fim -> final, res -> resultado
    int ini_h, ini_min, fim_h, fim_min, res_h, res_min;
    
    cin >> ini_h >> ini_min >> fim_h >> fim_min;

    // 4 casos
    if (ini_min < fim_min) {
    	res_min = fim_min - ini_min;

    	if (ini_h <= fim_h)
    		res_h = fim_h - ini_h;
    	
    	else
    		res_h = 24 + fim_h - ini_h;
    }

    else if (ini_min == fim_min) {
    	res_min = 0; 

    	if (ini_h < fim_h)
    		res_h = fim_h - ini_h;
    	
    	else
    		res_h = 24 + fim_h - ini_h;
    }

    else {
    	res_min = 60 + fim_min - ini_min;

    	if (ini_h < fim_h)
    		res_h = fim_h - ini_h - 1;

    	else
    		res_h = 24 + fim_h - ini_h - 1;
    }

    cout << "O JOGO DUROU " << res_h << " HORA(S) E " << res_min << " MINUTO(S)" << endl;
    
    return 0;
}
