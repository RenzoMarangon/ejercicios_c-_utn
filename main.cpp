
#include <iostream>

using namespace std;

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
    
    
 }

int main()
{
    //laraRex();
    //numeroSimonirico();
    //calcularAulas();
    menuReLoco();
    return 0;
    
    
}
