#include <iostream>

using namespace std;


//1
/**
Hacer un programa que le pida al usuario una lista de 10 números enteros y luego de ingresarlos muestre cuáles de ellos fueron positivos.
*/

void cuantosPositivosHay()
{
    int  cantPositivos = 0;
    int numeros[10] = {};

    for(int i = 0; i<10; i++ )
    {
        cout << "Ingresar el número #" << i << endl;
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
Hacer un programa donde se carguen 15 números enteros y luego le solicite al usuario un número e indique si el mismo pertenece a la lista cargada anteriormente.
*/

void existeNumeroEnArray()
{
    int numeros[15] = {};
    int numIngresado = 0;
    bool perteneceALista = false;



    for( int i = 0; i<15; i++)
    {
        cout << "Ingrese un numero entero: ";
        cin >> numeros[i];
        cout << endl << endl;

    }

    cout << "Ingrese un numero para comparar: ";
    cin >> numIngresado;

    for( int i = 0; i<15; i++)
    {
        if( numIngresado == numeros[i] )
        {
            perteneceALista = true;
        }


    }


    if( perteneceALista )
    {
        cout << endl << "El numero pertenece a la lista" << endl;
    }else{
        cout << endl << "El numero NO pertenece a la lista" << endl;
    }
}

//3
/**
Hacer un programa donde se carguen 15 números enteros y luego muestre por pantalla
el mínimo elemento del vector y además indique cuántas veces se repite el valor mínimo dentro del vector.
*/

void minimo()
{

    int numeros[15] = {};
    int minimo = 0, cuantasVecesSeRepite = 0;

    for( int i = 0; i<15; i++)
    {
        cout << "Ingrese un numero entero: ";
        cin >> numeros[i];
        cout << endl << endl;

    }

    minimo = numeros[0];

    for( int i = 1; i<15; i++)
    {
        if( numeros[i] < minimo)
        {
            minimo = numeros[i];
        }
    }

    for( int i = 0; i<15; i++)
    {
        if( minimo == numeros[i])
        {
            cuantasVecesSeRepite++;
        }
    }

    cout << "El numero minimo es: " << minimo << " y se repite " << cuantasVecesSeRepite << " veces " << endl;

}

//4
/**

Se dispone de las ventas de un negocio durante el mes pasado.
Por cada venta se registró el número de venta, el número de día y el importe de la venta.
El fin de la carga de datos se indica con número de venta igual a 0.
Se pide calcular e informar:
Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
El número de día que más se recaudó en total y cuál fue la recaudación máxima.

*/


void ventasDelMesPasado()
{

    int numeroVenta = 0, numeroDia = 0;
    float importeVenta = 0;

    float recaudacionMaxima = 0;
    int numeroDiaRecaudacionMaxima = 0;

    float recaudacionPorDia[30] = {};

    cout << "Ingrese el numero de venta" << endl;
    cin >> numeroVenta;

    while( numeroVenta != 0)
    {
        cout << "Ingrese el importe de la venta #" << numeroVenta << endl;
        cin >> importeVenta;

        cout << "Ingrese el numero de dia" << endl;
        cin >> numeroDia;

        if( importeVenta > 0 )
        {
             recaudacionPorDia[numeroDia-1]+= importeVenta;
        }


        cout << endl << endl << "Ingrese el numero de venta" << endl;
        cin >> numeroVenta;
    }

    for( int i = 0; i<30;i++ )
    {
        if( i == 0)
        {
            numeroDiaRecaudacionMaxima = i+1;
            recaudacionMaxima = recaudacionPorDia[i];
        }

        if( recaudacionPorDia[i] > recaudacionMaxima )
        {
            numeroDiaRecaudacionMaxima = i+1;
            recaudacionMaxima = recaudacionPorDia[i];
        }

        if( recaudacionPorDia[i]>0 )
        {
            cout << "En el dia " << i+1 << " se re caudaron $" <<recaudacionPorDia[i] << endl;
        }

    }

    cout << "La recaudacion maxima fue de $" << recaudacionMaxima << " en el dia " << numeroDiaRecaudacionMaxima << endl;



}


//5
/**

Cargar un conjunto de 100 números reales y formar con los valores positivos un vector llamado pos y con los valores negativos un vector llamado nega.
Mostrar por pantalla la cantidad de elementos que contiene cada vector y luego cada uno de los vectores.
Sólo deben utilizarse dos vectores en el programa: pos y nega.
*/

void posAndNega()
{
    int numeros[100] = {};
    int pos[100] = {};
    int nega[100] = {};
    int cantPositivos, cantNegativos;

    for( int i = 0; i < 100; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
        cout << endl << endl;

        if(numeros[i] > 0)
        {
            pos[i] = numeros[i];
            cantPositivos++;

        }if( numeros[i] < 0)
        {
            nega[i] = numeros[i];
            cantNegativos++;
        }
    }

    cout << "El vector 'pos' tiene " << cantPositivos << " elementos:" << endl;

    for( int i = 0; i < 100; i++)
    {
        if( pos[i] > 0 )
        {
            cout << pos[i] << endl;
        }
    }

    cout << "El vector 'nega' tiene " << cantNegativos << " elementos:" << endl;

    for( int i = 0; i < 100; i++)
    {
        if( nega[i] < 0 )
        {
            cout << nega[i] << endl;
        }
    }

}

//6

/**
Se ingresa por teclado un vector de 10 elementos todos distintos entre sí. Luego eliminar el valor máximo y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 9 1 4 6 2 0 5 7 }, quedará → {1 3 1 4 6 2 0 5 7}
Nota: No mostrar el último elemento del vector.
*/

void eliminarYDesplazar()
{
    int numeros[10] = {};

    int aux;

    for(int i = 0; i<10;i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
        cout << endl;
    }

    for( int i = 1; i<10; i++)
    {
        if(numeros[i] < numeros[i-1])
        {
            aux = numeros[i];

            numeros[i] = numeros[i-1];

            numeros[i-1] = aux;
        }
    }

    for( int i = 0; i<9; i++)
    {
        cout << numeros[ i ] << " ";
    }
}

//7
/**

Se ingresa por teclado en un vector de 10 elementos, 9 números todos distintos entre sí y ordenados de menor a mayor.
Se pide ingresar otro valor e insertarlo en el orden correspondiente y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 4 5 6 7 10 12 16}
Número ingresado: 9
Vector → {1 3 4 5 6 7 9 10 12 16}


*/

void AgregarYDesplazar()
{
    int numeros[10] = {};
    int numIngresado = 0;
    int aux = 0;
    int auxB = 0;
    bool correrNumero = false;

    for(int i = 0; i<9;i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
        cout << endl;
    }

    cout << endl << "Ingrese un para añadir a la lista: ";
    cin >> numIngresado;
    cout << endl;

    for(int i = 1; i<10;i++)
    {

        if( correrNumero )
        {

            auxB = aux;

            aux = numeros[i];

            numeros[i] = auxB;


        }
        if( numIngresado > numeros[i-1] && numIngresado < numeros[i] )
        {
            correrNumero = true;
            aux = numeros[i];
            numeros[i] = numIngresado;
        }


    }

    for(int i = 0; i<10;i++)
    {
        cout << numeros[i] << " ";
    }
}

//8

/**

El dueño del gimnasio Laragym nos pide que realicemos un programa que les permita cargar todas los entrenamientos de sus 50 clientes, cada registro de entrenamiento contiene:
Numero de Entrenamiento (1 - 9999)
Cliente (101- 150)
Tipo de Entrenamiento ( 1 - 10 )
Tiempo del Entrenamiento (minutos)

Puede haber varios registros de entrenamiento por cliente. La información no se encuentra agrupada ni ordenada.
El fin de la carga de entrenamientos se indica con un número de entrenamiento igual a cero, informar:
Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
Por cada cliente, los tipos de entrenamiento que realizó.
Por cada cada cliente y tipo de entrenamiento, la cantidad total de minutos entrenados. Sólo listar aquellos registros que sean superiores a 0.
El número de cliente que más tiempo haya entrenado.
Los tipos de entrenamiento que no se realizaron por ningún cliente.


*/


int main()
{
    //cuantosPositivosHay();
    //existeNumeroEnArray();
    //minimo();
    //ventasDelMesPasado();
    //posAndNega();
    //eliminarYDesplazar();
    //AgregarYDesplazar();
    return 0;
}
