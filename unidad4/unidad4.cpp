#include <iostream>

using namespace std;

//1
/**

Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.

Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
*/

void listaDeNumeros()
{
    int num, cantPositivos, cantNegativos;
    cout << "Ingresar numero" << endl;
    cin >> num;

    while( num != 0)
    {
        if( num > 0 )
        {
            cantPositivos++;
        }else if( num < 0)
        {
            cantNegativos++;
        }

        cout << "Ingresar numero" << endl;
        cin >> num;
    }

    cout << "Hay " << cantNegativos << " numeros negativos" << endl;

    cout << "Hay " << cantPositivos << " numeros positivos" << endl;
}


//2
/**

Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar el máximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listará Máximo -5.

*/

void listaConNumeroMaximo()
{
    int num, maximo;

    cout << "Ingrese un numero" << endl;
    cin >> num;

    maximo = num;

    while( num!=0 )
    {
        if( num > maximo)
        {
            maximo = num;
        }

        cout << "Ingrese un numero" << endl;
        cin >> num;
    }

    cout << "El numero maximo es " << maximo << endl;

}

//3
/**
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar el máximo y la posición dentro de la lista.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo: 35 - Posición: 7.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo: 55 - Posición: 5.
Ejemplo: -5, -10, -20, -8, -55, -400, -15, -20, 0. Se listará Máximo: -5 - Posición: 1.
*/

void listaConNumeroMaximoYPosicion()
{
    int num, maximo, posicion, i=0;

    cout << "Ingrese un numero" << endl;
    cin >> num;

    maximo = num;
    posicion = i;

    while( num!=0 )
    {
        if( num > maximo)
        {
            maximo = num;
            posicion = i;
        }

        i++;
        cout << "Ingrese un numero" << endl;
        cin >> num;
    }

    cout << "El numero maximo es " << maximo << " y la posicion es " << posicion << endl;
}


//4
/**
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar el máximo de los números pares.
Ejemplo: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listará Máximo 36.
Ejemplo: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listará Máximo 4.
Ejemplo: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listará Máximo 0
*/

void listaConNumeroMaximoNumerosPares()
{
    int num, maximo;

    cout << "Ingrese un numero" << endl;
    cin >> num;

    while( num!=0 )
    {
        if( num%2 == 0 && num > maximo)
        {
            maximo = num;
        }

        cout << "Ingrese un numero" << endl;
        cin >> num;
    }

    cout << "El numero maximo par es " << maximo << endl;
}

//5
/*
Hacer un programa que permita ingresar una lista de números positivos,
negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor
a 10. Calcular e informar:
- La cantidad de números que componen la lista.
Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7
**/

void listaConDiferenciaMenorADiez()
{
     int num, maximo, minimo, cantidadNum, diferencia;

    cout << "Ingrese un numero" << endl;
    cin >> num;

    maximo = num;
    minimo = num;

    diferencia = maximo - minimo;

    while( diferencia < 10 )
    {
        if( num > maximo)
        {
            maximo = num;
        }

        if( num < minimo )
        {
            minimo = num;
        }

        cantidadNum++;

        cout << "Ingrese un numero" << endl;
        cin >> num;

        diferencia = maximo - minimo;
    }

    cout << "La cantidad de numeros que lo componen es de  " << cantidadNum << endl;
}

//6
/**
Hacer un programa que permita ingresar una lista de números positivos,
negativos o cero hasta que se ingrese el 5º número par.
Calcular e informar:
- La cantidad de ternas de números negativos ingresados de manera
consecutiva.
Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2
*/

void listaCincoNumerosPares()
{
    int num, cantidadNumPares = 0, ternasNegativos, numAnterior;

    cout << "Ingrese un numero" << endl;
    cin >> num;



    while( cantidadNumPares != 5 )
    {
        if( num % 2 == 0)
        {
            cantidadNumPares++;
        }

        if(numAnterior < 0 && num < 0)
        {
            ternasNegativos++;
        }

        numAnterior = num;

        cout << "Ingrese un numero" << endl;
        cin >> num;
    }

    cout << "La cantidad de ternas negativas " << ternasNegativos << endl;
}

//7
/*
Dada una lista de números que finaliza cuando se ingresa un número divisible
por 7, informar cual es el anteúltimo y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.
Nota: Contemplar la posibilidad que podría no haber números impares en la
lista.
**/

