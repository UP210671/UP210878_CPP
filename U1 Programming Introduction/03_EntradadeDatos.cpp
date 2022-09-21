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

    cout << "---------------Ingreso de datos por el usuario---------------- " << endl;
    cout << "Ingresa un dato de tipo entero: " << endl;
    cin >> entero;
    cout << "El dato ingresado es: " << entero << endl;

    cout << "Ingresa un dato de tipo flotante: " << endl;
    cin >> flotante;
    cout << "El dato ingresado es: " << flotante << endl;

    cout << "Ingresa un dato de tipo double: " << endl;
    cin >> grande;
    cout << "El dato ingresado es: " << grande << endl;

    cout << "Ingresa un dato de tipo caracter: " << endl;
    cin >> caracter;
    cout << "El dato ingresado es: " << caracter << endl;

    printf("\n\n===========================\n\n"); //Usando printf y scanf (Wakala)

    printf("Este programa muestra el ingreso de datos por el usuario. \n");
    printf("Ingresa un dato de tipo entero: ");
    scanf("%d", &entero);
    printf("El dato ingresado es:  %d \n\n", entero);

    printf("Ingresa un dato de tipo flotante: ");
    scanf("%f", &flotante);
    printf("El dato ingresado es:  %f \n\n", flotante);

    printf("Ingresa un dato de tipo double: ");
    scanf("%lf", &grande);
    printf("El dato ingresado es:  %lf \n\n", grande);

    printf("Ingresa un dato de tipo caracter: ");
    scanf("%s", &caracter);
    printf("El dato ingresado es:  %c \n\n", caracter);

    return 0;
}
