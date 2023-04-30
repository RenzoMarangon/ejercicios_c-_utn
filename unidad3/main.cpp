#include <iostream>

using namespace std;

//1
//Hacer un programa para mostrar por pantalla
//los números del 1 al 20 salteando de a 3 elementos. Es decir: 1, 4, 7, 10, 13, 16, 19.

void deTresEnTres()
{
    for(int i = 1; i<=20; i += 3)
    {
        cout << i << " ";
    }
}

//2
//Hacer un programa para mostrar por pantalla los números del 20 al 1 en orden decreciente.

void forDecreciente()
{
    for(int i = 20; i>0; i--)
    {
        cout << i << " ";
    }
}

//3
//Hacer un programa para que el usuario ingrese un número positivo
//y que luego se muestren por pantalla los números entre el 1 y el número ingresado por el usuario.
//Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.

void forHastaNumero()
{
    int num = 0;

    cout << "Ingrese un numero" << endl;
    cin >> num;

    for(int i = 1; i<=num; i++)
    {
        cout << i << " ";
    }
}

//4
//Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla
//los números entre el menor y el mayor de ambos.

//Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15;
//y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.

void forEntreMenorYMayor()
{
    int num1 = 0;
    int num2 = 0;
    int menor = 0;
    int mayor = 0;

    cout << "Ingrese un numero" << endl;
    cin >> num1;

    cout << endl << "Ingrese otro numero" << endl;
    cin >> num2;

    if( num1 > num2 )
    {
        mayor = num1;
        menor = num2;
    }else{
        mayor = num2;
        menor = num1;
    }

    for(int i = menor; i<=mayor; i++)
    {
        cout << i << " ";
    }
}


//5
//Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista
//y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos

void cuantosPositivosHay()
{

    int numerosAIngresar = 0, positivos = 0, num = 0;
    cout << "Indique la cantidad de numeros a ingresar" << endl;
    cin >> numerosAIngresar;


    for(int i = 0; i<numerosAIngresar; i++)
    {
        cout << "Ingrese un numero" << endl;
        cin >> num;

        if( num > 0 )
        {
            positivos++;
        }
    }

    cout << "Se ingresaron " << positivos << " numeros positivos";
}

//6
//Hacer un programa para ingresar una lista de 10 números,
//luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.

void cuantosPositivosNegativosCerosHay()
{

    int numerosAIngresar = 0, positivos = 0, negativos=0, cero=0 , num = 0;
    cout << "Indique la cantidad de numeros a ingresar" << endl;
    cin >> numerosAIngresar;


    for(int i = 0; i<numerosAIngresar; i++)
    {
        cout << "Ingrese un numero" << endl;
        cin >> num;

        if( num > 0 )
        {
            positivos++;
        }else if(num < 0){
            negativos++;
        }else{
            cero++;
        }
    }

    cout << "Se ingresaron :" << endl << positivos << " numeros positivos." << endl ;
    cout << negativos << " numeros negativos." << endl;
    cout << cero << " ceros.";
}

//7
//Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
//El sueldo máximo.
//El sueldo mínimo.
//El sueldo promedio.
//Cantidad de sueldos mayores a $50000.

void cantidadDeSueldos()
{
    int cantSueldos = 0,sueldo=0, sueldoMaximo = 0, sueldoMinimo = 0, mayoresA50k = 0;
    float sueldoPromedio = 0;

    cout << "Indique la cantidad de sueldos a ingresar" << endl;
    cin >> cantSueldos;

    for(int i = 0; i<cantSueldos; i++)
    {
        cout << "Indique el monto del sueldo" << endl;
        cin >> sueldo;

        if( i == 0){
            sueldoMaximo = sueldo;
            sueldoMinimo = sueldo;

        }else if( sueldo > sueldoMaximo ){
            sueldoMaximo = sueldo;
        }else if( sueldo < sueldoMinimo){
            sueldoMinimo = sueldo;
        }

        if(sueldo > 50000)
        {
            mayoresA50k++;
        }

        sueldoPromedio += sueldo;
    }

    sueldoPromedio = sueldoPromedio / cantSueldos;

    cout << "Sueldo maximo: " << sueldoMaximo << endl;
    cout << "Sueldo minimo: " << sueldoMinimo << endl;
    cout << "Sueldo promedio: " << sueldoPromedio << endl;
    cout << "Sueldos mayores a 50.000: " << mayoresA50k << endl;

}

