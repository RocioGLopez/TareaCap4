#include <iostream>

using namespace std;

int main()
{

    // inicialización de las variables
    int aprobados = 0;        // número de aprobados
    int reprobados = 0;       // número de reprobados
    int contadorEstudiantes = 1; // contador de estudiantes

    // procesa 10 estudiantes usando el ciclo controlado por contador
    while (contadorEstudiantes <= 10)
    {
        int resultado;

        do
        {
            cout << "ingrese resultado (1 = aprobado, 2 = reprobado): ";
            cin >> resultado;

            // Valida la entrada
            if (resultado != 1 && resultado != 2)
            {
                cout << "Entrada no válida. Intente de nuevo." << endl;
            }
        } while (resultado != 1 && resultado != 2);

        if (resultado == 1)
        {
            aprobados = aprobados + 1;
        }
        else
        {
            reprobados = reprobados + 1;
        }

         contadorEstudiantes = contadorEstudiantes + 1;
    }
    return 0;
}
