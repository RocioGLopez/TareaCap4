#include <iostream>
using namespace std;

int main() {
    // Declaracion de variables
    double lado1, lado2, lado3;

    cout << "Ingrese el primer lado del triangulo: ";
    cin >> lado1;

    cout << "Ingrese el segundo lado del triangulo: ";
    cin >> lado2;

    cout << "Ingrese el tercer lado del triangulo: ";
    cin >> lado3;

    //verificar si son correctos los datos
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        cout << "Estos valores pueden representar los lados de un triangulo." << endl;
    } else {
        cout << "Estos valores no pueden representar los lados de un triangulo." << endl;
    }

    return 0;
}