void listaAnteultimoYUltimoImpar()
{
    int num, ultimoImpar = 0, anteultimoImpar = 0;

    cout << "Ingrese un numero" << endl;
    cin >> num;



    while( num % 7 != 0 )
    {

        if( num % 2 != 0 && ultimoImpar == 0)
        {
            ultimoImpar = num;
            anteultimoImpar = num;
        }else if( num % 2 != 0)
        {
            anteultimoImpar = ultimoImpar;
            ultimoImpar = num;
        }

        cout << "Ingrese un numero" << endl;
        cin >> num;
    }

    cout << "Ultimo impar " << ultimoImpar << endl << "Anteultimo impar " << anteultimoImpar << endl;
}


//8
/**
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, informar si todos están ordenados en forma creciente. En caso
de haber un número igual al anterior considerarlo como creciente. Por ejemplo
si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto
Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No
Ordenado”
*/


void listaOrdenadaCreciente()
{
    int num, numAnterior, ordenado = true;

    cout << "Ingrese un numero" << endl;
    cin >> num;

    numAnterior = num;

    while (num != 0)
    {
        if( num < numAnterior )
        {
            ordenado = false;
        }

        numAnterior = num;

        cout << "Ingrese un numero" << endl;
        cin >> num;
    }

    if( ordenado )
    {
        cout << "Lista ordenada";
    }else{
        cout << "Lista desordenada";
    }
}

//9
/**
Se dispone de la información de los exámenes rendidos por algunos
estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
- Legajo del estudiante (entero)
- Código de materia (entero)
- Nota (float)
La finalización de la carga de datos se indica con un legajo de estudiante mayor
a 30000. Calcular e informar:
- La nota promedio entre todos los estudiantes.
- El legajo del estudiante con menor nota.
- La cantidad de exámenes rendidos para la materia 10.
- El porcentaje de aprobados y no aprobados.
NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.

*/

void estudiantesUTN()
{
    int legajoEstudiante, codigoMateria, legajoEstudianteMenorNota, menorNota, cantidadExamenesMateriaDiez, cantEstudiantes;
    float nota, notaPromedioEstudiantes, aprobados, noAprobados;

    cout << "Ingrese un legajo" << endl;
    cin >> legajoEstudiante;

    cout << "Codigo de la materia" << endl;
    cin >> codigoMateria;

    cout << "Nota" << endl;
    cin >> nota;

    legajoEstudianteMenorNota = legajoEstudiante;
    menorNota = nota;

    while( legajoEstudiante < 30000 )
    {

        if( nota>=6 )
        {
            aprobados++;
        }else{
            noAprobados++;
        }

        notaPromedioEstudiantes += nota;

        if( nota < menorNota )
        {
            legajoEstudianteMenorNota = legajoEstudiante;
            menorNota = nota;
        }

        if( codigoMateria == 10 )
        {
            cantidadExamenesMateriaDiez++;
        }

        cantEstudiantes++;

        cout << "Ingrese un legajo" << endl;
        cin >> legajoEstudiante;

        cout << "Codigo de la materia" << endl;
        cin >> codigoMateria;

        cout << "Nota" << endl;
        cin >> nota;

    }

    cout << "La nota promedio de todos los estudiantes es de " << (notaPromedioEstudiantes / cantEstudiantes) << endl;
    cout << "El legajo del estudiante con menor nota es: " << legajoEstudianteMenorNota << endl;
    cout << "La cantidad de examenes rendidos para la materia 10 es de " << cantidadExamenesMateriaDiez << endl;
    cout << "El porcentaje de aprobados es de " << (aprobados / (aprobados + noAprobados)) * 100 << "%" << endl ;
    cout << "El porcentaje de desaprobados es de " << (noAprobados / (aprobados + noAprobados)) * 100 << "%" << endl;
}

//10
/**
 El festival Larapalooza, el mejor festival musical del mundo, brindará una serie
de conciertos distribuidos en tres jornadas distintas. Se desea un programa que
registre los artistas que participarán. Por cada artista se registró:
- Número de artista (entero)
- Integrantes (entero)
- Jornada (1, 2 o 3)
- Duración del show en minutos (entero)
La información no se encuentra ordenada bajo ningún criterio. La carga de
datos se finaliza con un número de artista igual a cero. Calcular e informar:
- El número de artista que realice el show más largo de la jornada 1.
- La cantidad de solistas (artistas de 1 integrante) que participaron en
cada una de las jornadas. (se muestran tres resultados).
- La jornada más extensa (en minutos).
- Duración promedio de show por artista (se muestra un resultado).
*/