//8
//Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
//El legajo del empleado con mayor sueldo

void empleadoMayorSueldo()
{
    int cantEmpleados, legajo, sueldo, legajoMayorSueldo, sueldoMayorSueldo;
    cout << "ingresar la cantidad de empleados" << endl;
    cin >> cantEmpleados;

    for(int i=0; i<cantEmpleados; i++)
    {
        cout << "ingresar el legajo del empleado" << endl;
        cin >> legajo;

        cout << "ingresar el sueldo del empleado" << endl;
        cin >> sueldo;

        if( i == 0 )
        {
            legajoMayorSueldo = legajo;
            sueldoMayorSueldo = sueldo;
        }else if( sueldo > sueldoMayorSueldo )
        {
            legajoMayorSueldo = legajo;
            sueldoMayorSueldo = sueldo;
        }
    }
    cout << "El legajo del empleado con mayor sueldo es " << legajoMayorSueldo << " y su sueldo es de " << sueldoMayorSueldo << endl;
}

//9
//Hacer un programa para ingresar una lista 10 números e informar el máximo de los negativos
//y el mínimo de los positivos.
//Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
//Máximo Negativo: -3.
//Mínimo Positivo: 2.

void maximoNegativoMinimoPositivo()
{
    int lista, num, maxNegativos = 0, minPositivos = 0;
    cout << "Indique la cantidad de numeros a ingresar" << endl;
    cin >> lista;

    for( int i = 0; i<lista; i++)
    {
        cout << "Ingrese un número" << endl;
        cin >> num;

        if( maxNegativos == 0 && num < 0 )
        {
            maxNegativos = num;
        }else if( num < 0 && num > maxNegativos)
        {
            maxNegativos = num;
        }

        if( minPositivos == 0 && num > 0 )
        {
            minPositivos = num;
        }else if( num > 0 && num < minPositivos)
        {
            minPositivos = num;
        }
    }

    cout << "El máximo de los negativos es: " << maxNegativos << endl;
    cout << "El mínimo de los positivos es: " << minPositivos;
}

//10
//Dada una lista de 7 números informar cual es el primer y segundo número impar ingresado.
//Ejemplo: 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.

void primerYSegundoImpar()
{
    int lista, num, primerImpar, segundoImpar, cantImpares;
    cout << "Indique la cantidad de numeros a ingresar" << endl;
    cin >> lista;

    for( int i = 0; i<lista; i++)
    {
        cout << "Ingrese un número" << endl;
        cin >> num;

       if( num % 2 != 0 )
       {
           if( cantImpares < 2 )
           {
               if( primerImpar == 0)
               {
                   primerImpar = num;
               }else{
                   segundoImpar = num;
               }

               cantImpares++;
           }

       }
    }

    cout << "El primer impar es: " << primerImpar << endl;
    cout << "El segundo impar es: " << segundoImpar;
}

//11
//Hacer un programa para ingresar una lista de 8 números
//y luego informar si todos están ordenados en forma creciente.
//En caso de haber dos números “empatados” considerarlos como crecientes.
//Por ejemplo si la lista fuera:
//Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
//Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”

void ordenados()
{
    int lista, num, numAnterior;
    bool ordenados = true;
    cout << "Indique la cantidad de numeros a ingresar" << endl;
    cin >> lista;

    for( int i = 0; i<lista; i++)
    {
        cout << "Ingrese un numero" << endl;
        cin >> num;

        if( i == 0)
        {
            numAnterior = num;
        }else if( numAnterior > num ){
            ordenados = false;
            numAnterior = num;
        }else{
            numAnterior = num;
        }

    }

    if( ordenados ){
          cout << "La lista de numeros es ordenada";
    }else{
        cout << "La lista de numeros está desordenada";
    }

}

//12
//Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados,
//aclarando cual es el máximo y cual el que le sigue.
//Ejemplo: 10, 8, 12, 14, 3 el resultado será 14 y 12.
//Ejemplo: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
//Ejemplo: -4, -8, -12, -20, -2 el resultado será -2 y -

void dosMayores()
{
    int lista, num, mayor, segundoMayor;
    cout << "Indique la cantidad de numeros a ingresar" << endl;
    cin >> lista;

    for( int i = 0; i<lista; i++)
    {
        cout << "Ingrese un numero" << endl;
        cin >> num;

        if(i == 0){
            mayor = num;
            segundoMayor = num;
        }else if(num > mayor){
            segundoMayor = mayor;
            mayor = num;
        }
    }

    cout << "Mayor: " << mayor << endl << "Segundo mayor: " << segundoMayor;
}

