#include <iostream>
using namespace std;

int main() {
    int numOriginal;
    int numeroInvertido = 0;
    int digito;
    int numero;

    cout << "Ingrese un entero de cinco digitos: ";
    cin >> numero;

    // Verificar tiene cinco dígitos
    if (numero >= 10000 && numero <= 99999) {
        numOriginal = numero;

        // Invertir el número
        //ciclo while
        while (numero > 0) {
            digito = numero % 10;
            numeroInvertido = numeroInvertido * 10 + digito;
            numero = numero / 10;
        }

        // Verificar si el número original es igual al invertido
        if (numOriginal == numeroInvertido) {
            cout << "El numero " << numeroOriginal << " es un palindromo." << endl;
        } else {
            cout << "El numero " << numeroOriginal << " no es un palindromo." << endl;
        }
    } else {
        cout << "Por favor, ingrese un entero de cinco digitos." << endl;
    }

    return 0;
}
