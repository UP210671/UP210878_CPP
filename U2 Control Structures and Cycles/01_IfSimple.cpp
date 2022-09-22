/*
Date: 22/09/2022 
Author: VVM UP210878
Email: UP210878@alumnos.upa.edu.mx
Description: If examples and basic structure
Last Modification: 22/09/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------

#include <iostream>
using namespace std;

//------------------ MAIN FUNCTION ---------------------

int main(){
    int num;
    int data = 1;

    cout << "Ingresa un numero entero";//ASk user for input
    cin >> num;
    if (num == data){//Boolean check
        cout << "El numero es igual al dato" << endl;
    } 
    else
    if (num > data){//Big number check
        cout << "El numero es mayor al dato" << endl;
    }
    else
    if (num < data){//Lil number check
        cout << "El numero es menor al dato" << endl;

    }
    else
    if (num != data){//Dif number check
        cout << "El numero es distinto al dato" << endl;
    }
    
    return 0;
}