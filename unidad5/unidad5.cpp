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

void listaDeNumeros()
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
}

//2
/**
 En una empresa los empleados cobran un sueldo según la categoría a la que pertenecen
 . Son 50 empleados y los sueldos son:

Categoría 1: $38000
Categoría 2: $70000
Categoría 3: $105000

Al sueldo se le suma además $ 1200 por cada año trabajado.
Para cada empleado se tienen los siguientes datos:
- Categoría (1 a 3)
- Antigüedad (entero)

Hay un registro por cada empleado. La información no está agrupada ni ordenada.
Se pide calcular e informar:
a) ¿Cuantos empleados hay para cada categoría?
b) Total de sueldos (en $) pagados para cada categoría.
c) Sueldo Promedio.
d) ¿Cual fue el sueldo máximo y a que categoría pertenece?

*/

void sueldos()
{
    int categoria, antiguedad = 0, empleadosCatUno, empleadosCatDos, empleadosCatTres, cantEmpleadosTotal = 6;
    float sueldosCatDos, sueldosCatTres, sueldosCatUno, sueldoPromedio, sueldo, sueldoMaximo, catSueldoMaximo;


    for( int i = 0; i < cantEmpleadosTotal; i++)
    {
        cout << "Ingresar la antiguedad en años del empelado "<< i+1 <<"." << endl;
        cin >> antiguedad;

        cout << "Ingresar categoria del empleado (1, 2 o 3)" << endl;
        cin >> categoria;

        while( categoria < 1 || categoria > 3)
        {
            cout << "¡Categoria incorrecta!" << endl << "Ingresar categoria del empleado (1, 2 o 3)" << endl;
            cin >> categoria;
        }


        switch(categoria)
        {
            case 1:
            {
                empleadosCatUno++;
                sueldo = 38000 + 1200*antiguedad;
                sueldosCatUno += sueldo;
                break;
            }
            case 2:
            {
                sueldo = 70000 + 1200*antiguedad;
                empleadosCatDos++;
                sueldosCatDos += sueldo;
                break;
            }
            case 3:
            {
                sueldo = 105000 + 1200*antiguedad;
                empleadosCatTres++;
                sueldosCatTres += sueldo;
                break;
            }
        }

        if( i == 0 )
        {
            sueldoMaximo = sueldo;
            catSueldoMaximo = categoria;
        }else if( sueldo > sueldoMaximo)
        {
            sueldoMaximo = sueldo;
            catSueldoMaximo = categoria;
        }

        sueldoPromedio += sueldo;
    }

    cout << endl << endl;
    cout << "En la categoria 1 se registraron " << empleadosCatUno << "empleados." << endl;
    cout << "En la categoria 2 se registraron " << empleadosCatDos << "empleados." << endl;
    cout << "En la categoria 3 se registraron " << empleadosCatTres << "empleados." << endl;

    cout << endl;

    cout << "Los sueldos de la categoria 1 suman " << sueldosCatUno << endl;
    cout << "Los sueldos de la categoria 2 suman " << sueldosCatDos << endl;
    cout << "Los sueldos de la categoria 3 suman " << sueldosCatTres << endl;

    cout << endl;

    sueldoPromedio = sueldoPromedio / cantEmpleadosTotal;

    cout << "El sueldo promedio fue de " << sueldoPromedio;

    cout << endl;

    cout << "El sueldo maximo fue de " << sueldoMaximo << " y se obtuvo en la cateogoria " << catSueldoMaximo;
}

//3
/**
Un banco tiene tres sucursales, ubicadas en las siguientes localidades:
- Sucursal 1: Virreyes
- Sucursal 2: San Fernando
- Sucursal 3: Tigre

En cada una de ellas se registra para cada transacción que realiza un cliente, los siguientes datos:
- Nro. de Cliente (100 al 1200)
- Nro. de Sucursal (1, 2 ó 3)
- Código de Transacción (‘D’ para depósitos, ‘E’ para extracciones)
- Monto en pesos de la transacción

El último registro se indica con nro. de cliente igual a cero.

Se pide a partir de estos datos, determinar e informar:
a) Cantidad de depósitos por más de $1000.-.
b) El nro. de cliente que hizo la extracción por mayor monto, y en que sucursal la hizo.
c) El porcentaje de transacciones realizadas en cada una de las sucursales, respecto al total de las mismas.
d) Total de pesos depositados en cada una de las sucursales.
e) Cantidad de depósitos en la sucursal de Tigre.
f) El nro. de sucursal que recibió más cantidad de depósitos (sin importar el monto de los mismos).
*/

