/*
Date: 5/10/2022
Author: Vinc3nt
Email: UP210878@alumnos.upa.edu.mx
Description: Show a sum of products.
Last Modification: 5/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;

//---------------------ISSUE---------------------------

/*Read an infinite amount of products, their price and at the end show the total to pay. To know when to end, the user must input a 0.*/

//------------------ MAIN FUNCTION ---------------------
int main()
{
    int numproducto = 1;
    float price, amount, total = 0;
    cout << "Welcome to P.A.Y, please input the amount and price of your products. To end the program, type a 0\n\n";
    do
    {
        cout << "Product " << numproducto << "\nAmount: ";
        cin >> amount;
        if (amount <= 0)
        {
            cout << "\n------Invalid amount, exiting program-----\n";
            break;
        }
        cout << "Price: ";
        cin >> price;
        if (price < 0)
        {
            cout << "\n------Invalid amount, exiting program-----\n";
            break;
        }
        numproducto++;
        total += (price * amount);
    } while (price != 0);
    cout << "\nYou've inputted a total of " << numproducto - 2 << " different products. ";
    cout << "\nYour total is: " << total << "$ \n\n";
    return 0;
}
