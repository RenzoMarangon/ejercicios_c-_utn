#include <iostream>

using namespace std;

    //EJEMPLO CORTE DE CONTROL
    /**
    int num, numAnterior, contadorWhile = 0, contadorAnidatres = 0;

    cout << "Ingresar un numero" << endl;
    cin >> num;
    while(num!=0)
    {
        contadorWhile++;

        numAnterior = num;

        while( num==numAnterior )
        {
            contadorAnidatres++;

            cout << "Ingresar un numero anidado" << endl;
            cin >> num;

        }

        cout << "Ingresar un numero" << endl;
        cin >> num;
        */
//1
/**
Dada una lista de números compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar

    a) Para cada uno de los grupos el máximo de los números pares y el máximo de los
    números impares.
    b) Para cada uno de los grupos el porcentaje de números negativos y números positivos.
    c) Cuantos números positivos había en total entre los 10 grupos.
*/

int main()
{
        int num, maximoPar, maximoImpar = 0, totalPositivos = 0, totalGrupo, positovosGrupo, negativosGrupo;
        float porcentajePositivos = 0, porcentajeNegativos = 0;


        for( int i = 0; i<10; i++)
        {
            cout << endl << endl << "Ingresar un numero" << endl;
            cin >> num;

            if( num % 2 == 0)
            {
                maximoPar = num;
            }else{
                maximoImpar = num;
            }

            while( num != 0)
            {

                if( num % 2 == 0)
                {
                    if( num > maximoPar)
                    {
                        maximoPar = num;
                    }
                }else{
                    if( maximoImpar == 0 )
                    {
                        maximoImpar = num;
                    }else if( num > maximoImpar)
                    {
                        maximoImpar = num;
                    }
                }

                if( num > 0)
                {
                    positovosGrupo++;
                    totalPositivos++;
                }else if( num < 0)
                {
                    negativosGrupo++;
                }

                cout << "Ingresar un numero" << endl;
                cin >> num;
            }

            totalGrupo = positovosGrupo + negativosGrupo;
            porcentajePositivos = (positovosGrupo*100)/totalGrupo;
            porcentajeNegativos = (negativosGrupo*100)/totalGrupo;

            cout << "Maximo par del grupo " << i+1 << " " << maximoPar << endl;
            cout << "Maximo impar del grupo " << i+1 << " " << maximoImpar << endl;

            cout << i;

        }

        cout << "La cantidad total de positivos es: " <<totalPositivos << endl;
    return 0;
}