void banco()
{
    int codigoSucursal, nroCliente, nroSucursal, montoTransaccion = 0, cantDepositosMasDeMil = 0, nroClienteMayorMonto, maximaExtraccionSucursal = 0, maximaExtraccionMonto = 0, transaccionesSucursalUno = 0, transaccionesSucursalDos = 0, transaccionesSucursalTres = 0, cantDepositosTigre = 0, cantDepositosUno = 0, cantDepositosDos = 0 ;
    float totalPesosSucursalUno = 0, totalPesosSucursalDos = 0, totalPesosSucursalTres = 0;
    char codigoTransaccion;

    cout << "Ingrese numero de cliente" << endl;
    cin >> nroCliente;

    while( nroCliente != 0)
    {
        cout << "Ingrese numero de sucursal (1, 2 o 3)" << endl;
        cin >> nroSucursal;

        cout << "Ingrese codigo de transaccion ('D' para depositos, 'E' para extracciones)" << endl;
        cin >> codigoTransaccion;

        cout << "Monto en pesos de la transaccion" << endl;
        cin >> montoTransaccion;

        //Maxima extraccion
        if( codigoTransaccion == 'E' )
        {
            if( maximaExtraccionMonto == 0 )
            {
                maximaExtraccionMonto = montoTransaccion;
                maximaExtraccionSucursal = nroSucursal;
                nroClienteMayorMonto = nroCliente;

            }else if ( montoTransaccion > maximaExtraccionMonto )
            {
                maximaExtraccionMonto = montoTransaccion;
                maximaExtraccionSucursal = nroSucursal;
                nroClienteMayorMonto = nroCliente;
            }
        //Cantidad de depositos de 1000
        }else if( codigoTransaccion == 'D' && montoTransaccion > 1000)
        {
            cantDepositosMasDeMil++;
        }

        switch( nroSucursal )
        {
            //Virreyes
            case 1:
            {
                transaccionesSucursalUno++;

                if( codigoTransaccion == 'D' )
                {
                    totalPesosSucursalUno+=montoTransaccion;
                    cantDepositosUno++;

                }else if( codigoTransaccion == 'E')
                {
                    totalPesosSucursalUno-=montoTransaccion;
                }

                break;
            }

            //San Fernando
            case 2:
            {
                transaccionesSucursalDos++;

                if( codigoTransaccion == 'D' )
                {
                    totalPesosSucursalDos+=montoTransaccion;
                    cantDepositosDos++;
                }else if( codigoTransaccion == 'E')
                {
                    totalPesosSucursalDos-=montoTransaccion;
                }
                break;
            }

            //Tigre
            case 3:
            {
                transaccionesSucursalTres++;

                if( codigoTransaccion == 'D' )
                {
                    cantDepositosTigre++;
                    totalPesosSucursalTres += montoTransaccion;

                }else if( codigoTransaccion == 'E')
                {
                    totalPesosSucursalTres -= montoTransaccion;
                }
                break;
            }
        }

        cout << "Ingrese numero de cliente" << endl;
        cin >> nroCliente;
    }

    cout << "La cantidad de depositos de mas de mil fue de " << cantDepositosMasDeMil << endl;

    cout << "El numero del cliente que realizo la mayor extraccion es " << nroClienteMayorMonto << " en la sucursal "<< maximaExtraccionSucursal << endl;

    cout << "La cantidad total de pesos en la sucursal 1 fue de " << totalPesosSucursalUno << endl;
    cout << "La cantidad total de pesos en la sucursal 2 fue de " << totalPesosSucursalDos << endl;
    cout << "La cantidad total de pesos en la sucursal 3 fue de " << totalPesosSucursalTres << endl;

    cout << "La cantidad de deposito en tigre fue de " << cantDepositosTigre << endl;


    if( cantDepositosTigre > cantDepositosUno && cantDepositosTigre > cantDepositosDos)
    {
        cout << "Sucursal 3 es el distrito con mas depositos" << endl;
    }else if( cantDepositosDos > cantDepositosTigre && cantDepositosDos > cantDepositosUno )
    {
        cout << "Sucursal 2 es el distrito con mas depositos" << endl;
    }else{
        cout << "Sucursal 1 el distrito con mas depositos" << endl;
    }
}





//Ejercicios complementarios 1
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



//Ejercicios complementarios 2
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
    //listaDeNumeros();
    //sueldos();
    //banco();
    //agenciaDeViajes()
    //clinicaSanSimon();
    banco();

    return 0;
}
