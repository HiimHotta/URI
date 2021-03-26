/******************************************************************************************************************
Read an integer number between 1 and 12, including. Corresponding to this number, you must print the month of the
year, in english, with the first letter in uppercase.

Input
The input contains only an integer number.

Output
Print the name of the month according to the input number, with the first letter in uppercase.
******************************************************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;
 
int main() {

	int input;

	cin >> input;

    string month [12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", \
                         "October", "November", "December"};

    cout << month [input - 1] << endl;

    return 0;
}
