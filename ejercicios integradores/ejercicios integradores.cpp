#include <iostream>

using namespace std;

//1
/**

1) Una agencia de viajes posee la informaci�n de los cinco destinos tur�sticos que comercializa en cada uno de los meses del a�o 2022. Por cada destino y mes registra:
C�digo de destino tur�stico (entero)
N�mero de mes (entero entre 1 y 12)
Cantidad de pasajes vendidos (entero)
Total recaudado (float)

La informaci�n se encuentra agrupada por destino tur�stico pero no se encuentra ordenada bajo ning�n criterio. Hay un registro para cada destino tur�stico y mes.

Se pide calcular e informar:
A) La cantidad total de pasajes vendidos en el a�o 2022 entre todos los destinos tur�sticos.
B) Por cada destino tur�stico, el total recaudado.

Antes de resolver el problema
- �Qu� significa que los datos se encuentren agrupados por c�digo de destino?
- �Qu� significa que los datos no se encuentren ordenados?

An�lisis
�Cu�ntos destinos tur�sticos hay en total?
�Cu�ntos meses hay por cada destino tur�stico?
�Cu�ntos registros se ingresan en total?
�Qu� debo listar en el Punto A y cu�ntas veces debo listarlo?
�Qu� debo listar en el Punto B y cu�ntas veces debo listarlo?

Luego de analizar el problema
�C�mo es la estructura general del programa? �Hay estructuras de repetici�n? �Cu�ntas y de qu� tipo?
�Qu� representa cada ciclo?�C�mo se sabe cu�ndo finaliza la informaci�n de un destino?
�Es sencillo modificar tu programa para que funcione para 100 destinos? �C�mo lo har�as?
*/

void agenciaDeViajes()
{
    int cantDestinosTuristicos = 0, codigoDestinoTuristico, numeroDeMes, cantPasajesVendidosPorMes = 0, cantTotalPasajesVendidos = 0;
    float totalRecaudado, totalRecaudadoPorDestino;

    while( cantDestinosTuristicos < 2 )
    {
        cout << "Ingresar codigo de destino turistico" << endl;
        cin >> codigoDestinoTuristico;



        for( int i = 1; i<=2; i++ )
        {
            numeroDeMes = i;
            cout << "Ingresar cantidad de pasajes vendidos en el mes " << i << endl;
            cin >> cantPasajesVendidosPorMes;

            cout << "Ingresar cantidad de dinero recaudado en el mes " << i << endl;
            cin >> totalRecaudado;
            totalRecaudadoPorDestino += totalRecaudado;
            cantTotalPasajesVendidos += cantPasajesVendidosPorMes;
        }

        cout << "El total recaudado del destino " << codigoDestinoTuristico << " fue de " << totalRecaudadoPorDestino << endl;
        totalRecaudadoPorDestino = 0;

        cantDestinosTuristicos++;
    }

    cout << "La cantidad de pasajes vendidos fue de " << cantTotalPasajesVendidos;
}



//OTRO
/**
La cl�nica San Sim�n Protector dispone de la informaci�n de los �ltimos turnos de sus enfermeros/as. Por cada turno trabajado por un enfermero se registr� la siguiente informaci�n:
�	Legajo del enfermero/a (entero entre 1000 y 15000)
�	N�mero de turno (entero)
�	Horario ('M' - Ma�ana, 'T' - Tarde, 'N' - Noche)
�	Cantidad de horas trabajadas en el turno (entero mayor a cero)

La informaci�n se encuentra agrupada por legajo de enfermero. No todos los enfermeros trabajaron la misma cantidad de turnos. Para indicar el fin de los registros de un enfermero se ingresa un n�mero de turno igual a cero.
Para indicar el fin del lote de datos se ingresa un legajo de enfermero negativo.

Notas
�	Cada turno consiste en 8 horas. Las horas excedentes se consideran horas extras. Por ejemplo: Si un enfermero trabaj� 12 horas en un turno, realiz� 8 hs regulares y 4 hs extra.
En cambio, si trabaj� 6 horas en un turno: realiz� 6 hs regulares y 0 hs extra.

Se pide hacer un programa en C++ para calcular e informar

A)	Por cada enfermero, el promedio de horas trabajadas por turno en el horario de la noche.

B)	La cantidad total de horas extras realizadas entre todos los enfermeros.

C)	La cantidad de enfermeros que realizaron al menos un turno en los tres horarios (ma�ana, tarde y noche).

D)	El horario (ma�ana, tarde o noche) que haya registrado menor cantidad de horas trabajadas

Aclaraciones


�	S�lo habr� un horario que haya registrado la menor cantidad de horas trabajadas.
*/

