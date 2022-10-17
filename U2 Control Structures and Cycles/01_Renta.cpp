/*
Date: 22/09/2022 
Author: Vinc3nt (Figured its better than using an ID)
Email: UP210878@alumnos.upa.edu.mx
Description: Rent discounts.
Last Modification: 16/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------

#include <iostream>

using namespace std;

//---------------------- ISSUE -------------------------

/*
Los tramos impositivos para la declaración de la renta en un determinado país son los siguientes:

Renta	Tipo impositivo
Menos de $10,000	5%
Entre $10,000 y $20,000	15%
Entre $20,000 y $35,000	20%
Entre $35,000 y $60,000	30%
Más de $60,000	45%
Escribir un programa que pregunte al usuario su renta anual y muestre por 
pantalla el tipo impositivo que le corresponde.
*/

//------------------ MAIN FUNCTION ---------------------

int main(){
    float Renta; 
    float Impuesto;
    cout << "Input your annual rent:" << endl;
    cin >> Renta;
    if (Renta > 0 )//Is the input a valid number?
    {
        if (Renta >= 60000)
        {
            Impuesto = Renta*.45;
        }
        else if (Renta >= 35000)
        {
            Impuesto = Renta*.30;
        }
        else if (Renta >= 20000)
        {
            Impuesto = Renta*.20;
        }
        else if (Renta >= 10000)
        {
            Impuesto = Renta*.15;
        }
        else if (Renta >= 0)
        {
            Impuesto = Renta*.05;
        }
        //Print out everything
        cout << endl << "Your annual rent is: $" << Renta << endl;//Rent value inputted
        cout << "You have a tax of " << (Impuesto/Renta)*100 << "%: $" << Impuesto << endl; //Print out tax percentage followed by money value
        cout << "The total amount to pay is: $" << Renta + Impuesto << endl << "\nTable:\n"; //Table visualization (Alternative view)
        cout << "RENT\t\tTAX(%)\t\tTAX($)\t\tTOTAL($)"<< endl;
        cout << "$ " << Renta << "\t\t" << (Impuesto/Renta)*100 << "%\t\t$ " << Impuesto << "\t\t$ " << Renta + Impuesto << endl;
    }
    else 
    {
        cout << "You've inputted an invalid value :( ; try again please" << endl;//In case the value is not valid; ask the user to try again.
    }
    return 0;
}