//13
//Hacer un programa para ingresar un número y luego informar todos los divisores de ese número.
//Ejemplo 1. Si se ingresa 6 se listarán: 1, 2, 3 y 6
//Ejemplo 2. Si se ingresa 9 se listarán: 1, 3 y 9.
//Ejemplo 3. Si se ingresa 11 se listarán 1 y 11.

void todosLosDivisores()
{
    int num, divisor;
    cout << "Indique el numero a dividir" << endl;
    cin >> num;

    for( int i = 1; i<=num; i++)
    {
        if( num%i == 0 )
        {
            cout << i << " ";
        }

    }
}

//14
//Hacer un programa para ingresar un número y luego informar la cantidad de divisores de ese número.
//Ejemplo 1. Si se ingresa 6 se listarán: 4 divisores.
//Ejemplo 2. Si se ingresa 9 se listarán: 3 divisores.
//Ejemplo 3. Si se ingresa 11 se listará: 2 divisores.

void cantidadDeDivisores()
{
    int num, contadorDivisores;
    cout << "Indique el numero a dividir" << endl;
    cin >> num;

    for( int i = 1; i<=num; i++)
    {
        if( num%i == 0 )
        {
            contadorDivisores++;
        }

    }
    cout << contadorDivisores << " divisores";
}

//15
//Hacer un programa para ingresar un número positivo y calcular e informar
//si el mismo es un número primero.
//Recordar que un número primo es un número natural que tiene exactamente dos divisores.

void esPrimo()
{
    int num, contadorDivisores;
    cout << "Indique el numero a dividir" << endl;
    cin >> num;

    for( int i = 1; i<=num; i++)
    {
        if( num%i == 0 )
        {
            contadorDivisores++;
        }

    }
    if(contadorDivisores == 2)
    {
        cout << "Número primo";
    }else{
        cout << "No es primo";
    }
}

//16
//Hacer un programa que muestre los números primos entre el 1 y el 10000.
//El usuario no debe ingresar nada en este programa.

void primosDelUnoAlDiezmil(){
    int contadorDivisores;
    cout << "Indique el numero a dividir" << endl;

    for( int i = 1; i<=10000; i++)
    {

        for( int j = 1; j<=i; j++)
        {
            if( i % j == 0){
                contadorDivisores++;
            }
        }
        if( contadorDivisores == 2){
            cout << i << " ";
        }
        contadorDivisores = 0;
    }
    cout << " ";
}

//17
/**
Una estación meteorológica registró una muestra climática de los últimos 15 días. Por cada día registró:
Número de día (entero)
Temperatura (float)
Milímetros de lluvia (float)
Visibilidad en km (float)
Hay un registro por cada día. La información se encuentra ordenada por día. Se pide calcular e informar:
El número de día que se haya registrado la temperatura máxima.
La amplitud térmica de todo el período.
La cantidad de días con neblina.
Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia. Mostrar "Quincena húmeda" si llovió al menos un tercio de los días. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.
*/

void muestraClimatica()
{

    int cantidadDiasMuestra, numeroDeDia, cantidadDiasConNeblina, cantidadDiasLluviosos;
    float temperatura, milimetrosDeLluvia, visibilidad, amplitudTermica, tempMaxima, tempMinima, diaMayorTemp;

    cout << "Ingrese la cantidad de dias para tomar la muestra:" << endl;
    cin >> cantidadDiasMuestra;

    for( int i = 1; i<=cantidadDiasMuestra; i++)
    {
        cout << "__________________________" <<endl;
        cout << "Dia: " << i << endl << endl;

        cout << "Ingresar temperatura: " << endl;
        cin >> temperatura;

        cout << "Ingresar milímetros de lluvia: " << endl;
        cin >> milimetrosDeLluvia;

        cout << "Ingresar cantidad de km de visibilidad: " << endl;
        cin >> visibilidad;

        //Guardo la temperatura maxima y minima
        if( i==1 )
        {
            tempMaxima = temperatura;
            tempMinima = temperatura;
            diaMayorTemp = i;
        }else if( temperatura > tempMaxima )
        {
            tempMaxima = temperatura;
            diaMayorTemp = i;
        }else if( temperatura < tempMinima )
        {
            tempMinima = temperatura;

        }

        //Guardo dias lluviosos
        if( milimetrosDeLluvia > 0 )
        {
            cantidadDiasLluviosos++;
        }

        //Guardo dias con neblina
        if( visibilidad < 2 )
        {
            cantidadDiasConNeblina++;
        }

    }

    amplitudTermica = tempMaxima - tempMinima;

    cout << "En el dia: " << diaMayorTemp << " se registro la temperatura maxima." << endl;

    cout << "La amplitud termica de todo el periodo fue de: " << amplitudTermica << endl;

    cout << "Cantidad de dias con neblina: " << cantidadDiasConNeblina << endl;

    if( cantidadDiasLluviosos >= cantidadDiasMuestra / 3)
    {
        cout << "Quincena lluviosa." << endl;
    }else{
        cout << "Quincena loca e seca." << endl;
    }
}


