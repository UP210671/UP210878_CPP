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
/*Main board format*/
void Tablero(int);
int TurnoJugador = 0;
/*Main board*/
char AreaJuego[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
/*Board used by CPU*/
char TableroImaginario[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
/*Select a play in the board AreaJuego[3][3]*/
int SeleccionarJugada();
/*Change value in the vector AreaJuego[3][3]*/
void ReemplazarCasilla(int Jugada);
/*Change values in TableroImaginario[3][3] with X*/
void ReemplazarCasillaXImaginaria(int);
/*Change values in TableroImaginario[3][3] with O*/
void ReemplazarCasillaOImaginaria(int);
/*Check if the play has already been inputted
Params:
AreaJuego[3][3]*/
bool ComprobarJugadaOcupada(int Jugada);
/*CPU process to determine if the following play has alread been used in its imaginary board
Params:
TableroImaginario[3][3]*/
bool ComprobarJugadaOcupadaImaginaria(int);
/*Gamemode, 2 players or VS CPU*/
void ModoDeJuego(int);
/*Check if someone has won the match
Params:
AreaJuego[3][3]*/
bool VerificarGanador(int Jugada);
/*CPU process to determine if the following play wins or not
Params:
TableroImaginario[3][3]*/
bool VerificarGanadorImaginario(int);
/*Cloned Board Area for the CPU for calculating all possible plays
Params:
AreaJuego[3][3]*/
void AreaImaginaria();
/*Value returned by the CPU, random or calculated
Params:
MejorJugada*/
int TurnoCPU();
/*Calculation for all possibilities to determine the best play
Params:
VerificarGanadorImaginario, AreaImaginaria, ComprobarJugadaOcupadaImaginaria, ReemplazarCasillaXImaginaria, ReemplazarCasillaOImaginaria*/
int MejorJugada(char);

const char PC = 'O';
const char HUMANO = 'X';
const string TABLERO = "Real";
const string TABLEROCPU = "Imaginario";
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
    int tablero, jugador1, jugador2, computadora, jugada, ModoJuego, CPU;
    bool casillaocupada = true, ganador = false;
    Tablero(tablero);
    cout << "------GAMEMODE------\n1. VS\n2. Singleplayer\n";
    cin >> ModoJuego;
    if (ModoJuego == 1) //----------------------------------------------Player vs Player--------------------------------------------
    {
        do
        {
            jugada = SeleccionarJugada();
            casillaocupada = ComprobarJugadaOcupada(jugada);
            if (casillaocupada == true)
            {
                do
                {
                    cout << "Invalid play. Try again\n";
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
        } while (ganador == false && TurnoJugador < 10);
        if (TurnoJugador < 10)
        {
            if (TurnoJugador % 2 == 0)
            {
                cout << "PLAYER 2 WON\n";
            }
            else
            {
                cout << "PLAYER 1 WON\n";
            }
        }
        else
        {
            cout << "DRAW\n";
        }
    }
    else if (ModoJuego == 2) //--------------------------------------------------CPU------------------------------------------------
    {
        do
        {
            if (TurnoJugador % 2 == 0)
            {
                jugada = SeleccionarJugada();
            }
            else
            {
                jugada = TurnoCPU();
            }

            casillaocupada = ComprobarJugadaOcupada(jugada);
            if (casillaocupada == true)
            {
                do
                {
                    cout << "Invalid play. Try again\n";
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
        } while (ganador == false && TurnoJugador < 9);
        if (TurnoJugador < 9)
        {
            if (TurnoJugador % 2 == 0)
            {
                cout << "YOU LOSE :(\n";
            }
            else
            {
                cout << "YOU WON!\n";
            }
        }
        else
        {
            cout << "DRAW\n";
        }
    }
    else
    {
        cout << "Invalid gamemode :(";
    }
    return 0;
}

int SeleccionarJugada()
{
    int Jugada;
    do
    {
        cout << "Player " << TurnoJugador % 2 + 1 << " turn: \n";
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
        AreaJuego[row][col] = 'X';
    }
    else
    {
        int row = Jugada / 10, col = Jugada - 1;
        AreaJuego[row][col] = 'O';
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
        else if ((AreaJuego[posicion][posicion] == AreaJuego[posicion + 1][posicion + 1]) && (AreaJuego[posicion][posicion] == AreaJuego[posicion + 2][posicion + 2]))
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

int TurnoCPU()
{
    int Jugada;
    bool casillaocupada = false;
    Jugada = MejorJugada(PC);
    if (Jugada != -1)
    {
        return Jugada;
    }

    Jugada = MejorJugada(HUMANO);
    if (Jugada != -1)
    {
        return Jugada;
    }
    while (casillaocupada == false)
    {
        casillaocupada = ComprobarJugadaOcupada(Jugada);
        Jugada = 1 + rand() % 9; // En caso de que ninguno ni otro, aleatoria
    }
    return Jugada;
}

void AreaImaginaria()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            TableroImaginario[row][col] = AreaJuego[row][col];
        }
    }
}

bool ComprobarJugadaOcupadaImaginaria(int Jugada)
{
    int row = Jugada / 10, col = Jugada - 1;
    if (TableroImaginario[row][col] == 'X' || TableroImaginario[row][col] == 'O')
    {
        return true; // Significa que la casilla esta ocupada
    }
    else
    {
        return false;
    }
}

bool VerificarGanadorImaginario(int Jugada)
{
    bool VerificarGanador = false;
    for (int posicion = 0; posicion < 3; posicion++)
    {
        if ((TableroImaginario[0][posicion] == TableroImaginario[1][posicion]) && (TableroImaginario[0][posicion] == TableroImaginario[2][posicion]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((TableroImaginario[posicion][0] == TableroImaginario[posicion][1]) && (TableroImaginario[posicion][0] == TableroImaginario[posicion][2]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((TableroImaginario[posicion][posicion] == TableroImaginario[posicion + 1][posicion + 1]) && (TableroImaginario[posicion][posicion] == TableroImaginario[posicion + 2][posicion + 2]))
        {
            VerificarGanador = true;
            break;
        }
        else if ((TableroImaginario[2][0] == TableroImaginario[1][1]) && (TableroImaginario[2][0] == TableroImaginario[0][2]))
        {
            VerificarGanador = true;
            break;
        }
    }
    return VerificarGanador;
}

void ReemplazarCasillaXImaginaria(int Jugada)
{

    int row = Jugada / 10, col = Jugada - 1;
    TableroImaginario[row][col] = 'X';
}

void ReemplazarCasillaOImaginaria(int Jugada)
{
    int row = Jugada / 10, col = Jugada - 1;
    TableroImaginario[row][col] = 'O';
}

int MejorJugada(char Jugador)
{
    bool Casillaocupada = false;
    bool Ganador = false;
    int JugadaCPU = 0;
    AreaImaginaria();
    if (Jugador == 'X')
    {
        do
        {
            JugadaCPU++;
            Casillaocupada = ComprobarJugadaOcupadaImaginaria(JugadaCPU);
            if (Casillaocupada == false)
            {
                ReemplazarCasillaXImaginaria(JugadaCPU);
                Ganador = VerificarGanadorImaginario(JugadaCPU);
            }
            AreaImaginaria();
        } while (JugadaCPU <= 9 && Ganador == false);
    }
    else
    {
        do
        {
            JugadaCPU++;
            Casillaocupada = ComprobarJugadaOcupadaImaginaria(JugadaCPU);
            if (Casillaocupada == false)
            {
                ReemplazarCasillaOImaginaria(JugadaCPU);
                Ganador = VerificarGanadorImaginario(JugadaCPU);
            }
            AreaImaginaria();
        } while (JugadaCPU <= 9 && Ganador == false);
    }
    if (JugadaCPU >= 10)
    {
        JugadaCPU = -1;
    }
    return JugadaCPU;
}
