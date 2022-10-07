/*
Date: 5/10/2022
Author: Vinc3nt
Email: UP210878@alumnos.upa.edu.mx
Description: Make a program that makes a Decimal number into a binary number.
Last Modification: 5/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;

//---------------------ISSUE---------------------------

// Make a program that reads a binary number greater than 0 and then transforms it into a binary value.

//------------------ MAIN FUNCTION ---------------------

int main()
{
    int decimal, num;
    string binary;
    do
    {
        cout << "Input a decimal number \n";
        cin >> num;
        if (num > 0)
        {
            while (num > 0)
            {
                if (num % 2 == 0)
                {
                    binary = '0' + binary;
                }
                else
                {
                    binary = '1' + binary;
                }
                num /= 2;
            }
            cout << "The number you've inputted is " << binary;
            cout << endl;
        }
        else if (num == 0)
        {
            cout << "You've inputted a 0\n";
        }
        else
        {
            cout << "The numer must be greater than 0\n";
        }
    } while (num < 0);
    return 0;
}
