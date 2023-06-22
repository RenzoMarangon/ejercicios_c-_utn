#include <iostream>
using namespace std;
#include "juego.h"
#include "funciones.h"
#include <ctime>



void iniciarJuego(int j1, int j2)
{
    int dado1, dado2;

    cout << "Ingresar nombre jugador 1: ";
    cin >> j1;
    cout << endl << "Ingresar nombre jugador 2: ";
    cin >> j2;

    tirarDados(dado1, dado2);


}

void mostrarCreditos()
{
    cout << "Integrantes del grupo ... :" << endl;
}

void mostrarEstadisticas()
{
    string jugador1 = "pepe";
    string jugador2 = "elrufian";

    cout << "HITO \t" << jugador1 << "\t" << jugador2 << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "Estatuilla \t " << "PUNTOS 1" << "\t" << "PUNTOS 2" << endl;
    cout << "Estatuilla++ \t " << "PUNTOS 1" << "\t" << "PUNTOS 2" << endl;
    cout << "Estatuilla-- \t " << "PUNTOS 1" << "\t" << "PUNTOS 2" << endl;
    cout << "Ganador \t " << "PUNTOS 1" << "\t" << "PUNTOS 2" << endl;
    cout << "Lanzamiento \t " << "PUNTOS 1" << "\t" << "PUNTOS 2" << endl;
    cout << "------------------------------------------------------------------------" << endl;
    cout << "TOTAL \t" << "PUNTOS 1 " << "\t" << " PUNTOS 1 " << "\t" << " PUNTOS 2" << endl;
    cout << "GANADOR: " << "GANADOR" << " con " << "PUNTOS" << "puntos de victoria" << endl;
    cout << endl << endl << endl;
}


void tirarDado( int dado )
{
    srand(time(0));

    dado = random(10);

    cout << "dado: " << dado << endl;
}

void tirarDados(int dado1, int dado2)
{
    tirarDado(dado1);
    tirarDado(dado2);
}