void larapalooza()
{

    int numeroArtista, integrantes, jornada, duracionShow, artistaShowMasLargoJornadaUno, duracionArtistaShowJornadaUno , solistaJornadaUno, solistaJornadaDos, solistaJornadaTres, jornadaMasExtensa, duracionJornadaUno, duracionJornadaDos, duracionJornadaTres, cantArtistas;
    float promedioDuracionShowArtista;

    cout << "Ingrese un numero de artista" << endl;
    cin >> numeroArtista;

    cout << "Ingrese cantidad de integrantes" << endl;
    cin >> integrantes;

    cout << "Ingrese jornada (1, 2 o 3)" << endl;
    cin >> jornada;

    cout << "Duracion del show" << endl;
    cin >> duracionShow;

    if( jornada == 1)
    {
        artistaShowMasLargoJornadaUno = numeroArtista;
        duracionArtistaShowJornadaUno = duracionShow;
    }

    while(numeroArtista != 0)
    {

        cantArtistas++;
        promedioDuracionShowArtista += duracionShow;

        switch( jornada )
        {
            case '1':
            {
                if( duracionShow > duracionArtistaShowJornadaUno)
                {
                    artistaShowMasLargoJornadaUno = numeroArtista;
                    duracionArtistaShowJornadaUno = duracionShow;
                }

                if( integrantes == 1 )
                {
                    solistaJornadaUno++;
                }

                duracionJornadaUno += duracionShow;
                break;
            }

            case '2':
            {
                if( integrantes == 1 )
                {
                    solistaJornadaDos++;
                }
                duracionJornadaDos += duracionShow;
                break;
            }

            case '3':
            {
                if( integrantes == 1 )
                {
                    solistaJornadaTres++;
                }
                duracionJornadaTres += duracionShow;
                break;
            }
        }

        cout << "Ingrese un numero de artista" << endl;
        cin >> numeroArtista;

        cout << "Ingrese cantidad de integrantes" << endl;
        cin >> integrantes;

        cout << "Ingrese jornada (1, 2 o 3)" << endl;
        cin >> jornada;

        cout << "Duracion del show" << endl;
        cin >> duracionShow;

    }

    promedioDuracionShowArtista /= cantArtistas;

    cout << "El número de artista que realice el show más largo de la jornada 1: " << artistaShowMasLargoJornadaUno << endl;

    cout << "Cantidad de solistas:" << endl;
    cout << "    jornada 1: " <<  solistaJornadaUno << endl;
    cout << "    jornada 2: " <<  solistaJornadaDos << endl;
    cout << "    jornada 3: " <<  solistaJornadaTres << endl;

    cout << "La jornada más extensa es: jornada " << jornadaMasExtensa << endl;

    cout << "Duración promedio de show por artista " << promedioDuracionShowArtista << endl;

}

//11
/**
 * El teatro Lara Rex presentará la obra "Ojo que se viene el primer parcial" en una
única jornada. El mismo cuenta con 1200 butacas a un costo de $5000. Se pide
  un programa para poder ingresar todos los tickets vendidos para esta
presentación. Por cada venta se registró:
- Número de venta
- Cantidad de butacas
La venta de tickets se fnaliza con un número de venta igual a cero o bien
cuando no se dispongan de más butacas para vender. Se pide calcular e
informar:
- El total recaudado.
- La cantidad de butacas que quedaron sin vender.
*/

void laraRex()
{
    int numeroVenta,valorButaca = 5000, butacasAComprar = 0, cantidadButacasVendidas = 0, totalRecaudado=0, cantidadButacasSinVender=0, totalButacas = 1200;

    cout << "Ingresar numero de venta" << endl;
    cin >> numeroVenta;

    cout << "Ingresar numero de butacas a comprar" << endl;
    cin >> butacasAComprar;

    while( numeroVenta != 0)
    {
        cantidadButacasVendidas+=butacasAComprar;

        cout << "Ingresar numero de venta" << endl;
        cin >> numeroVenta;

        cout << "Ingresar numero de butacas a comprar" << endl;
        cin >> butacasAComprar;
    }

    totalRecaudado = cantidadButacasVendidas*valorButaca;
    cantidadButacasSinVender = totalButacas - cantidadButacasVendidas;

    cout << "La cantidad de butacas sin vender fue de " << cantidadButacasSinVender << endl;
    cout << "El total recaudado fue de " << totalRecaudado;
}

//12
/**
 Un número Simonírico es un número positivo divisible por 15 y a la vez divisible
    por 3 pero no divisible por 6. Hacer un programa que muestre los primeros 1000
    números Simoníricos. El usuario no debe ingresar nada.
 */

 void numeroSimonirico()
 {
     int i = 1, contNumSimonirico = 0;

     while( contNumSimonirico <= 1000)
     {
         if( i % 15 == 0 && i%3 == 0 && i%6 != 0 )
         {
            contNumSimonirico++;
            cout << i << endl;
         }

        i++;
     }
 }

