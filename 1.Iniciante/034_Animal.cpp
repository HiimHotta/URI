/******************************************************************************************************************
In this problem, your job is to read three Portuguese words. These words define an animal according to the table 
below, from left to right. After, print the chosen animal defined by these three words.

https://www.urionlinejudge.com.br/judge/en/problems/view/1049

Input
The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, 
with all letters in lowercase.

Output
Print the animal name according to the given input.
******************************************************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;
 
int main() {

    string word1, word2, word3, result;
    
    cin >> word1 >> word2 >> word3;

    if (word1.compare ("vertebrado") == 0) {
    	if (word2.compare ("ave") == 0) {
    		if (word3.compare ("carnivoro") == 0)
    			result = "aguia";

    		else if (word3.compare ("onivoro") == 0)
    			result = "pomba";

    		else
    			return -1;
    	}

    	else if (word2.compare ("mamifero") == 0) {
    		if (word3.compare ("onivoro") == 0)
    			result = "homem";

    		else if (word3.compare ("herbivoro") == 0)
    			result = "vaca";

    		else
    			return -1;
    	}
    	else 
    		return -1;
    }

    else if (word1.compare ("invertebrado") == 0) {
    	if (word2.compare ("inseto") == 0) {
    		if (word3.compare ("hematofago") == 0)
    			result = "pulga";

    		else if (word3.compare ("herbivoro") == 0)
    			result = "lagarta";

    		else
    			return -1;
    	}

    	else if (word2.compare ("anelideo") == 0) {
    		if (word3.compare ("hematofago") == 0)
    			result = "sanguessuga";

    		else if (word3.compare ("onivoro") == 0)
    			result = "minhoca";

    		else
    			return -1;
    	}
    	else 
    		return -1;
    }

    else
        return -1;

    cout << result << endl;
    
    return 0;
}
