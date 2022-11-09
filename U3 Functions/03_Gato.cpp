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
int TurnoJugador = 0;
char AreaJuego[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int SeleccionarJugada();
void ReemplazarCasilla(int Jugada);
bool ComprobarJugadaOcupada(int Jugada);
void ModoDeJuego(int);
bool VerificarGanador(int Jugada);
void TurnoCPU(int);
//---------------------ISSUE---------------------------
/*
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

*/
//------------------ MAIN FUNCTION ---------------------

int main()
{
    int tablero, jugador1, jugador2, computadora, jugada,ModoJuego;
    bool casillaocupada = true, ganador = false;
    Tablero(tablero);
    cout << "Que modo de juego deseas jugar?\n1. VS HUMANO\n2. VS CPU\n";
    cin >> ModoJuego;
    if (ModoJuego=1)
    {
    do
    {
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
            system("clear");
            ReemplazarCasilla(jugada);
            Tablero(tablero);
            TurnoJugador++;
        }
    ganador = VerificarGanador(ganador);
    } while (ganador == false && TurnoJugador<10);
    if (TurnoJugador<10){
    if (TurnoJugador % 2 == 0)
    {
        cout << "Gano el jugador 2\n";
    }
    else
    {
        cout << "Gano el jugador 1\n";
    }
    } else{
        cout << "Empate\n";
    }
    } 
    else if (ModoJuego = 2)//--------------------------------------------------CPU----------------------------------------------
    {
    do
    {
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
            system("clear");
            ReemplazarCasilla(jugada);
            Tablero(tablero);
            TurnoJugador++;
            TurnoCPU(jugada);
        }
    ganador = VerificarGanador(ganador);
    } while (ganador == false && TurnoJugador<10);
    } else
    {
        cout << "No seleccionaste un modo de juego válido :(";
    }
    
    
    return 0;
}

int SeleccionarJugada()
{
    int Jugada;
    do
    {
        cout << "Jugador " << TurnoJugador%2+1 << " Dame tu jugada del 1 al 9: \n";
        cin >> Jugada;
    } while (Jugada < 0 || Jugada > 9);

    return Jugada;
}

bool ComprobarJugadaOcupada(int Jugada)
{
    int row = Jugada / 10, col = Jugada - 1;
    if (AreaJuego[row][col] == 'X' || AreaJuego[row][col] == 'O')
    {
        return true; // Significa que la casilla esta ocupada
    }
    else
    {
        return false;
    }
}

void ReemplazarCasilla(int Jugada)
{
    if (TurnoJugador % 2 == 0)
    {
        int row = Jugada / 10, col = Jugada - 1;
        AreaJuego[row][col] = 'O';
    }
    else
    {
        int row = Jugada / 10, col = Jugada - 1;
        AreaJuego[row][col] = 'X';
    }
}

void Tablero(int)
{
    int x = 0, y = 0;
    for (int fila = 0; fila < 5; fila++)
    {
        for (int columna = 0; columna < 9; columna++)
        {
            if (fila == 1 || fila == 3)
            {
                cout << "-";
            }
            else if (columna == 1 || columna == 4 || columna == 7)
            {
                cout << AreaJuego[x][y];
                y++;
            }
            else
            {
                cout << " ";
            }
            if (columna == 2 || columna == 5)
            {
                cout << "|";
            }
        }
        cout << "\n";
        if (fila % 2 == 0)
        {
            x++;
        }

        y = 0;
    }
}

bool VerificarGanador(int Jugada)
{
    int punto = 0;
    bool VerificarGanador = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if ((AreaJuego[0][posicion] == AreaJuego[1][posicion]) && (AreaJuego[0][posicion] == AreaJuego[2][posicion]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((AreaJuego[posicion][0] == AreaJuego[posicion][1]) && (AreaJuego[posicion][0] == AreaJuego[posicion][2]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((AreaJuego[posicion][posicion] == AreaJuego[posicion+1][posicion+1]) && (AreaJuego[posicion][posicion] == AreaJuego[posicion+2][posicion+2]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((AreaJuego[2][0] == AreaJuego[1][1]) && (AreaJuego[2][0] == AreaJuego[0][2]))
        {
            VerificarGanador = true;
            break;
        }
    }
    return VerificarGanador;
}

void TurnoCPU(int){
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if (AreaJuego[0][posicion] == AreaJuego[1][posicion])
        {
            AreaJuego[2][posicion] = 'O';
            break;
        }
        else if (AreaJuego[0][posicion] == AreaJuego[2][posicion])
        {
            AreaJuego[1][posicion] = 'O';
            break;
        }
        else if (AreaJuego[1][posicion] == AreaJuego[2][posicion])
        {
            AreaJuego[0][posicion] = 'O';
            break;
        }
        else if (AreaJuego[posicion][0] == AreaJuego[posicion][1])
        {
            AreaJuego[posicion][2] = 'O';
            break;
        }
        else if (AreaJuego[posicion][0] == AreaJuego[posicion][2])
        {
            AreaJuego[posicion][1] = 'O';
            break;
        }
        else if (AreaJuego[posicion][1] == AreaJuego[posicion][2])
        {
            AreaJuego[posicion][0] = 'O';
            break;
        } else{
            AreaJuego [posicion][posicion] = '0';
            break;
        }
    }
    
    TurnoJugador++;
}