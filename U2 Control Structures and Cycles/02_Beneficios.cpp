/*
Date: 26/09/2022 
Author: Vinc3nt
Email: UP210878@alumnos.upa.edu.mx
Description: Bonus to employees.
Last Modification: 26/09/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------

#include <iostream>

using namespace std;

//---------------------- ISSUE -------------------------

/*
Bono de 2400 en base a su calificacion anual

Nivel   Puntuacion
Inaceptable 0.0
Aceptable   0.4
Meritorio   0.6 o más
*/

//------------------ MAIN FUNCTION ---------------------
int main(){
    double calificacion, bono=2400;
    cout << "Ingrese su calificacion\n";
    cin >> calificacion;
    if ((calificacion == 0.0) || (calificacion == 0.4) || (calificacion >= 0.6) && calificacion<=1){
        if (calificacion == 0.0){
        cout << "Su calificacion es Inaceptable.";
        }
        else if (calificacion == 0.4){
        cout << "Su calificacion es Aceptable.";
        }   
        else if (calificacion >= 0.6){
        cout << "Su calificacion es Meritoria.";
        }
        cout << "\nSu calificacion es de " << calificacion << " por lo que recibira un bono del " << (calificacion*100) << "%: $" << (bono*calificacion) << "\n";
    } 
    else {
        cout << "\nSu calificacion es invalida para la evaluación.\n";
    }
    return 0;
}
