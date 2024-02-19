#include <iostream>
//ejercicio 4.8 del libro de como programas en c++
//Rocio Lopez
using namespace std;
/*4.8 Escriba un programa en C++ que utilice las instrucciones del ejercicio 4.7 para calcular x elevada a la y
potencia. El programa debe tener una instrucción de repetición while.*/

int main()
{
    int i =1; //inicializacion de variable
    int potencia=1;

    cout<<"Ingrese un numero entero como base para la operacion: "<<endl;
    int x;
    cin >>x; //recibe datos para ingreso en var x

    cout<<"Ingrese un numero entero para exponente de la operacion:"<<endl;
    int y;
    cin >>y;

    //uso de ciclo while
    while (i<=y)
    {
        potencia = potencia*x;
        i++;
    }
    cout<<potencia<<endl;

    return 0;
}
