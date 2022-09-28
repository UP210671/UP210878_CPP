/*
Date: 28/09/2022 
Author: Vinc3nt
Email: UP210878@alumnos.upa.edu.mx
Description: Game store prices.
Last Modification: 28/09/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------

#include <iostream>

using namespace std;

//---------------------- ISSUE (IN SPANISH) -------------------------

/*
Escribir un programa para una empresa que tiene salas de juegos para todas las edades y
quiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar. El
programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si
el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5 y
si es mayor de 18 años, $10.
*/

//------------------ MAIN FUNCTION ---------------------

int main(){
    int age,price;
    cout << "Customer age: \n";//Ask for the customer age
    cin >> age;
    if (age >= 0){
        if (age >= 0 && age <4){
            price = 0;
        }
        else if (age >= 4 && age <= 18){
            price = 5;
        }
        else if (age > 18){
            price = 10;
        }
        cout << "\nCustomer Age: " << age << "\nPrice to pay: $" << price << endl;//Output customer age and price to pay
    }
    else {
        cout << "\nThe age you've inputted is invalid, try again.\n";//In case the age value is invalid
    }
    return 0;
}