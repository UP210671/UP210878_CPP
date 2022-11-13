/*
Date: 26/10/2022
Author: Vinc3nt
Email: up210878@alumnos.upa.edu.mx
Description: ?
Last Modification: 26/10/2022
*/

//------------ PREPROCESSOR DIRECTIVES ----------------
#include <iostream>

#include <time.h>

using namespace std;

void Tablero(int);
int TurnoJugador = 0;
char AreaJuego[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char TableroImaginario[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int SeleccionarJugada();
void ReemplazarCasilla(int Jugada);
bool ComprobarJugadaOcupada(int Jugada);
bool ComprobarJugadaOcupadaImaginaria(int);
void ModoDeJuego(int);
bool VerificarGanador(int Jugada);
bool VerificarGanadorImaginario(int);
int TurnoCPU();
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
    int tablero, jugador1, jugador2, computadora, jugada,ModoJuego, CPU;
    bool casillaocupada = true, ganador = false;
    Tablero(tablero);
    cout << "Que modo de juego deseas jugar?\n1. VS HUMANO\n2. VS CPU\n";
    cin >> ModoJuego;
    if (ModoJuego==1)
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
    else if (ModoJuego == 2)//--------------------------------------------------CPU----------------------------------------------
    {
    do
    {
        if (TurnoJugador%2==0)
        {
            jugada = SeleccionarJugada();
        } else
        {
            jugada = TurnoCPU();
        }
        
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
            system("CLS");
            ReemplazarCasilla(jugada);
            Tablero(tablero);
            TurnoJugador++;
        }
    ganador = VerificarGanador(ganador);
    } while (ganador == false && TurnoJugador<9);
    if (TurnoJugador<9){
    if (TurnoJugador % 2 == 0)
    {
        cout << "Gano el CPU\n";
    }
    else
    {
        cout << "Gano el jugador 1\n";
    }
    } else{
        cout << "Empate\n";
    }
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

int TurnoCPU()
{
    int Jugada;
    bool casillaocupada = false;
    srand(time(NULL));
    Jugada = MejorJugada(PC);
    if (Jugada != -1){
        return Jugada;
    }

    Jugada = MejorJugada(HUMANO);
    if (Jugada != -1)
    {
        return Jugada;
    }
    
    Jugada = 1 + rand()%9;//En caso de que ninguno ni otro, aleatorio
    return Jugada;
}

void AreaImaginaria(){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            TableroImaginario[row][col]=AreaJuego[row][col];
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
        else if ((TableroImaginario[posicion][posicion] == TableroImaginario[posicion+1][posicion+1]) && (TableroImaginario[posicion][posicion] == TableroImaginario[posicion+2][posicion+2]))
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

int MejorJugada(char Jugador){
    bool Casillaocupada = false;
    bool Ganador = false;
    int JugadaCPU = 0;
    AreaImaginaria();
    if (Jugador == 'X'){
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
        } while (JugadaCPU <=9 && Ganador == false);
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
        JugadaCPU= -1;
    }
    return JugadaCPU;
    
}