//14
/**
Una universidad dispone de diez aulas para acomodar a una cantidad de
asistentes a una charla. Cada aula tiene una capacidad total de 60 personas. Se
necesita un programa que solicite la cantidad de asistentes a la charla y
determine la cantidad total de aulas necesarias para acomodarlos a todos.
Por ejemplo:
Si los asistentes son 120 se necesitarán 2 aulas.
Si los asistentes son 123 se necesitarán 3 aulas.
Si los asistentes son 40 se necesitará 1 aula.
DESAFÍO: No utilizar el operador de división ni el de resto en el algoritmo.
*/

void calcularAulas()
{
    int asistentesPorAula = 0, aulas = 0;


    cout << "Ingresar cantidad de asistentes por aula" << endl;
    cin >> asistentesPorAula;

    aulas = (asistentesPorAula / 60)+1;

    cout << aulas;

}

//15
/**
 Hacer el siguiente menu:
 Menu principal
 -------------------------------
 1. Ingresar la medida en metros
 2. Convertir a centimetros
 3. Convertir a kilometros
 4. Convertir a pulgadas
 5. Convertir a pies
 -------------------------------
 0. Salir del programa

 Si el usuario no elige 0 el programa tiene que seguir
 */

 void mostrarMenu()
 {
    cout << "       Menu principal" << endl << "-------------------------------" << endl;
    cout << " 1. Ingresar la medida en metros" << endl;
    cout << " 2. Convertir a centimetros" << endl;
    cout << " 3. Convertir a kilometro" << endl;
    cout << " 4. Convertir a pulgadas" << endl;
    cout << " 5. Convertir a pies" << endl;
    cout << "-------------------------------" << endl;
    cout << " 0. Salir del programa" << endl;
 }

 void mostrarOpciones()
 {
    cout << " 2. Convertir a centimetros" << endl;
    cout << " 3. Convertir a kilometro" << endl;
    cout << " 4. Convertir a pulgadas" << endl;
    cout << " 5. Convertir a pies" << endl;
    cout << "-------------------------------" << endl;
    cout << " 0. Salir del programa" << endl;
 }

 void menuReLoco()
 {
    int numero;
    float medida, medidaPasada;

    mostrarMenu();

    cin >> numero;
     switch(numero)
        {
            case 1:
            {
                cout << "Ingresar la medida en metros: ";
                cin >> medida;

               if (medida){
                   mostrarOpciones();
                    cin >> numero;
               }


            }

            case 2:
            {
                medidaPasada = medida * 100;
                cout << medida << " en metros equivale a " << medidaPasada << " cm" << endl << endl;

                cout << "Para salir introduzca 0, sino ingrese cualquier numero " << endl << endl;
                cin >> numero;
                if( numero == 0)
                {
                    break;
                }else{
                    menuReLoco();
                    cin >> numero;
                }
            }

            case 3:
            {
                medidaPasada = medida / 1000;
                cout << medida << " en metros equivale a " << medidaPasada << " km" << endl << endl;

                cout << "Para salir introduzca 0, sino ingrese cualquier numero " << endl << endl;
                cin >> numero;
                if( numero == 0)
                {
                    break;
                }else{
                    menuReLoco();
                    cin >> numero;
                }
            }

            case 4:
            {
                medidaPasada = medida * 39.3701;
                cout << medida << " en metros equivale a " << medidaPasada << " pulgadas" << endl << endl;

                cout << "Para salir introduzca 0, sino ingrese cualquier numero " << endl << endl;
                cin >> numero;
                if( numero == 0)
                {
                    break;
                }else{
                    menuReLoco();
                    cin >> numero;
                }
            }

            case 5:
            {
                medidaPasada = medida * 3.28084;
                cout << medida << " en metros equivale a " << medidaPasada << " pies" << endl << endl;

                cout << "Para salir introduzca 0, sino ingrese cualquier numero " << endl << endl;
                cin >> numero;
                if( numero == 0)
                {
                    break;
                }else{
                    menuReLoco();
                    cin >> numero;

                }
            }
        }

int main()
{

    //listaDeNumeros();
    //listaConNumeroMaximo();
    //listaConNumeroMaximoYPosicion();
    //listaConNumeroMaximoNumerosPares();
    //listaConDiferenciaMenorADiez();
    //listaCincoNumerosPares();
    //listaAnteultimoYUltimoImpar();
    //listaOrdenadaCreciente();
    //estudiantesUTN();
    //laraRex();
    //numeroSimonirico();
    //calcularAulas();
    menuReLoco();
    return 0;
}
