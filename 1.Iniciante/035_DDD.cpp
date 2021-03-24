/******************************************************************************************************************
Read an integer number that is the code number for phone dialing. Then, print the destination according to the
following table:

https://www.urionlinejudge.com.br/judge/en/problems/view/1050


If the input number isn’t found in the above table, the output must be:
DDD nao cadastrado
That means “DDD not found” in Portuguese language.

Input
The input consists in a unique integer number.

Output
Print the city name corresponding to the input DDD. Print DDD nao cadastrado if doesn't exist corresponding DDD to
the typed number.
******************************************************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;
 
int main() {

    int input, ddd [8] = {61, 71, 11, 21, 32, 19, 27, 31};

    string destination [8] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas",\
                               "Vitoria", "Belo Horizonte"};

    cin >> input;

    for (int i = 0; i < 8; i++) {
    	if (ddd[i] == input) {
    		cout << destination[i] << endl;
    		return 0;
    	}
    }
    cout << "DDD nao cadastrado"<< endl;

    return 0;
}
