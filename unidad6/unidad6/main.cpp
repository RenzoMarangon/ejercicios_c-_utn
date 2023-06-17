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
Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos).<--
Por cada cliente, los tipos de entrenamiento que realizó.<--
Por cada cada cliente y tipo de entrenamiento, la cantidad total de minutos entrenados. Sólo listar aquellos registros que sean superiores a 0.<--
El número de cliente que más tiempo haya entrenado. <--
Los tipos de entrenamiento que no se realizaron por ningún cliente. <--


*/

void gimnasio()
{

    int tiempoEntrenamiento, tipoEntrenamiento = 0, numCliente, numEntrenamiento;

    int clienteQueMasEntreno, tiempoClienteQueMasEntreno;

    int clienteEntrenamientoTiempo[50][10] = {};

    int tiposDeEntrenamientoRealizados[10] = {};

    int tiempoQueEntrenoCadaCliente[50] = {};

    cout << "Indicar el numero de entrenamiento (1 - 9999)" << endl;
    cin >> numEntrenamiento;


    while( numEntrenamiento != 0)
    {

        cout << "Indicar el numero de cliente (101 - 150)" << endl;
        cin >> numCliente;

        cout << "Indicar el tipo de entrenamiento (1 - 10)" << endl;
        cin >> tipoEntrenamiento;

        cout << "Indicar el tiempo de entrenamiento (minutos)" << endl;
        cin >> tiempoEntrenamiento;

        clienteEntrenamientoTiempo[ numCliente - 101 ][ tipoEntrenamiento ] += tiempoEntrenamiento;

        tiempoQueEntrenoCadaCliente[ numCliente - 101] += tiempoEntrenamiento;
        tiempoEntrenamiento =0;

        tiposDeEntrenamientoRealizados[ tipoEntrenamiento - 1 ]++;

        cout << "Indicar el numero de entrenamiento (1 - 9999)" << endl;
        cin >> numEntrenamiento;
    }


    for( int i = 0; i<50; i++ )
    {
        if( tiempoQueEntrenoCadaCliente[i] > 0)
        {
            cout << "El cliente #" << i+101 << " entreno " << tiempoQueEntrenoCadaCliente[i]/60 << " horas y " << tiempoQueEntrenoCadaCliente[i]%60 << " minutos." << endl;
        }
    }



    for( int i = 0; i<50; i++ )
    {
        if( tiempoQueEntrenoCadaCliente[i] > 0 )
        {
            //<--
            cout << endl << endl << "El cliente #" << i+101 << " realizo las siguientes actividades:" << endl;
            cout << "_____________________________" << endl;
            cout << "Entrenamientos realizados: " ;

            cout << endl << endl;

            //<--
            for( int j = 0; j<10; j++  )
            {
                if( clienteEntrenamientoTiempo[i][j] > 0 )
                {
                    cout << i+101 << endl << "Entrenamiento: #" << j << endl << "Tiempo entrenado: " << clienteEntrenamientoTiempo[i][j];
                }
            }
        }

    }


    //<--
    for( int i = 0; i<50; i++ )
    {
       if( tiempoQueEntrenoCadaCliente[i] > tiempoClienteQueMasEntreno )
       {
           clienteQueMasEntreno = i + 101;
       }
    }

    cout <<endl << endl << "El cliente que mas entreno fue #" << clienteQueMasEntreno << endl << endl ;


    //<--
    cout << "Los tipos de entrenamiento que no se realizaron son: ";

    for( int i = 0; i<10; i++)
    {
        if( tiposDeEntrenamientoRealizados[i] == 0 )
        {
            cout << i+1 << " ";
        }
    }

}


//9
/**
Una fábrica tiene 80 empleados, y dispone de un primer lote de registros con la siguiente información:
- Nro. empleado (1 a 80)
- Valor de una hora de trabajo
- Valor de la hora extra de trabajo

A fin de mes se desean calcular los sueldos de los empleados que trabajaron y para ello se cuenta con un segundo lote de registros con la siguiente información:
- Nro. empleado (1 a 80)
- Día
- Total de horas trabajadas en el día

Este lote finaliza con un registro con nro. de empleado igual a cero, y sólo figuran los registros de los empleados que trabajaron durante el mes.
Calcular e informar el sueldo de cada uno de los empleados, teniendo en cuenta que a partir de la 9na hora del día se comienza a pagar como hora extra.

*/

