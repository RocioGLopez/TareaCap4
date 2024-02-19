#include <iostream>

using namespace std;

int main()
{
    // Inicialicion de variables
    int horasTrabajadas;
    double tarifaHoras;

// ingreso de datos
    cout << "Ingrese las horas trabajadas ( o -1 para salir): ";
    cin >> horasTrabajadas;

    // cicli while
    while (horasTrabajadas != -1) {

        cout << "Introduzca la tarifa por horas del empleado ($00.00): ";
        cin >> tarifaHoras;

        // Calculo de salario
        double salario;
        //ciclo if para saber que calculo hara
        if (horasTrabajadas <= 40) {
            salario = horasTrabajadas * tarifaHoras;
        } else {
            // Para horas trabajadas más allá de 40 se paga cuota y media
            salario = 40 * tarifaHoras + (horasTrabajadas - 40) * 1.5 * tarifaHoras;
        }

        // Mostrar salario
        cout << "El salario es $" << salario << endl;

        //mensaje para saber cuando salir del ciclo while
        cout << "Introduzca las horas trabajadas (-1 para salir): ";
        cin >> horasTrabajadas;
    }
    return 0;
}
