#include <iostream>

using namespace std;


//1
/**
Hacer un programa que le pida al usuario una lista de 10 n�meros enteros y luego de ingresarlos muestre cu�les de ellos fueron positivos.
*/

void cuantosPositivosHay()
{
    int  cantPositivos = 0;
    int numeros[10] = {};

    for(int i = 0; i<10; i++ )
    {
        cout << "Ingresar el n�mero #" << i << endl;
        cin >> numeros[i];
    }

    for(int i = 0; i<10; i++)
    {
        if( numeros[i] > 0)
        {
            cantPositivos++;
        }
    }

    cout << "La cantidad de numeros positivos es: " << cantPositivos << endl;
}

//2
/**
Hacer un programa donde se carguen 15 n�meros enteros y luego le solicite al usuario un n�mero e indique si el mismo pertenece a la lista cargada anteriormente.
*/

void existeNumeroEnArray()
{
    int numeros[15] = {};
    int
}

int main()
{
    //cuantosPositivosHay();
    return 0;
}
