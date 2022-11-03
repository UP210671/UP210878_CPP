/*
Date: 28/10/2022
Author: Vinc3nt
Email: up210878@alumnos.upa.edu.mx
Description: Test Array dentro de array
Last Modification: 28/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

using namespace std;
int conjunto[5][5];
void InputMatriz(int matriz[5][5]);
void ImprimirMatriz(int matriz[5][5]);
//---------------------ISSUE---------------------------
/*
0}
1 }
2  }= int conjunto [5]
3 }
4}

0->{0,1,2,3,4}}
1->{0,1,2,3,4} }
2->{0,1,2,3,4}  }= int conjunto [5][5]
3->{0,1,2,3,4} }
4->{0,1,2,3,4}}

0->{0->{0,1,2,3,4},1->{0,1,2,3,4},2->{0,1,2,3,4},3->{0,1,2,3,4},4->{0,1,2,3,4}}}
1->{0->{0,1,2,3,4},1->{0,1,2,3,4},2->{0,1,2,3,4},3->{0,1,2,3,4},4->{0,1,2,3,4}} }
2->{0->{0,1,2,3,4},1->{0,1,2,3,4},2->{0,1,2,3,4},3->{0,1,2,3,4},4->{0,1,2,3,4}}  }= int conjunto [5][5][5]
3->{0->{0,1,2,3,4},1->{0,1,2,3,4},2->{0,1,2,3,4},3->{0,1,2,3,4},4->{0,1,2,3,4}} }
4->{0->{0,1,2,3,4},1->{0,1,2,3,4},2->{0,1,2,3,4},3->{0,1,2,3,4},4->{0,1,2,3,4}}}
*/
//------------------ MAIN FUNCTION ---------------------
int main(){
   InputMatriz(conjunto);
   ImprimirMatriz(conjunto);
   return 0;
}

void InputMatriz(int matriz[10][10]){
   for (int linea = 0; linea < 5; linea++)
   {
    for (int columna = 0; columna < 5; columna++)
    {
        cout << "Ingresa el dato de la linea " << linea << " y la columna " << columna;
        cin >> matriz[linea][columna];
    }
   }
}

void ImprimirMatriz(int matriz[10][10]){
   for (int linea = 0; linea < 5; linea++)
   {
    for (int columna = 0; columna < 5; columna++)
    {
        cout << matriz[linea][columna] << "\t";
    }
    cout << endl;
   }
}