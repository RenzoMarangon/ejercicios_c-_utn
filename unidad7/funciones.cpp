#include <iostream>
#include "funciones.h"
using namespace std;

//1
/**
    Hacer una funci�n que reciba como par�metro dos n�meros enteros y devuelva verdadero si el primero de ellos es m�ltiplo del segundo.
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
Hacer una funci�n que reciba como par�metro un n�mero float y devuelva un n�mero entero con el redondeo del mismo.
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
Hacer una funci�n que reciba un n�mero entero como par�metro y devuelva verdadero si el mismo es un n�mero primo.
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
Hacer una funci�n que reciba un vector de n�meros enteros y su tama�o y cargue cada uno de los elementos.
*/
/*
void cargarVector( int arrayx[], int tama�o )
{
    for( int i =0; i < tama�o; i++)
    {
        cout << arrayx[tama�o] << " "
    }
}*/

//5
/**
Hacer una funci�n que reciba un vector de n�meros enteros y su tama�o y liste cada uno de los elementos.
*/
