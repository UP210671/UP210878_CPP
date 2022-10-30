/*
Date: 26/10/2022
Author: Vinc3nt
Email: up210878@alumnos.upa.edu.mx
Description: ?
Last Modification: 26/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;

void Tablero(int);

//---------------------ISSUE---------------------------
/*
   |   |   
---|---|---
   |   |
---|---|---
   |   |

*/
//------------------ MAIN FUNCTION ---------------------

int main(){
    int tablero;
    Tablero(tablero);
    return 0;
}



void Tablero(int){
    for (int fila = 0; fila < 5; fila++)
    {
            for (int columna = 0; columna < 12; columna++)
            {
                if (fila== 1 || fila == 3){
                    cout << "-";
                }else{
                    cout << " ";
                }
                if (columna==3 || columna == 7)
                {
                    cout<<"|";
                }
                
            }
        cout << "\n";
    }
}