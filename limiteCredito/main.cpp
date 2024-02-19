#include <iostream>

using namespace std;

int main()
{
    //declaracion de variables
    int noCuenta;
    double saldoInicial, cargosTotales, creditosTotales, limiteCredito;

    // ingreso de datos
    cout<<"Ingrese el numero de cuenta (o -1 para salir)"<<endl;
    cin >> noCuenta;

    //ciclo while
    while (noCuenta != -1) {
        // Entrada de datos
        cout << "Ingrese saldo inicial: ";
        cin >> saldoInicial;

        cout << "Ingrese los cargos totales: ";
        cin >> cargosTotales;

        cout << "Ingrese el credito total: ";
        cin >> creditosTotales;

        cout << "Ingrese el limite de credito: ";
        cin >> limiteCredito;

        // Calculo de saldo
        double nuevoSaldo = saldoInicial + cargosTotales - creditosTotales;


        // Verificar si se excede el límite de crédito
        if (nuevoSaldo > limiteCredito) {
            cout << "El nuevo saldo es " << nuevoSaldo << endl;
            cout << "Cuenta: " << noCuenta << endl;
            cout << "Limite de credito: " << limiteCredito << endl;
            cout << "Saldo: " << nuevoSaldo << endl;
            cout << "Se excedio el limite de su credito." << endl;
        }
        else
        {
            cout<<"El nuevo saldo es: " <<nuevoSaldo<< endl;
            cout<<"Cuenta: " <<noCuenta << endl;
            cout<<"Limite de credito: " <<creditosTotales << endl;
            cout<<"Saldo: " <<saldoInicial << endl;

        }
        cout << "Introduzca el numero de cuenta (o -1 para salir): ";
        cin >> noCuenta;
    }


    return 0;
}
