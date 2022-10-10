/*
Date: 5/10/2022
Author: Vinc3nt
Email: UP210878@alumnos.upa.edu.mx
Description: Show a sum of products.
Last Modification: 10/10/2022
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
        cin >> amount;//Amount of products
        if (amount <= 0)//In case the product number is invalid, exit the loop
        {
            cout << "\n------Invalid amount, exiting program-----\n";
            numproducto++;
            break;
        }
        cout << "Price: ";
        cin >> price;//Price input
        if (price < 0)
        {
            cout << "\n------Invalid amount, exiting program-----\n";//In case the price is invalid, exit the loop before doing the sum
            numproducto++;
            break;
        }
        numproducto++;
        total += (price * amount);//Calculate total value, repeat the loop
    } while (price != 0);//Keep repeating until the price inputed equals 0
    cout << "\nYou've inputted a total of " << numproducto - 2 << " different products. ";
    cout << "\nYour total is: " << total << "$ \n\n";
    return 0;
}
