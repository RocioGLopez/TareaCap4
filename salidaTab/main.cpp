#include <iostream>

using namespace std;

int main()
{
    // inicializacion de variables
    int n = 1;
//encabezado
    cout << "N\t10*N\t 100*N\t 1000*N" << endl;

    // ciclo while
    while (n <= 5) {

        cout << n << "\t" << 10 * n << "\t" << 100 * n << "\t" << 1000 * n << endl;

        ++n;
    }

    return 0;
}
