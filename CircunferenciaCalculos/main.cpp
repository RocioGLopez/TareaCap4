#include <iostream>
using namespace std;

int main() {
    // Declaracion de variables
    double radio, diametro, circunferencia, area;
    const double pi = 3.14159; //cosntante


    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    // Calculo del diámetro, circunferencia y  area
    diametro = 2 * radio;
    circunferencia = 2 * pi * radio;
    area = pi * radio *radio ;

    //resultados
    cout << "Diametro: " << diametro << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "Area: " << area << endl;

    return 0;
}
