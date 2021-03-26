/******************************************************************************************************************
Write a program that prints all even numbers between 1 and 100, including them if it is the case.

Input
In this extremely simple problem there is no input.

Output
Print all even numbers between 1 and 100, including them, one by row.
******************************************************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;
 
int main() {

	double input[6] = {}, pos = 0;


	for (int i = 0; i < 6; i++) {
		cin >> input[i];

		if (input[i] > 0)
			pos++;
	}

	cout << pos << " valores positivos" << endl;

    return 0;
}
