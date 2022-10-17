/*
Date: 12/10/2022
Author: Vinc3nt
Email: UP210878@alumnos.upa.edu.mx
Description: Product table (math)
Last Modification: 13/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;

//---------------------ISSUE---------------------------

// Make a program makes a table that multiplies 2 values one acts as the multiplier and the other as the number of times the product is made

//------------------ MAIN FUNCTION ---------------------

int main()
{
    int counter, numberinput;
    do
    {
        cout << "Write a number to multiply by "; // Multiplicative
        cin >> numberinput;
        cout << "How many times do you want it multiplied "; // How many times
        cin >> counter;
        if (counter <= 0)
        {
            cout << "\nInvalid written number, try again please\n\n"; // If the number is invalid, repeat the process
        }
        else
        {
            for (int i = 0; i < 65; i++)
            {
                cout << "="; // Header
            }
            cout << "\n";
            for (int i = 1; i <= counter; i++)
            {
                cout << "|\t" << i << "\tX\t" << numberinput << "\t\t=\t" << (numberinput * i) << "\t\t|\n|"; // Table format using \t for tab
                for (int i = 0; i < 63; i++)
                {
                    cout << "-";
                }
                cout << "|\n";
            }
        }
    } while (counter <= 0); // Loop if the times multiplied is invalid

    return 0;
}