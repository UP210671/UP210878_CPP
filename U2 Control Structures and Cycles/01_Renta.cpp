/*
Date: 22/09/2022 
Author: Vinc3nt (Figured its better than using an ID)
Email: UP210878@alumnos.upa.edu.mx
Description: Rent discounts.
Last Modification: 22/09/2022
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
    int Renta, Descuento;
    cout << "Ingrese su pago de renta";
    cin >> Renta;
    if(Renta>=60000){
        Descuento=Renta*.45
    }

    return 0;
}