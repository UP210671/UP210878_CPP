/*
Date: 5/10/2022
Author: Vinc3nt
Email: UP210878@alumnos.upa.edu.mx
Description: Make a program that makes a binary number into a number of base 10 (Decimal).
Last Modification: 5/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>
#include <cmath>

using namespace std;

//---------------------ISSUE---------------------------

//Make a program that reads a binary number greater than 0 and then transforms it into a decimal value.

//------------------ MAIN FUNCTION ---------------------

int main(){
    int binary,decimal,contador=0;
    do
    {
        cin >> binary;
        decimal += ((binary)*(pow(2,contador)));
        contador++;
    } while (binary == 1 || binary == 0);
    cout << "\nThe value in decimal: "<< decimal;
    return 0;
}