//18
/**
La cuenta corriente de la famosa cantante Lady Lara ha registrado 14
movimientos durante la semana pasada. Por cada movimiento se registró:
- Número de movimiento
- Día
- Tipo ('E' - Extracción / 'D' - Depósito)
- Importe
Existe un registro por movimiento. Se desea calcular e informar:
- El saldo final de la cuenta.
- El porcentaje de movimientos de extracción y el porcentaje de depósito.
- El depósito de mayor importe indicando también día y número de
movimiento.
- La cantidad de movimientos del día 10.
*/

void cuentaCorriente()
{

    int movimientosTotal = 15, numMovimiento, cantMovDiaDiez, diaMayorImporte, dia, cantExtracciones, cantDepositos, numMovimientoMayorImporte;
    float importe, saldoFinal, porcentajeExtracciones, porcentajeDeposito, movimientoMayorImporte;
    char tipoMovimiento;


    for( int i = 1; i<= movimientosTotal; i++)
    {

        numMovimiento = i;

        cout << "Indicar dia" << endl;
        cin >> dia;

        cout << "Indicar importe" << endl;
        cin >> importe;

        cout << "Indicar tipo de movimiento - 'E' - Extraccion / 'D' - Deposito " << endl;
        cin >> tipoMovimiento;

        //Mayor movimiento
        if( i == 1 )
        {
            diaMayorImporte = dia;
            movimientoMayorImporte = importe;
            numMovimientoMayorImporte = i;
        }else if( importe > movimientoMayorImporte)
        {
            diaMayorImporte = dia;
            movimientoMayorImporte = importe;
            numMovimientoMayorImporte = i;
        }


        //Extraccion - deposito
        if( tipoMovimiento == 'E' )
        {
            saldoFinal -= importe;
            cantExtracciones++;
        }else if ( tipoMovimiento == 'D'  )
        {
            saldoFinal += importe;
            cantDepositos++;
        }else{
            while( tipoMovimiento != 'E' && tipoMovimiento!='D')
            {
                cout << "El movimiento tiene que ser - 'E' - Extraccion / 'D' - Deposito " << endl;
                cin >> tipoMovimiento;
            }
        }

        //Dia 10
        if( dia == 10)
        {
            cantMovDiaDiez++;
        }
    }


    //Porcentajes
    porcentajeDeposito = cantDepositos * 100 /(cantDepositos + cantExtracciones);
    porcentajeExtracciones = cantExtracciones * 100 /(cantDepositos + cantExtracciones);

    cout << "El saldo final de la cuenta es de: " << saldoFinal << endl;

    cout << "Porcentaje de extracciones: " << porcentajeExtracciones << " porciento " << endl;
    cout << "Porcentaje de depositos: " << porcentajeDeposito << " porciento " << endl;

    cout << "El deposito de mayor importe fue de " << movimientoMayorImporte << " el dia " << diaMayorImporte << " movimiento numero " << numMovimientoMayorImporte << endl;
    cout << "La cantidad de movimientos del dia 10 fue de " << cantMovDiaDiez << endl;
}

//19
/**
Dada una lista de 10 números enteros. Calcular e informar el primer número par,
el primer número primo
*/

void primerParPrimerPrimo()
{
    int cantLista = 5, primerPar = 0, primerPrimo = 0, num, cantDivisores;

    for( int i = 0; i<cantLista; i++)
    {
        cout << "Ingresar un numero" << endl;
        cin >> num;

        //Pregunto por el par
        if( num%2 == 0 && primerPar == 0)
        {
            primerPar = num;
        }

        //Pregunto por el primo

        for( int j = 1; j<=num; j++)
        {
            if( num % j == 0)
            {
                cantDivisores++;
            }
        }

        if( cantDivisores == 2 && primerPrimo == 0)
        {
            primerPrimo = num;
        }

        cantDivisores = 0;
    }

    cout << "El primer numero par es " << primerPar << endl;
    cout << "El primer numero primo es " << primerPrimo << endl;
}

