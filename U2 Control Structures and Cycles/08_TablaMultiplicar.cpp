/*
Date: 5/10/2022
Author: Vinc3nt
Email: UP210878@alumnos.upa.edu.mx
Description: Product table (math)
Last Modification: 12/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;

//---------------------ISSUE---------------------------

// Make a program makes a table that multiplies 2 values one acts as the multiplier and the other as the number of times the product is made

//------------------ MAIN FUNCTION ---------------------

int main(){
    int counter, numberinput;
    cout << "Write a number to multiply by ";
    cin >> numberinput;
    cout << "How many times do you want it multiplied ";
    cin >> counter;
    cout << "|";
    for (int i = 0; i < 63; i++)
    {
        cout << "-";
    }
    cout << "|";
    cout << "\n";
    for (int i = 1; i <= counter; i++)
    {
        cout << "|\t"<< i << "\tX\t" << numberinput << "\t\t=\t" << (numberinput*i) << "\t\t|\n|";
        for (int i = 0; i < 63; i++)
        {
            cout << "-";
        }
        cout << "|\n";
    }

    return 0;
}

    /*
    cout << "|";
    for (int i = 0; i < 30; i++)
    {
        cout << "-";
    }
    cout << "|\n|";
    for (int i = 0; i < 30; i++)
    {
        cout << " ";
    }
    cout << "\n";
    for (int i = 1; i <= counter; i++)
    {
        cout << "|"<< i << "     X     " << numberinput << "     =     " << (numberinput*i) << "     |\n|------------------------------|\n";
    }

        for (int columna = 0; columna <= 30; columna++)
    {
        cout << "\n\n";
        for (int fila = 0; fila <= 30; fila++)
        {
            cout << "-";
           
        }
        
    }
    */