void clinicaSanSimon()
{
    int legajoEnfermero, numeroDeTurno, cantHorasTrabajadas = 0, cantTotalHorasExtra = 0, cantHorasManana = 0, cantHorasNoche = 0, cantHorasTarde = 0, menorCantHorasTrabajadas = 0, turnosNocheTrabajados = 0, cantEnfermerosTresTurnos = 0;
    float promHorasTrabajadas = 0, promHorasPorTurnoNoche = 0;
    char horario;
    bool trabajoManana, trabajoTarde, trabajoNoche;

    cout << endl <<"________________________________" << endl;
    cout << "Ingresar numero de legajo entre 1000 y 15000" << endl;
    cin >> legajoEnfermero;
    cout << endl << endl;


    while( legajoEnfermero > 0)
    {
        cout << "Ingresa numero de turno" << endl;
        cin >> numeroDeTurno;

        while( numeroDeTurno != 0 )
        {
            cout << "Ingrese el horario ('M' - Ma�ana, 'T' - Tarde, 'N' - Noche)" << endl;
            cin >> horario;

            cout << "Ingrese cantidad de horas trabajadas" << endl;
            cin >> cantHorasTrabajadas;

            if( cantHorasTrabajadas > 8)
            {
                cantTotalHorasExtra += cantHorasTrabajadas - 8;
            }

            switch( horario )
            {
                case 'M':
                {
                    trabajoManana = true;
                    cantHorasManana += cantHorasTrabajadas;
                    break;
                }
                case 'T':
                {
                    trabajoTarde = true;
                    cantHorasTarde += cantHorasTrabajadas;
                    break;
                }
                case 'N':
                {
                    trabajoNoche = true;
                    cantHorasNoche += cantHorasTrabajadas;
                    promHorasPorTurnoNoche += cantHorasTrabajadas;
                    turnosNocheTrabajados++;
                    break;
                }
            }



            if( trabajoManana && trabajoTarde && trabajoNoche )
            {
                cantEnfermerosTresTurnos++;
            }





            cout << "Ingresa numero de turno" << endl;
            cin >> numeroDeTurno;
        }

        cout << "El promedio de horas trabajadas en el turno noche del enfermero con legajo " << legajoEnfermero << " fue de " << promHorasPorTurnoNoche/turnosNocheTrabajados << endl;
        cout << endl<< turnosNocheTrabajados << endl;

        trabajoManana = false;
        trabajoTarde = false;
        trabajoNoche = false;
        promHorasPorTurnoNoche = 0;
        turnosNocheTrabajados = 0;

        cout << "________________________________" << endl;
        cout << "Ingresar numero de legajo entre 1000 y 15000" << endl;
        cin >> legajoEnfermero;
        cout << endl << endl;
    }

    cout << "La cantidad de horas extra trabajadas por todos los enfermeros fue de " << cantTotalHorasExtra << endl;
    cout << "La cantidad de enfermeros que trabajaron los 3 turnos fue de: " << cantEnfermerosTresTurnos << endl;
    if( cantHorasManana < cantHorasTarde && cantHorasManana < cantHorasNoche )
    {
        cout << "El turno con menos horas trabajadas fue el turno ma�ana" << endl;
    }else if( cantHorasTarde < cantHorasManana && cantHorasTarde < cantHorasNoche)
    {
        cout << "El turno con menos horas trabajadas fue el turno tarde" << endl;
    }else{
        cout << "El turno con menos horas trabajadas fue el turno noche" << endl;
    }
}




int main()
{
    //clinicaSanSimon();
    agenciaDeViajes();
    return 0;
}
