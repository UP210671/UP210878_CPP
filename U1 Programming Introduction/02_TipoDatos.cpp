/*
Date: 17/09/2022 
Author: VVM UP210878
Email: UP210878@alumnos.upa.edu.mx
Description: Types of data, values and range.
Last Modification: 21/09/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream> //Output input library
#include <stdio.h> //Library for printf scanf

using namespace std; //Make iostream easier to use, avoid std::
//------------------ MAIN FUNCTION ---------------------

int main(){
    short int pequeno = 24;
    unsigned short int pequepositivo = 345;
    unsigned int absoluto = 456875;
    int entero = 46;
    long int largo = 324090;
    long long int extremo = 3942379;
    unsigned long long int hardcore = 230482304829;
    float flotante = 2.565464645654;
    double grande = 2.565465654654;
    char character = 83;

    cout << "Tipos de datos: " << endl;

    cout << "El numero entero corto es: " << pequeno << endl;
    cout << "El tamaño del entero pequeño es: " << sizeof(pequeno) << " bytes" << endl << endl; // sizeof shows the size of the data in bytes
    
    cout << "El numero absoluto pequeño es: " << pequepositivo << endl;
    cout << "El tamaño del absoluto pequeño es: " << sizeof(pequepositivo) << " bytes" << endl << endl;
    
    cout << "El numero absoluto es: " << absoluto << endl;
    cout << "El tamaño del valor absoluto es: " << sizeof(absoluto) << " bytes" << endl << endl;

    cout << "El número entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << " bytes" << endl << endl;

    cout << "El número entero largo es: " << largo << endl;
    cout << "El tamaño del entero largo es: " << sizeof(largo) << " bytes" << endl << endl;

    cout << "El número entero muy largo es: " << extremo << endl;
    cout << "El tamaño del entero muy largo es: " << sizeof(extremo) << " bytes" << endl << endl;

    cout << "El número entero positivo más grande es: " << hardcore << endl;
    cout << "El tamaño del entero positivo más grande es: " << sizeof(hardcore) << " bytes" << endl << endl;

    cout << "El número flotante es " << flotante << endl;
    cout << "El tamaño del flotante es: " << sizeof(flotante) << " bytes" << endl << endl;

    cout << "El número double es " << grande << endl;
    cout << "El tamaño del double es: " << sizeof(grande) << endl << endl;

    cout << "El caracter char es: " << character << endl;
    cout << "El tamaño del char es: " << sizeof(character) << " bytes" << endl << endl;

    cout << "......................................." << endl;

    printf("Usando printf de la libreria stdio.h \n");
    printf("El número entero es: %i \n", entero);
    printf("El número flotante es: %3.3f \n", flotante);
    printf("El numero double es: %lf \n", grande);
    printf("El caracter char es: %1c \n", character);

/*Sources:
https://github.com/UPA-ISC/ProgramacionCpp/blob/main/U1/02_TipoDatos.cpp
https://www.geeksforgeeks.org/c-data-types/
https://cplusplus.com/reference/cstdio/printf/
*/
    return 0;
}