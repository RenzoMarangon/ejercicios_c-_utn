
#include <iostream>
using namespace std;

/* 1 */
//Ingresar cant de horas laguradas y valor * hora
void salario(int horas, int valorHoras )
{
    int total = horas + valorHoras;
    cout << "El sueldo es de " << total;
}


/* 2 */
//Intercambiar 2 valores
void intercambioValores( int val1, int val2)
{

    cout << "valor 1 ingresado: " << val1 << endl;
    cout << "valor 2 ingresado: " << val2 << endl << endl;

    int val3 = val1;
    val1 = val2;

    val2=val3;


    cout << "Nuevo valor 1: " << val1 <<endl;
    cout << "Nuevo valor 2: " << val2 <<endl;
}


/* 3 */
//Una concesionaria paga 15k de sueldo +2k por auto vendido.
//Calcular el sueldo si se ingresa cantidad de autos vendidos
void calcularSueldoComision( int autosVendidos )
{

    int sueldoBase = 15;

    int comisionPorAutoVendido = 2;

    int total = sueldoBase + comisionPorAutoVendido*2;

    cout << "Se vendieron " << autosVendidos << " autos. " << "Por lo tanto el sueldo es de " << total;
}

/* 4 */
//Calcular la ocupacion y desocupacion de asientos de avion.
//Se ingresa por teclado la cantidad de asientos totales y cantidad de asientos ocupados.

void calcularDesocupacion(int asientosTotales, int asientosOcupados)
{
    float porcentajeOcupacion = ( asientosOcupados * 100 ) / asientosTotales;

    float porcentajeDesocupacion = 100 - porcentajeOcupacion;

    cout << "El porcentaje de ocupacion es de " << porcentajeOcupacion << endl;

    cout << "El porcentaje de desocupacion es de " << porcentajeDesocupacion << endl;

}

/**
    5

    Un comercio vende tres marcas de alfajores distintas A, B y C.
        Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y
        luego se informe el porcentaje de ventas para cada una de ellas.

    Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%
*/

void porcentajeDeAlfajores()
{
    int a, b, c, total;
    float  porcentajeA, porcentajeB, porcentajeC;
    cout << "Ingresar la cantidat de alfajores vendidos de marca A:" << endl;
    cin >> a;

    cout << "Ingresar la cantidat de alfajores vendidos de marca B:" << endl;
    cin >> b;

    cout << "Ingresar la cantidat de alfajores vendidos de marca C:" << endl;
    cin >> c;

    total = a + b + c;

    porcentajeA = 100 * a / total;

    porcentajeB = 100 * b / total;

    porcentajeC = 100 * c / total;

    cout << "Porcentaje A: " << porcentajeA << endl;

    cout << "Porcentaje B: " << porcentajeB << endl;

    cout << "Porcentaje C: " << porcentajeC << endl;
}



/**
    6

    Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes.
    El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.

    Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/

void recaudacionComercio()
{

    float recaudacionPromedioPorSemana, porcentajeSemana1, porcentajeSemana2,  porcentajeSemana3,  porcentajeSemana4;

    float semana1, semana2, semana3, semana4, totalRecaudado;

    cout << "Ingresar la cantidat de recaudacion de la semana 1:" << endl;
    cin >> semana1;

    cout << "Ingresar la cantidat de recaudacion de la semana 2:" << endl;
    cin >> semana2;

    cout << "Ingresar la cantidat de recaudacion de la semana 3:" << endl;
    cin >> semana3;

    cout << "Ingresar la cantidat de recaudacion de la semana 4:" << endl;
    cin >> semana4;

    totalRecaudado = semana1 + semana2 + semana3 + semana4;

    recaudacionPromedioPorSemana = totalRecaudado / 4;

    porcentajeSemana1 = 100 * semana1 / totalRecaudado;
    porcentajeSemana2 = 100 * semana2 / totalRecaudado;
    porcentajeSemana3 = 100 * semana3 / totalRecaudado;
    porcentajeSemana4 = 100 * semana4 / totalRecaudado;

    cout << endl << endl;
    cout << "La recaudacion promedio por semana fue de: " << recaudacionPromedioPorSemana << endl;

    cout << "El procentaje de la semana 1 fue de: " << porcentajeSemana1 << endl;
    cout << "El procentaje de la semana 2 fue de: " << porcentajeSemana2 << endl;
    cout << "El procentaje de la semana 3 fue de: " << porcentajeSemana3 << endl;
    cout << "El procentaje de la semana 4 fue de: " << porcentajeSemana4 << endl;

}

/**
    7

    Hacer un programa para ingresar por teclado el importe de una venta y el
    porcentaje de descuento aplicada a la misma y luego informar por pantalla el
    importa a pagar.
    Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15%
    entonces el total a pagar será de $ 1.020.
    Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el
    total a pagar será de $ 800.
*/

void pagoConDescuento()
{
    float importeVenta, descuento, totalAPagar;

    cout << "Ingresar el importe de la venta:" << endl;
    cin >> importeVenta;

    cout << "Ingresar el descuento de la venta:" << endl;
    cin >> descuento;

    totalAPagar = importeVenta * (100 - descuento )/100;

    cout << "Total a pagar: " << totalAPagar;

}

