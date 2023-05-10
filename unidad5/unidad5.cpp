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

int main()
{
    //listaDeNumeros();
    //sueldos();
    return 0;
}