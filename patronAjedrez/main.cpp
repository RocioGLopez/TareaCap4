#include <iostream>
using namespace std;
/* 4.28 (Patrón de ajedrez de asteriscos) Escriba un programa que muestre el siguiente patrón de tablero de damas.*/
int main()
{
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "* ";
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
