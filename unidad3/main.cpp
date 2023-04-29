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
    muestraClimatica();
    return 0;
}
