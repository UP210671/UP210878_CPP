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
int TurnoJugador = 1;
char AreaJuego[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int SeleccionarJugada();
void ReemplazarCasilla(int Jugada);
bool ComprobarJugadaOcupada(int Jugada);
void ModoDeJuego(int);
bool VerificarGanador(int Jugada);

//---------------------ISSUE---------------------------
/*
 1 | 2 | 3  
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

*/
//------------------ MAIN FUNCTION ---------------------

int main(){
    int tablero,jugador1,jugador2,computadora,jugada;
    bool casillaocupada = true, ganador = true;
    Tablero(tablero);
    ganador = VerificarGanador(jugada);
    do{
    jugada = SeleccionarJugada();
    casillaocupada = ComprobarJugadaOcupada(jugada);
    if (casillaocupada == true)
    {
        do
        {
            cout << "Casilla invalida, elija otra\n";
            break;
        } while (casillaocupada == true);
    }
    else if (casillaocupada == false)
    {
        system ("CLS");
        ReemplazarCasilla(jugada);
        Tablero(tablero);
        TurnoJugador++;
    }
    }while(ganador == false);
    return 0;
}



int SeleccionarJugada(){
    int Jugada;
    do
    {
    cout << "Dame tu jugada: \n";
    cin >> Jugada;
    } while (Jugada < 0 && Jugada >= 9);
    
    return Jugada;
}



bool ComprobarJugadaOcupada(int Jugada){
int row = Jugada/10, col = Jugada-1; 
        if (AreaJuego[row][col]=='X' || AreaJuego[row][col]=='O')
        {
            return true;//Significa que la casilla esta ocupada
        }
        else
        {
            return false;
        }
        
    }

void ReemplazarCasilla(int Jugada){
    if (TurnoJugador%2==0){
    int row = Jugada/10, col = Jugada - 1;
    AreaJuego[row][col]='O';
    }
    else
    {
    int row = Jugada/10, col = Jugada - 1;
    AreaJuego[row][col]='X';
    }
    
}

void Tablero(int){
    int x=0, y=0;
    for (int fila = 0; fila < 5; fila++)
    {
            for (int columna = 0; columna < 9; columna++)
            {
                if (fila== 1 || fila == 3){
                    cout << "-";
                }else if (columna==1 || columna == 4 || columna == 7)
                {
                    cout << AreaJuego[x][y];
                    y++;
                }else
                {
                    cout << " ";
                }
                if (columna==2 || columna == 5)
                {
                    cout<<"|";
                }
            }
        cout << "\n";
        if (fila%2==0)
        {
            x++;
        }
        
        y=0;
    }
}

bool VerificarGanador(int Jugada){
    int punto = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (AreaJuego[row][col]=='X' || AreaJuego[row][col]=='O')
            {
                punto++;
            }
            else if (AreaJuego[col][row]=='X' || AreaJuego[row][col] == 'O')
            {
                punto++;
            }
        }
        
    }
    if (punto>3)
    {
        return true;
    }else{
        return false;
    }
    
}
