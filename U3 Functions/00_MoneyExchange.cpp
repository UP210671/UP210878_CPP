/*
Date: 24/10/2022
Author: Vinc3nt
Email: up210878@alumnos.upa.edu.mx
Description: Program that gives out change in money values
Last Modification: 24/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;

void Cambio(int num); // Prototype Function
void ImprimirCambio(int);

int quinientos=0, doscientos=0, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, dos=0, uno=0;
//---------------------ISSUE---------------------------
/*
No issue. Test file.
*/
//------------------ MAIN FUNCTION ---------------------

int main()
{
    int money;
    cout << "Give me a money amount: \n";
    cin >> money;
    Cambio(money);
    ImprimirCambio(money);
    return 0;
}

void Cambio(int num)
{
    do
    {
        (num >= 500) ? quinientos++, num -= 500 : //If the value exceeds 500, substract 500 to the total amount and add 1 to the $500 bill value
            (num >= 200) ? doscientos++, num -= 200 : //If the value exceeds 200, substract 200 to the total amount and add 1 to the $200 bill value
                (num >= 100) ? cien++, num -= 100 : //Same thing but with $100
                    (num >= 50) ? cincuenta++, num -= 50 : //$50
                        (num >= 20) ? veinte++, num -= 20 : //$20
                            (num >= 10) ? diez++, num -= 10 : //$10
                                (num >= 5) ? cinco++, num -= 5 : //$5
                                    (num >= 2) ? dos++, num -= 2 : //$2
                                        (num >= 1) ? uno++, num -= 1 : // 1$
                                             uno;
    } while (num > 0);
}
void ImprimirCambio(int num)
{
    cout << "The amount you inputted is $" << num << "\nYour change is: ";
    cout << "\n$500 = " << quinientos;
    cout << "\n$200 = " << doscientos;
    cout << "\n$100 = " << cien;
    cout << "\n$50 = " << cincuenta;
    cout << "\n$20 = " << veinte;
    cout << "\n$10 = " << diez;
    cout << "\n$5 = " << cinco;
    cout << "\n$2 = " << dos;
    cout << "\n$1 = " << uno << endl;
}