/**
    8

Hacer un programa para ingresar por teclado el importe de una venta sin el
descuento y el importe de esa misma venta con el descuento aplicado y luego
informar por pantalla el porcentaje de descuento aplicada a la misma.
Ejemplo 1. Si el importe de la venta sin descuento es $ 1.500 y el importe de la
venta con descuento es $ 1.200 entonces el porcentaje de descuento aplicado
fue el 20%.

*/

void mostrarDescuentoAplicado()
{
    float sinDescuento, conDescuento, descuento;

    cout << "Ingresar el importe de la venta con descuento:" << endl;
    cin >> conDescuento;

    cout << "Ingresar el descuento de la venta sin descuento:" << endl;
    cin >> sinDescuento;

    descuento = 100 - ( conDescuento * 100 / sinDescuento );

    cout << "El descuento de la venta es de: " << descuento << endl;
}

/**

    9

    Hacer un programa para ingresar por teclado una cantidad de minutos y
    mostrar por pantalla a cuantas horas y minutos equivalen.
    Ejemplo 1: si se ingresan 380 minutos el programa mostrará por pantalla que
    equivalen a 6 horas y 20 minutos.
    Ejemplo 2: si se ingresan 720 minutos el programa mostrará por pantalla que
    equivalen a 12 horas y 0 minutos.
    Ejemplo 3: si se ingresan 50 minutos el programa mostrará por pantalla que
    equivalen a 0 horas y 50 minutos
*/

void cantidadHorasMinutos()
{
    int horas, minutosIngresados, minutos;

    cout << "Ingresar la cantidad de minutos:" << endl;
    cin >> minutosIngresados;

    horas = minutosIngresados / 60;
    minutos = minutosIngresados % 60;

    cout << minutosIngresados << " minutos equivalen a: " << horas << " hora/s y " << minutos << " minuto/s";
}



/**
    16

    Hacer un programa para ingresar una letra en mayúsculas en una variable de
    tipo char y mostrar cuántas letras de diferencia hay en el alfabeto con respecto
    a la 'A'.
    Ejemplo:
    Si el usuario ingresa la letra C. Hay dos letras de diferencia con respecto a la A.
    Recomendación:
    Tratar de no googlear la solución. Si no sale, dejarlo decantar y probar muchas
    variantes.
*/


void cuantasLetrasDeDiferenciaHay()
{
    char letraInicial, letraIngresada;

    int valorLetraInicial, valorLetraIngresada, diferencia;
    cout << "Ingrese A:" << endl;
    cin >> letraInicial;


    cout << "Ingrese una letra:" << endl;
    cin >> letraIngresada;

    valorLetraInicial = int(letraInicial);

    valorLetraIngresada = int(letraIngresada);

    diferencia = valorLetraIngresada - valorLetraInicial;

    if(diferencia<0) diferencia*-1;

    if(diferencia > 13 ) diferencia++;

    if(valorLetraIngresada == -92 && valorLetraInicial != -92) diferencia = 14;

    cout << "Hay " << diferencia << " letras de diferencia en el alfabeto";

}

/**

    17

    El Laboratorio Gonzalez&Velez hace frascos de píldoras para aprender a
    programar. Cada frasco contiene 75 píldoras y cada píldora contiene 45mg de
    Briancetamol, 2grs de Pintoxicilina y 7mg de Ácido Simonítico.
    Nos solicitan un programa donde se ingrese la cantidad de frascos de un
    pedido y muestre la cantidad de miligramos de Briancetamol, Pintoxicilina y de
    Ácido Simonítico que son necesarios para elaborarlos.
*/

void calcularCantidadMiligramosEnPildoras()
{
    int frascos, pildoras, miligramosA, miligramosB, miligramosC, miligramosTotalesA, miligramosTotalesB, miligramosTotalesC;

    cout << "Ingresar la cantidad de frascos:" << endl;
    cin >> frascos;

    pildoras = 75;

    miligramosA = 75*45;
    miligramosB = 75*2;
    miligramosC = 75*7;

    miligramosTotalesA = frascos * miligramosA;
    miligramosTotalesB = frascos * miligramosB;
    miligramosTotalesC = frascos * miligramosC;

    cout << "Para fabricar " << frascos << "frascos se necesitan: " << endl;

    cout << miligramosTotalesA << " de Briancetamol" << endl;
    cout << miligramosTotalesB << " de Pintoxicilina" << endl;
    cout << miligramosTotalesC << " de Ácido Simonítico" << endl;
}



int main(){
whilex();
    //salario(4, 4);
    //intercambioValores(15,25);
    //calcularSueldoComision(10);
    //calcularDesocupacion( 143, 93 );
    //porcentajeDeAlfajores();
    //recaudacionComercio();
    //pagoConDescuento();
    //mostrarDescuentoAplicado();
    //cantidadHorasMinutos();
    //calcularCantidadMiligramosEnPildoras();
    //cuantasLetrasDeDiferenciaHay();



    return 0;
}
