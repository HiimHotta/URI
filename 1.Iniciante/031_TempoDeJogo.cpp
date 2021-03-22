/******************************************************************************************************************
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar
em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.
Saída
Apresente a duração do jogo conforme exemplo abaixo.
******************************************************************************************************************/

using namespace std;

int main() {

    int begin, end;

    cin >> begin >> end;

    if (begin >= end)
        cout << "O JOGO DUROU " << 24 - begin + end << " HORA(S)" << endl;

    else
        cout << "O JOGO DUROU " << end - begin << " HORA(S)" << endl;