void fabrica()
{
    int nroEmpleado = 0;

    int valorHoraTrabajo = 0, valorHoraExtra = 0, sueldoPorEmpleado = 0, totalHorasExtra = 0;

    int dia = 0, horasTrabajadasPorDia = 0 ;

    int nroEmpleadoDiaTotalHorasTrabajadas[80][30] = {};



    cout << "Ingresar valor de una hora de trabajo: $";
    cin >> valorHoraTrabajo;
    cout << endl;

    cout << "Ingresar valor de una hora extra: $";
    cin >> valorHoraExtra;
    cout << endl;

    cout << "Ingresar numero de empleado (1 - 80): #";
    cin >> nroEmpleado;
    cout << endl;

    while( nroEmpleado != 0 )
    {
        cout << "Ingresar dia: ";
        cin >> dia;
        cout << endl;

        cout << "Ingresar total de horas trabajadas durante el dia: ";
        cin >> horasTrabajadasPorDia;
        cout << endl;

        nroEmpleadoDiaTotalHorasTrabajadas[ nroEmpleado -1 ][ dia - 1 ] += horasTrabajadasPorDia;

        cout << "Ingresar numero de empleado (1 - 80): #";
        cin >> nroEmpleado;
        cout << endl;

    }

    for( int i = 0; i<80; i++ )
    {
        for( int j = 0; j<30; j++ )
        {
            sueldoPorEmpleado += nroEmpleadoDiaTotalHorasTrabajadas[i][j];
        }

        if( sueldoPorEmpleado > 0 )
        {
            totalHorasExtra = (sueldoPorEmpleado % 8);
            sueldoPorEmpleado -= totalHorasExtra;
            sueldoPorEmpleado = ( sueldoPorEmpleado * valorHoraTrabajo) + ( totalHorasExtra * valorHoraExtra);


            cout << "El sueldo del empleado #" << i+1 << " es de $" << sueldoPorEmpleado << endl << endl;

        }


        sueldoPorEmpleado = 0;
        totalHorasExtra = 0;
    }
}

//10
/**
    LaraRaffle es el sorteo más importante de Argentina. Se dispone de 100 números entre el 0 y el 99 que los participantes pueden elegir para su compra. Cada número tiene un costo de $500.
    Entrega un premio al ganador de $30000 y al segundo ganador de $5000.
    Nos solicitan un programa que permita cargar los números comprados por los participantes. El programa no debe permitir comprar más de una vez un número ya vendido.
    El fin de carga de información se indica con número igual a -1.

    Luego, sortear dos números al azar entre 0 y 99 e informar:
    Total recaudado en concepto de compra de números. <--
    Ganancia neta o pérdida del Sr Lara. <--
    El porcentaje de números no vendidos con respecto al total.<--
    Número ganador del primer premio y número ganador del segundo premio (no pueden ser el mismo número). E indicar si esos números se vendieron o no. <--
*/

void sorteo()
{
    int valorNumero = 500, valorPrimerPremio = 30000, valorSegundoPremio = 5000;

    int numeroIngresado = 0;

    int totalRecaudado = 0, totalDeGanancia = 0, totalNumerosVendidos = 0;
    float porcentajeNumerosNoVendidos = 0;

    int numeros[100] = {};
    int ganadores[2] = {};

    cout << "Ingresar un numero para comprar: #";
    cin >> numeroIngresado;
    cout << endl;

    while( numeroIngresado != -1 )
    {
        if( numeros[ numeroIngresado ] == 0)
        {
            numeros[numeroIngresado] = valorNumero;
            totalRecaudado += valorNumero;
            totalNumerosVendidos++;

        }else{
            cout << "Ese numero ya fue vendido" << endl << endl;
        }


        cout << "Ingresar un numero para comprar: #";
        cin >> numeroIngresado;
        cout << endl;
    }



    cout << "Ingresar dos numeros al azar del 0 al 99: " << endl << "#1: ";
    cin >> ganadores[0];
    cout << endl << "#2: ";
    cin  >> ganadores[1];



    cout << endl << endl << "El total recaudado fue de $" << totalRecaudado << endl;

    totalDeGanancia = totalRecaudado - ( valorPrimerPremio + valorSegundoPremio );

    if( totalDeGanancia > 0)
    {
        cout << endl << "El total de la ganancia fue de $" << totalDeGanancia << endl;
    }else{
        cout << endl << "El total de la perdida fue de $" << totalDeGanancia << endl;
    }

    cout << "El porcentaje total de numeros no vendidos con respecto al total fue de " << 100 - totalNumerosVendidos << "%" << endl;


    cout << "Los numeros ganadores son " << ganadores[0] << " y " << ganadores[1] << endl << endl;

    for( int i = 0; i < 100; i++)
    {
        if( ganadores[0] == i && numeros[i] > 0 )
        {
            cout << "El numero " << ganadores[0] << " fue vendido" << endl;
        }

        if( ganadores[1] == i && numeros[i] > 0 )
        {
            cout << "El numero " << ganadores[1] << " fue vendido"<< endl;
        }
    }
}

