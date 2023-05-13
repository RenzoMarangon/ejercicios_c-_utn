#include <iostream>

using namespace std;

//1
/**

1) Una agencia de viajes posee la información de los cinco destinos turísticos que comercializa en cada uno de los meses del año 2022. Por cada destino y mes registra:
Código de destino turístico (entero)
Número de mes (entero entre 1 y 12)
Cantidad de pasajes vendidos (entero)
Total recaudado (float)

La información se encuentra agrupada por destino turístico pero no se encuentra ordenada bajo ningún criterio. Hay un registro para cada destino turístico y mes.

Se pide calcular e informar:
A) La cantidad total de pasajes vendidos en el año 2022 entre todos los destinos turísticos.
B) Por cada destino turístico, el total recaudado.

Antes de resolver el problema
- ¿Qué significa que los datos se encuentren agrupados por código de destino?
- ¿Qué significa que los datos no se encuentren ordenados?

Análisis
¿Cuántos destinos turísticos hay en total?
¿Cuántos meses hay por cada destino turístico?
¿Cuántos registros se ingresan en total?
¿Qué debo listar en el Punto A y cuántas veces debo listarlo?
¿Qué debo listar en el Punto B y cuántas veces debo listarlo?

Luego de analizar el problema
¿Cómo es la estructura general del programa? ¿Hay estructuras de repetición? ¿Cuántas y de qué tipo?
¿Qué representa cada ciclo?¿Cómo se sabe cuándo finaliza la información de un destino?
¿Es sencillo modificar tu programa para que funcione para 100 destinos? ¿Cómo lo harías?
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
La clínica San Simón Protector dispone de la información de los últimos turnos de sus enfermeros/as. Por cada turno trabajado por un enfermero se registró la siguiente información:
•	Legajo del enfermero/a (entero entre 1000 y 15000)
•	Número de turno (entero)
•	Horario ('M' - Mañana, 'T' - Tarde, 'N' - Noche)
•	Cantidad de horas trabajadas en el turno (entero mayor a cero)

La información se encuentra agrupada por legajo de enfermero. No todos los enfermeros trabajaron la misma cantidad de turnos. Para indicar el fin de los registros de un enfermero se ingresa un número de turno igual a cero.
Para indicar el fin del lote de datos se ingresa un legajo de enfermero negativo.

Notas
•	Cada turno consiste en 8 horas. Las horas excedentes se consideran horas extras. Por ejemplo: Si un enfermero trabajó 12 horas en un turno, realizó 8 hs regulares y 4 hs extra.
En cambio, si trabajó 6 horas en un turno: realizó 6 hs regulares y 0 hs extra.

Se pide hacer un programa en C++ para calcular e informar

A)	Por cada enfermero, el promedio de horas trabajadas por turno en el horario de la noche.

B)	La cantidad total de horas extras realizadas entre todos los enfermeros.

C)	La cantidad de enfermeros que realizaron al menos un turno en los tres horarios (mañana, tarde y noche).

D)	El horario (mañana, tarde o noche) que haya registrado menor cantidad de horas trabajadas

Aclaraciones


•	Sólo habrá un horario que haya registrado la menor cantidad de horas trabajadas.
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
            cout << "Ingrese el horario ('M' - Mañana, 'T' - Tarde, 'N' - Noche)" << endl;
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
        cout << "El turno con menos horas trabajadas fue el turno mañana" << endl;
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
