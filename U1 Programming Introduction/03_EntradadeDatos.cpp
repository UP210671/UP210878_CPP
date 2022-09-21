/*
Date: 21/09/2022 
Author: VVM UP210878
Email: UP210878@alumnos.upa.edu.mx
Description: Types of input.
Last Modification: 21/09/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>
#include <stdio.h>

using namespace std;

//------------------ MAIN FUNCTION ---------------------

int main() {
    int entero;
    float flotante;
    double grande;
    char caracter;

    printf("Este programa muestra el ingreso de datos por el usuario. \n");
    printf("Ingresa un dato de tipo entero: ");
    scanf("%d", &entero);
    printf("El dato ingresado es:  %d \n", entero);

    printf("\n===========================\n\n");

    cout << "Usando cout e cin (iostream): " << endl;
    cout << "Ingresa un dato de tipo entero: " << endl;
    cin >> entero;
    cout << "El dato ingresado es: " << entero << endl;

    return 0;
}