//11

/**

Una empresa que fabrica pantalones nos encargó procesar los resultados de una encuesta realizada a la población con referencia a la predilección de color de los pantalones ('N'=negro, 'A'=azul, 'B'=blanco, 'O'=otros).
Para ello se ingresan los siguiente datos para cada encuesta efectuada:
- Edad del encuestado (entre 1 y 99)
- Color elegido (N, A, B, O)
- Sexo(M o F)

El fin del lote se indica con un registro con edad igual a cero. Se pide determinar e informar:
El color más votado entre las mujeres.
Por cada década de edad, la cantidad de encuestados.

Década     Edad
0       	 1-9
1     	     10-19
2    	     20-29
…     	      …
9    	     90-99

*/

void fabricaDePantalones()
{
    int edades[100] = {};
    int sexoColor[2][4] = {};
    int colorMasVotado = 0, cantidadPersonasPorDecada = 0;
    int sexoIngresado = 0, colorIngresado = 0, edadIngresada = 0;
    const string sexo[]  = {"Masculino","Femenino"};
    const string color[] = { "Negro", "Azul", "Blanco", "Otros" };

    cout << "Ingresar edad (1-99): ";
    cin >> edadIngresada;
    cout << endl;



    while( edadIngresada != 0)
    {
        edades[ edadIngresada ]++;

        cout << "Ingresar sexo ( 1(Masculino) - 2(Femenino) )";
        cin >> sexoIngresado;
        cout << endl;

        cout << "Ingresar color ( 1 (Negro) | 2 (Azul) | 3 (Blanco) | 4 (Otros) )";
        cin >> colorIngresado;
        cout << endl;

        sexoColor[ sexoIngresado -1 ][ colorIngresado -1 ]++;

        cout << "Ingresar edad (1-99): ";
        cin >> edadIngresada;
        cout << endl;
    }

    for(int i = 1; i<4; i++)
    {
        if( sexoColor[1][i-1] > sexoColor[1][i] )
        {
            colorMasVotado = sexoColor[1][i-1];
        }else{
            colorMasVotado = sexoColor[1][i-1];
        }
    }

    cout << endl << endl << "El color mas votado entre las mujeres es: " << color[ colorMasVotado ]<<endl << endl;

    for(int i = 1; i<100; i++)
    {
        cantidadPersonasPorDecada += edades[i];

        if( i % 10 == 0)
        {
            cout << "Rango " << i-10 << " - " << i-1 << endl;
            cout << cantidadPersonasPorDecada << " personas "<< endl;
            cantidadPersonasPorDecada = 0;
        }

    }

}

//13
/**
Una empresa comercializa 15 artículos y por cada venta realizada genera un registro con los siguientes datos:
Nro. de Artículo (1 a 15)
Cantidad Vendida
Nro. de Sucursal (1 a 4)
A este lote se le precede otro lote ordenado por número de artículo con la siguiente información:
Nro de artículo
Stock

Puede haber varios registros de venta para el mismo artículo y el fin de la carga de datos se indica con número de artículo igual a cero.

Se pide determinar e informar:
Por cada artículo, la cantidad de unidades vendidas.
Por cada sucursal, los números de artículos que vendieron más de 10 unidades.
Por cada artículo, la sucursal donde más se comercializó.
Los artículos cuyo stock quedaron en cero.
Los artículos cuyo stock disminuyó más de la mitad.
*/

