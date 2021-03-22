/******************************************************************************************************************
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar
em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.
Saída
Apresente a duração do jogo conforme exemplo abaixo.
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