//20

/**
Se dispone de la información de los últimos 19 partidos del futbolista Diego
Armando Laradona. Por cada partido se registró:
- Número de partido
- Minutos jugados
- Tarjetas amarillas
- Tarjetas rojas
- Goles
Existe un registro para cada partido. Los mismos se encuentran ordenados por
número de partido. Se pide calcular e informar:
- La cantidad de partidos que no jugó (partidos con minutos igual a cero)
- La cantidad de partidos que jugó por completo (minutos >= 90)
- El promedio de tarjetas recibidas por partido.
- El número de partido en el que haya convertido mayor cantidad de goles.
Indicar también los goles convertidos.
- La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor
cantidad de partidos consecutivos en los que haya convertido
*/

void registroPartidosLaradona()
{
    int cantPartidos = 6, numeroDePartido, minutosJugados, tarjetasAmarillas, acumTarjetasAmarillas, tarjetasRojas,acumTarjetasRojas, partidosSinJugar, partidosCompletos, partidoConMasGoles, partidosConsecutivos = 0, mejorRacha, goles, golesMax;
    float promedioTarjetasPorPartido;

    for( int i = 1; i<= cantPartidos; i++)
    {
        cout << "     Partido " << i << endl << "_________________" << endl;

        cout << "Indique los minutos jugados" << endl;
        cin >> minutosJugados;

        cout << "Indique cantidad tarjetas AMARILLAS " << endl;
        cin >> tarjetasAmarillas;

        cout << "Indique cantidad tarjetas ROJAS " << endl;
        cin >> tarjetasRojas;

        cout << "Indique cantidad de goles " << endl;
        cin >> goles;

        numeroDePartido = i;

        //Partidos jugados - no jugados
        if( minutosJugados == 0 )
        {
            partidosSinJugar++;
        }else if( minutosJugados >= 90)
        {
            partidosCompletos++;
        }

        if( tarjetasAmarillas > 0 )
        {
            acumTarjetasAmarillas += tarjetasAmarillas;
        }
        if( tarjetasRojas > 0)
        {
            acumTarjetasRojas+= tarjetasRojas;
        }

        //Promedio de tarjetas x partido
        promedioTarjetasPorPartido = (acumTarjetasAmarillas + acumTarjetasRojas) / cantPartidos;

        //Partido con mas goles
        if( i == 1)
        {
            golesMax = goles;
            partidoConMasGoles = i;
        }else if( goles > golesMax)
        {
            golesMax = goles;
            partidoConMasGoles = i;
        }

        //Mejor racha con goles
        if( goles > 0)
        {
            partidosConsecutivos++;
        }else{
            partidosConsecutivos = 0;
        }

        if( partidosConsecutivos > mejorRacha)
        {
            mejorRacha = partidosConsecutivos;
        }
    }

    cout << "La cantidad de partidos que no jugo fue de " << partidosSinJugar << " partidos" << endl;
    cout << "La cantidad de partidos que jugo por completo fue de " << partidosCompletos << " partidos" << endl;

    cout << "El promedio de tarjetas por partido fue de " << promedioTarjetasPorPartido << " tarjetas" << endl;
    cout << "En el partido " << partidoConMasGoles << " se convirtieron una cantidad de " << golesMax << " de goles, siendo el partido con mas cantidat de goles" <<endl;

    cout << "La cantidad de partidos consecutivos donde convirtio un gol fue de " << mejorRacha << " partidos";

}


int main()
{
    //deTresEnTres();
    //forDecreciente();
    //forHastaNumero();
    //forEntreMenorYMayor();
    //cuantosPositivosHay();
    //cuantosPositivosNegativosCerosHay();
    //cantidadDeSueldos();
    //empleadoMayorSueldo();
    //maximoNegativoMinimoPositivo();
    //primerYSegundoImpar();
    //ordenados();
    //dosMayores();
    //todosLosDivisores();
    //cantidadDeDivisores();
    //esPrimo();
    //primosDelUnoAlDiezmil();
    //muestraClimatica();
    //cuentaCorriente();
    //primerParPrimerPrimo();
    registroPartidosLaradona();
    return 0;
}