void empresa()
{


    int articulosVendidos[4][15] = {};
    int articulosStock[15] = {};
    int sucursales[4] = {};
    int articuloIngresado = 0, cantidadVendidaIngresada = 0, numSucursalIngresado = 0;
    int totalArticulosVendidos = 0, sucursalDondeMasSeVendioElArticulo = 0, cantidadArticulosVendidosPorSucursal = 0;

    for( int i = 0; i<15; i++)
    {
        cout << "Ingresar cantidad de stock del articulo #" << i << ": ";
        cin >> articulosStock[i];
        cout << endl;
    }



    cout << endl << "Ingrese numero de articulo a comprar: ";
    cin >> articuloIngresado;
    cout << endl;

    while( articuloIngresado != 0 )
    {
        cout << "Ingrese la cantidad a comprar: ";
        cin >> cantidadVendidaIngresada;
        cout << endl;

        cout << "Ingrese el numero de sucursal: ";
        cin >> numSucursalIngresado;
        cout << endl;


        if( articulosStock[ articuloIngresado ] >= cantidadVendidaIngresada)
        {
            articulosVendidos[ numSucursalIngresado ][ articuloIngresado ] += cantidadVendidaIngresada;

            articulosStock[ articuloIngresado ]-= cantidadVendidaIngresada;
        }else{
            cout << "No hay suficiente stock de ese articulo" << endl;
        }

        cout << "Ingrese numero de articulo a comprar: ";
        cin >> articuloIngresado;
        cout << endl;
    }

    for(int i = 0; i<15; i++)
    {
        for(int j = 0; j<4; i++)
        {

            totalArticulosVendidos += articulosVendidos[j][i];

            if( articulosVendidos[j][i] > cantidadArticulosVendidosPorSucursal )
            {
                sucursalDondeMasSeVendioElArticulo = j;
                cantidadArticulosVendidosPorSucursal = articulosVendidos[j][i];
            }
        }

        cout << "El articulo #" << i << " se vendio mas en la sucursal " << sucursalDondeMasSeVendioElArticulo << endl;
        cantidadArticulosVendidosPorSucursal = 0;
        sucursalDondeMasSeVendioElArticulo = 0;


        if( totalArticulosVendidos > 0)
        {
            cout << "Se vendieron: " << totalArticulosVendidos << " del articulo #" << i << endl;
        }


        totalArticulosVendidos = 0;
    }

    cout << endl << endl;

    for( int i = 0; i<4; i++)
    {
        cout << "En la sucursal #" << i << " los articulos con mas de 10 unidades vendidas fueron:";
        for(int j = 0; j<15; i++)
        {
            if( articulosVendidos[i][j] > 10 )
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "Los siguientes articulos quedaron sin stock: ";
    for( int i = 0; i<15; i++)
    {
        if( articulosStock[i] == 0)
        {
            cout << i << " ";
        }
    }

}

//14
/**
Hacer un programa que permita cargar un vector de 5 números enteros y otro vector de 10 números.
Luego de cargarlos, generar un tercer vector llamado v_union que contenga los datos del primer vector y a continuación los datos del segundo vector
*/

void sumarDosVectores()
{
    int numeroIngresado = 0;
    int cincoNumeros[5] = {};
    int diezNumeros[10] = {};
    int sumaVectores[15] = {};

    for(int i = 0; i<5; i++)
    {
        cout << "Ingresar un numero: ";
        cin >> cincoNumeros[i];
        cout << endl;
    }

    cout << endl << endl;

    for(int i = 0; i<10; i++)
    {
        cout << "Ingresar un numero: ";
        cin >> diezNumeros[i];
        cout << endl;
    }

    for( int i = 0; i<15;i++)
    {
        if( i < 5)
        {
            for( int j = 0; j<5; j++)
            {
                sumaVectores[i] = cincoNumeros[j];
            }

        }else{

            for( int j = 0; j<10; j++)
            {
                sumaVectores[i] = diezNumeros[j];
            }
        }
    }

    cout << endl << endl;
    cout << "El vector queda:" << endl;
    for( int i = 0; i<15;i++)
    {
        cout << sumaVectores[i] << " ";
    }
}

//15
/**
Hacer un programa que permita cargar un vector de 5 números enteros todos distintos entre sí y otro vector de 10 números todos distintos entre sí.
Luego de cargarlos, generar un tercer vector llamado v_interseccion que contenga los valores en común entre los dos vectores.
*/

void similitudEntreVectores()
{
    int numeroIngresado = 0;
    int cincoNumeros[5] = {};
    int diezNumeros[10] = {};
    int v_interseccion[5] = {};

    for(int i = 0; i<5; i++)
    {
        cout << "Ingresar un numero: ";
        cin >> cincoNumeros[i];
        cout << endl;
    }

    cout << endl << endl;

    for(int i = 0; i<10; i++)
    {
        cout << "Ingresar un numero: ";
        cin >> diezNumeros[i];
        cout << endl;
    }

    for( int i = 0; i<5; i++)
    {
        for( int j = 0; j<10; j++)
        {
            if( cincoNumeros[i] == diezNumeros[j])
            {
                v_interseccion[i] = cincoNumeros[i];
                j=10;
            }
        }
    }


    cout << endl << endl;
    cout << "Los numeros en comun son: "<< endl;
    for( int i = 0; i<5; i++)
    {
        if( v_interseccion[ i ] != 0)
        {
            cout << v_interseccion[i] << " ";
        }
    }

}

int main()
{
    //cuantosPositivosHay();
    //existeNumeroEnArray();
    //minimo();
    //ventasDelMesPasado();
    //posAndNega();
    //eliminarYDesplazar();
    //AgregarYDesplazar();
    //gimnasio();
    //fabrica();
    //sorteo();
    //fabricaDePantalones();
    //sumarDosVectores();
    similitudEntreVectores();
    return 0;
}
