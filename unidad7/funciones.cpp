#include <iostream>
#include "funciones.h"
using namespace std;

//1
/**
    Hacer una función que reciba como parámetro dos números enteros y devuelva verdadero si el primero de ellos es múltiplo del segundo.
    Caso contrario debe devolver falso.
*/

bool elPrimeroMultiploDelSegundo(int num1, int num2)
{
    if( num2 % num1 == 0)
    {
        return true;
    }

    return false;
}

//2
/**
Hacer una función que reciba como parámetro un número float y devuelva un número entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78 debe devolver 8.
Si recibe 7.48 debe devolver 7.
Si recibe 7.5 debe devolver 8.

*/

int redondear( float num )
{
    return round(num);
}

//3
/**
Hacer una función que reciba un número entero como parámetro y devuelva verdadero si el mismo es un número primo.
De lo contrario debe devolver falso
*/
bool esPrimo(int num)
{

    if( num%2 == 1)
    {
        return true;
    }

    return false;
}

//4
/**
Hacer una función que reciba un vector de números enteros y su tamaño y cargue cada uno de los elementos.
*/
/*
void cargarVector( int arrayx[], int tamaño )
{
    for( int i =0; i < tamaño; i++)
    {
        cout << arrayx[tamaño] << " "
    }
}*/

//5
/**
Hacer una función que reciba un vector de números enteros y su tamaño y liste cada uno de los elementos.
*/
