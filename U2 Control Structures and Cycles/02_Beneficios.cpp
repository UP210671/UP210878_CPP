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
En una determinada empresa, sus empleados son evaluados al final de cada año. 
Los puntos que pueden obtener en la evaluación comienzan en 0.0 y pueden ir aumentando, 
traduciéndose en mejores beneficios. Los puntos que pueden conseguir 
los empleados pueden ser 0.0, 0.4, 0.6 o más, pero no valores intermedios 
entre las cifras mencionadas. A continuación se muestra una tabla con los 
niveles correspondientes a cada puntuación. La cantidad de dinero conseguida
en cada nivel es de $2,400 multiplicada por la puntuación del nivel.

Nivel	Puntuación
Inaceptable	0.0
Aceptable	0.4
Meritorio	0.6 o más
Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento, 
así como la cantidad de dinero que recibirá el usuario.
*/

//------------------ MAIN FUNCTION ---------------------
int main(){
    double calificacion, bono=2400;
    cout << "Ingrese su calificacion\n";
    cin >> calificacion;
    if ((calificacion == 0.0) || (calificacion == 0.4) || (calificacion >= 0.6) && calificacion<=1){//Multiple If conditions, the number must be 0,0.4 or greater than 0.6 and being lower than 1.
        if (calificacion == 0.0){//Print out evaluation level of the employee
            cout << "Su calificacion es Inaceptable.";
        }
        else if (calificacion == 0.4){
            cout << "Su calificacion es Aceptable.";
        }   
        else if (calificacion >= 0.6){
            cout << "Su calificacion es Meritoria.";
        }
        cout << "\nSu calificacion es de " << calificacion << " por lo que recibira un bono del " << (calificacion*100) << "%: $" << (bono*calificacion) << "\n";//Print out percentage and value of the bonus
    } 
    else {
        cout << "\nSu calificacion es invalida para la evaluacion.\n";//In case the number is invalid
    }
    return 0;
}
